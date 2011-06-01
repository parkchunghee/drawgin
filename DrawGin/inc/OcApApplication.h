/****************************************************************************
**
** This file is part of DrawGin library. A C++ framework to read and
** write .dwg files formats.
**
** Copyright (C) 2011 Paul Kohut.
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

#ifndef OcApApplication_h__
#define OcApApplication_h__

BEGIN_OCTAVARIUM_NS

OcApApplicationPtr Application(void);
void ShutdownApplication(void);

class OcDbDatabase;

class OcApApplication : public OcRxObject
{
    OC_DECLARE_CLASS(OcApApplication, OcRxObject);
protected:
    OcApApplication(void);
public:

    virtual ~OcApApplication(void);

    static OcApApplicationPtr Create(void);

    OcDbDatabasePtr WorkingDatabase(void);
    void SetWorkingDatabase(OcDbDatabasePtr database);

private:
    OcDbDatabasePtr m_database;

};

END_OCTAVARIUM_NS

#endif // OcApApplication_h__