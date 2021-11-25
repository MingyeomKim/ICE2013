#pragma once
#ifndef BIOGRAPHY_H
#define BIOGRAPHY_H
#include "Book.h" // (6)

class Biography :public Book {
public:
	Biography(string);
	void print() const;
	~Biography();
};

#endif

