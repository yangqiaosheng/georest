GeoJSON is a format for encoding a geographic data. A GeoJSON object may represent a geometry, a feature, or a collection of features. In the GeoJSON the following geometry types are supported: Point, LineString, !Polygon, MultiPoint, MultiLineString, MultiPolygon, and GeometryCollection.
Features in GeoJSON contain a geometry object and additional properties, and a feature collection represents a list of features.

### GeoJSON renderer ###

  * The GeoREST GeoJSON renderer renders data as JSON object. To enable **Resource** rendering as JSON an **Representation element** with **renderer** attribute value "JSON" must be added in restcfg.xml file. More about [GeoREST Configuration Guide](Configuration.md).


In the example bellow, **JSON** renderer is enabled for **Resource** named property.
  * Example:
```
<Resource uripart="property">
   <Source type="MapGuide">
    <FeatureSource>Library://Samples/Sheboygan/Data/Parcels.FeatureSource</FeatureSource>
    <FeatureClass>SHP_Schema:Parcels</FeatureClass>
   </Source>
   <Representation renderer="JSON" pattern=".json"/>
</Resource>
```

Get property resource as JSON object:
```
georest.org/georest/rest/data/property/.json
```

> #### GeoREST JSON object ####

> #### JSON Response Syntax ####
```
   { "type": "FeatureCollection" ,
     "features" :
     [
       {
        "type":"Feature",
        "geometry":
	{ 
	   "type":<Geometry Type>,
	   "coordinates": [<Feature geometry ordinates>]
	},
	 "id":
	{
	   "<Feature ID property name>":<Feature ID property value>
	},
	"properties":
	{
	   "<propertyName1>" : <propertyValue1>,
           "<propertyName2>" : <propertyValue2> 
	   ...			   
	}
       }
     ]
   }
```


> #### A GeoJSON feature collection ####

  * **FeatureCollection** : is an object of type "FeatureCollection". This object must have a member with the name "features". "features" object is an array and each element in the array is a feature object as defined bellow.
  * **feature**: is and object with the type "Feature" and following members.
    * **geometry**:  The value of the geometry member is a geometry object. **Geometry** object can have an array of members (Geometry type object) if geometry is multi-geometry. Geometry type can be Point,Polygon,Line etc... . Each Geometry type object has member **coordinates**.
    * **properties**: The value of the properties member is an object (any JSON object or a JSON null value).
```
        "properties":
	{
	   "<propertyName1>" : <propertyValue1>,
           "<propertyName2>" : <propertyValue2> 
	   ...			   
	}
```
    * **id**: If a feature has a commonly used identifier


> #### JSON Response Example ####

```
 { 
    "type": "FeatureCollection" ,
    "features":
    [
     {
       "type":"Feature","geometry":
       {
         "type":"Polygon",
         "coordinates": [[[-87.755035756736021,43.782781961665691],[-87.757203038863295,43.782755760427854],
         [-87.757215483059937,43.783087507704749],[-87.75746914755544,43.783083980465591],[-87.757477928833538,43.783318051072897],
         [-87.757742952356963,43.783314365316187],[-87.757810292102718,43.785109069035386],[-87.75512851659748,43.78514149703846],
        [-87.755035756736021,43.782781961665691]]]
       },
       "id":
       {
	  "Autogenerated_SDF_ID":1
       },
       "properties":
       {
	   "Autogenerated_SDF_ID":1,"URL":"","NAME":"CITY OF SHEBOYGAN","ID":"628988","RSTATE":"WI","RYEAR":7777,"GEOEXTRA":9101001,
           "RBLDGVC":0,"RLDESCR1":"UNPLATTED LAND","RLANDVC":0,"RTYPE":"EXM","DETACHED_G":"0","RACRE":"14.25","RLOT":"IRREG","RNAME":"CITY OF SHEBOYGAN",
           "RLDESCR2":"PART OF THE SW NW SEC 9","NO_UNITS":0,"LAST_SALE":0,"YRBUILT":0,"RES_BED":0,"RES_FULL_B":0,
           "RPROPAD":"3616 MUELLER RD","RES_HALF_B":0,"KEYRLSEQ":"628988", "RLDESCR3":"DESC AS: COM IN THE S LINE","ATTACHED_G":"0","RCITY":"SHEBOYGAN",
           "RBILAD":"828 CENTER AVE","SQFT":0,"RSQFT":620730, "RZIP":53081,"RLDESCR4":"OF SD SW NW 1383.2' W OF THE","RSECLN":"","GEOMAIN":1523,
           "RES_TTL_RO":"0","RPROCD":"Y","RWARD":13,"SHPGEOM":null
        }
     }
    ]
 }
```

> More about [GeoJSON format](http://geojson.org/geojson-spec.html#examples).