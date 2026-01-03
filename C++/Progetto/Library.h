#pragma once

#include "Book.h"
#include <vector>
#include <optional>
#include <functional>
#include <string>

class Library {
private:
    std::vector<Book> books;
    int nextId;

    int findIndexById(int id) const;

public:
    Library();

    // returns assigned id
    int addBook(const std::string& title, const std::string& author);
    bool removeBook(int id);

    std::optional<std::reference_wrapper<Book>> findById(int id);
    std::vector<Book> listAll() const;
    std::vector<Book> findByTitle(const std::string& query) const;

    bool borrowBook(int id);
    bool returnBook(int id);
};