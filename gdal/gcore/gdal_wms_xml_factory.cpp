/******************************************************************************
 * $Id$
 *
 * Project:  WMS XML Factory Builder
 * Purpose:  Implementation of an XML string generator to allow for creation
             of WMS xml files dynamically for use in GDAL.
 * Author:   Marvin Smith, marvin_smith1@me.com
 *
 ******************************************************************************
 * Copyright (c) 2016, Marvin Smith
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ****************************************************************************/
#include "gdal_wms_xml_factory.h"

// GDAL Libraries
#include "../frmts/wms/wmsdriver.h"
#include "../frmts/wms/minidriver_wms.h"

/************************************/
/*          Constructor             */
/************************************/
GDAL_WMS_XML_Factory::GDAL_WMS_XML_Factory()
 : m_min_x(0),
   m_min_y(0),
   m_max_x(0),
   m_max_y(0)
{
}


/************************************/
/*          Set the Bounds          */
/************************************/
void GDAL_WMS_XML_Factory::Set_Bounds( const double& min_x,
                                       const double& min_y,
                                       const double& max_x,
                                       const double& max_y )
{
    m_min_x = min_x;
    m_min_y = min_y;
    m_max_x = max_x;
    m_max_y = max_y;
}


/***********************************/
/*          Print as XML           */
/***********************************/
CPLString GDAL_WMS_XML_Factory::Get_XML()const
{
    // Create Driver    
    GDALWMSMiniDriver_WMS wms_dvr;
    

    // Write URL
    CPLString url("hello world");
   

    return url;
}

