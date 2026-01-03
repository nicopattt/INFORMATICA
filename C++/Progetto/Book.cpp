#include "Book.h"

Book::Book(int id, const std::string& title, const std::string& author)
    : id(id), title(title), author(author), borrowed(false) {}

int Book::getId() const { return id; }
const std::string& Book::getTitle() const { return title; }
const std::string& Book::getAuthor() const { return author; }
bool Book::isBorrowed() const { return borrowed; }

void Book::borrow() { borrowed = true; }
void Book::returned() { borrowed = false; }
