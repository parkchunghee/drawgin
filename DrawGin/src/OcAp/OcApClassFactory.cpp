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

#include "OcCommon.h"
#include "OcError.h"
#include "OcRxObject.h"
#include "OcDbSmartPtrs.h"
#include "OcApClassFactory.h"
#include "OcApApplication.h"


BEGIN_OCTAVARIUM_NS


// Constructor for OcApClassFactoryBase template.
// Needs to be moved out of the header because OcRxObject
// an incomplete class definition in the header.
OcApClassFactoryBase::OcApClassFactoryBase(const char * key)
{
    OcRxObject::RegisterRx(key, this);
}

// Helper function so the OcRx based classes can self register
// themselves. The function is not meant to be used directly
// by application code because the second parameter is not
// type safe.
// For normal application code, use the type safe function
// OcApApplication::RegisterRxClass instead.
int octavarium::__Register_Rx_Class__(const std::string & className,
                                      void * pCreator)
{
    return OcApApplication::RegisterRxClass(className,
                                            (OcRxObject::BaseClassFactory*)
                                            pCreator);
}


END_OCTAVARIUM_NS