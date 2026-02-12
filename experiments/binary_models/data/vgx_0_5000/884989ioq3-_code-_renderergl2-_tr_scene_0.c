void R_AddPolygonSurfaces( void ) {
int			i;
shader_t	*sh;
srfPoly_t	*poly;
int		fogMask;

tr.currentEntityNum = REFENTITYNUM_WORLD;
tr.shiftedEntityNum = tr.currentEntityNum << QSORT_REFENTITYNUM_SHIFT;
fogMask = -((tr.refdef.rdflags & RDF_NOFOG) == 0);

for ( i = 0, poly = tr.refdef.polys; i < tr.refdef.numPolys ; i++, poly++ ) {
sh = R_GetShaderByHandle( poly->hShader );
R_AddDrawSurf( ( void * )poly, sh, poly->fogIndex & fogMask, qfalse, qfalse, 0   );
}
}