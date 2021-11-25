#pragma once
#ifndef NOVEL_H
#define NOVEl_H
#include "Book.h" // (3)

class Novel : public Book {
public:
	Novel(string);
	void print() const;
	~Novel();
};
