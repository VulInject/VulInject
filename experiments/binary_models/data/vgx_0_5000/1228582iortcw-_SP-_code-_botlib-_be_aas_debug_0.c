void AAS_ShowAreaPolygons( int areanum, int color, int groundfacesonly ) {
int i, facenum;
aas_area_t *area;
aas_face_t *face;


if ( areanum < 0 || areanum >= ( *aasworld ).numareas ) {
botimport.Print( PRT_ERROR, "area %d out of range [0, %d]\n",
areanum, ( *aasworld ).numareas );
return;
} 

area = &( *aasworld ).areas[areanum];

for ( i = 0; i < area->numfaces; i++ )
{
facenum = abs( ( *aasworld ).faceindex[area->firstface + i] );

if ( facenum >= ( *aasworld ).numfaces ) {
botimport.Print( PRT_ERROR, "facenum %d out of range\n", facenum );
} 
face = &( *aasworld ).faces[facenum];

if ( groundfacesonly ) {
if ( !( face->faceflags & ( FACE_GROUND | FACE_LADDER ) ) ) {
continue;
}
} 
AAS_ShowFacePolygon( facenum, color, face->frontarea != areanum );
} 
} 
