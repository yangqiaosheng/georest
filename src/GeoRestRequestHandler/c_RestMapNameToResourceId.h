//
//  Copyright (C) 2009 by  Haris Kurtagic  www.sl-king.com
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of version 2.1 of the GNU Lesser
//  General Public License as published by the Free Software Foundation.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//

#ifndef _c_RestMapNameToResourceId_h
#define _c_RestMapNameToResourceId_h

class c_CfgDataResource;

class c_RestMapNameToResourceId
{
public:
  c_RestMapNameToResourceId(void);
public:
  ~c_RestMapNameToResourceId(void);
  
public:
  static const c_CfgDataResource* GetDataResource(const STRING& Name);
  //static bool GetRestUriParamForClass( const STRING& ClassName,STRING& RestUriParam );  
  //static const c_CfgDataResource* GetCfgDataForClass( const STRING& ClassName);

};

#endif 
