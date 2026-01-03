#pragma once

#include <string>

class Book {
private:
    int id;
    std::string title;
    std::string author;
    bool borrowed;

public:
    Book(int id, const std::string& title, const std::string& author);

    int getId() const;
    const std::string& getTitle() const;
    const std::string& getAuthor() const;
    bool isBorrowed() const;

    void borrow();
    void returned();
};
