/****************************************************************************
**
** This file is part of DrawGin library. A C++ framework to read and
** write .dwg files formats.
**
** Copyright (C) 2011, 2012, 2013 Paul Kohut.
** All rights reserved.
** Author: Paul Kohut (pkohut2@gmail.com)
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 3 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public
** License along with this library; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
**
** DrawGin project hosted at: http://code.google.com/p/drawgin/
**
** Authors:
**      pk          Paul Kohut <pkohut2@gmail.com>
**
****************************************************************************/

#ifndef OcDbObjectId_h__
#define OcDbObjectId_h__


BEGIN_OCTAVARIUM_NS

class OcDbObjectId
{
public:
    OcDbObjectId(void);
    virtual ~OcDbObjectId(void);
    std::wstring ToString() const;
    void Handle(const int64_t handle);
    const int64_t & Handle(void) const;

    friend std::ostream& operator<<(std::ostream& out, const OcDbObjectId& objId);
private:
    int64_t m_handle;
};

END_OCTAVARIUM_NS

#endif // OcDbObjectId_h__
