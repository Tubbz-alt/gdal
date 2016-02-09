
include ../../GDALmake.opt

CPPFLAGS :=	-I$(GDAL_ROOT)/frmts/vrt $(CPPFLAGS) $(JSON_INCLUDE) -I$(GDAL_ROOT)/ogr/ogrsf_frmts/geojson
LNK_FLAGS :=	$(LDFLAGS)
DEP_LIBS =	$(EXE_DEP_LIBS) $(XTRAOBJ)

BIN_LIST=gdal_fetch_wms$(EXE)

#  Check for GEOS
ifeq ($(HAVE_GEOS),yes)
CPPFLAGS 	:=	$(CPPFLAGS) -DHAVE_GEOS=1 $(GEOS_CFLAGS)
endif


all: $(BIN_LIST)


lib-depend:
	(cd ../gcore ; $(MAKE) )
	(cd ../port ; $(MAKE) )



#------------------------------------------------#
#-   Construct the GDAL Fetch WMS Application   -#
#------------------------------------------------#
gdal_fetch_wms$(EXE): gdal_fetch_wms.cpp
	$(LD) -o $@ $< $(XTRAOBJ) $(CONFIG_LIBS) $(CONFIG_LIB_UTILS) $(GDAL_INCLUDE) $(CPPFLAGS) $(CXXFLAGS)


clean:
	$(RM) *.o $(BIN_LIST)


