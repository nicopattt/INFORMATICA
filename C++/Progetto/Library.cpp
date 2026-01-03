#include "Library.h"
#include <algorithm>

Library::Library() : nextId(1) {}

int Library::addBook(const std::string& title, const std::string& author) {
    books.emplace_back(nextId, title, author);
    return nextId++;
}

int Library::findIndexById(int id) const {
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i].getId() == id) return static_cast<int>(i);
    }
    return -1;
}

bool Library::removeBook(int id) {
    auto it = std::remove_if(books.begin(), books.end(), [id](const Book& b){ return b.getId() == id; });
    if (it == books.end()) return false;
    books.erase(it, books.end());
    return true;
}

std::optional<std::reference_wrapper<Book>> Library::findById(int id) {
    int idx = findIndexById(id);
    if (idx < 0) return std::nullopt;
    return books[idx];
}

std::vector<Book> Library::listAll() const {
    return books;
}

std::vector<Book> Library::findByTitle(const std::string& query) const {
    std::vector<Book> res;
    for (const auto& b : books) {
        if (b.getTitle().find(query) != std::string::npos) res.push_back(b);
    }
    return res;
}

bool Library::borrowBook(int id) {
    int idx = findIndexById(id);
    if (idx < 0) return false;
    if (books[idx].isBorrowed()) return false;
    books[idx].borrow();
    return true;
}

bool Library::returnBook(int id) {
    int idx = findIndexById(id);
    if (idx < 0) return false;
    if (!books[idx].isBorrowed()) return false;
    books[idx].returned();
    return true;
}
