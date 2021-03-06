/*
* Copyright (C) 2004-2009 Geometer Plus <contact@geometerplus.com>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
* 02110-1301, USA.
*/

#ifndef __ONYX_DOC_BOOKREADER_H__
#define __ONYX_DOC_BOOKREADER_H__

#include <vector>

#include "../../bookmodel/BookReader.h"

class BookModel;

class DocBookReader {

public:
    DocBookReader(BookModel &model, const std::string &encoding);
    ~DocBookReader();

    bool readDocument(const std::string &fileName);

    BookReader & baseBookReader() { return myBookReader; }

private:
    BookReader myBookReader;

    std::string myOutputBuffer;

    int myImageIndex;
    int myFootnoteIndex;

};

inline DocBookReader::~DocBookReader() {}

#endif /* __ONYX_DOC_BOOKREADER_H__ */
