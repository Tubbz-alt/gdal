
// GDAL Libraries
#include <gdal.h>
#include <gdal_wms_xml_factory.h>


// C++ Libraries
#include <iostream>


int main( int argc, char* argv[] )
{
    // Register GDAL
    GDALAllRegister();
     
    
    // Define our WMS Parameters
    std::string url="http://raster.nationalmap.gov/arcgis/services/Orthoimagery/USGS_EROS_Ortho_NAIP/ImageServer/WMSServer?";
    double min_x       = -120.202969465;
    double min_y       =   38.903235908; 
    double max_x       = -119.849812467;
    double max_y       =   39.2575941201;
    std::string format = "image/png";
    int rows = 1000;
    int cols = 1000;
    std::string crs = "EPSG:4326";

    // Create XML File
    GDAL_WMS_XML_Factory xml_factory(url);
    xml_factory.Set_Bounds( min_x, 
                            min_y,
                            max_x,
                            max_y );

    // Set the Format
    xml_factory.SetImageFormat( format );

    xml_factory.SetImageRows( rows );
    xml_factory.SetImageCols( cols );

    xml_factory.SetCRS(crs);
    xml_factory.AddLayer( "0" );

    // Print the URL
    std::cout << "URL: " << xml_factory.Get_XML() << std::endl;

    
    // Clean Up

    return 0;
}

