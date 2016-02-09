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
#ifndef GDAL_WMS_XML_FACTORY_INCLUDED
#define GDAL_WMS_XML_FACTORY_INCLUDED

// GDAL Libraries
#include"cpl_string.h"

/**
 * @class GDAL_WMS_XML_Factory
 *
 * @brief Constructs WMS driver compatible XML files.
*/
class GDAL_WMS_XML_Factory
{
    public:
        
        /**
         * @brief Constructor
         */
         GDAL_WMS_XML_Factory( CPLString const& server_url );
        

        /**
         * @brief Construct string.
        */
        CPLString  Get_XML()const;


        /**
         * @brief Write XML
        */
        void Write_XML();


        /**
         * @brief Set Bounding Box.
        */
        void Set_Bounds( const double& min_x,
                         const double& min_y,
                         const double& max_x,
                         const double& max_y );


        /**
         * @brief Set the Image Rows
        */
        void SetImageRows( const int& rows );


        /**
         * @brief Set the Image Columns
        */
        void SetImageCols( const int& cols );


        /**
         * @brief Set the image format.
        */
        void SetImageFormat( CPLString const& image_format );
        

        /**
         * @brief Set the CRS 
         *
         * @param[in] crs
        */
        void SetCRS( CPLString const& crs );


        /**
         * @brief Set the SRS 
         *
         * @param[in] srs
        */
        void SetSRS( CPLString const& srs );


        /** 
         * @brief Add Layer
        */
        void AddLayer( const CPLString& layer );

    private:
        
        /// Server URL
        CPLString m_server_url;

        /// Image Size
        int m_rows;
        int m_cols;

        /// Bounding Box
        double m_min_x;
        double m_min_y;
        double m_max_x;
        double m_max_y;
        
        /// Image Format
        CPLString m_image_format;

        /// Layer
        CPLString m_layers;

        /// SRS
        CPLString m_crs;
        CPLString m_srs;

}; // End of GDAL_WMS_XML_Factory


#endif
