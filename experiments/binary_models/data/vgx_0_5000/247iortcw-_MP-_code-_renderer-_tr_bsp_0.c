static void R_LoadSubmodels( lump_t *l ) {
dmodel_t    *in;
bmodel_t    *out;
int i, j, count;

in = ( void * )( fileBase + l->fileofs );
if ( l->filelen % sizeof( *in ) ) {
ri.Error( ERR_DROP, "LoadMap: funny lump size in %s",s_worldData.name );
}
count = l->filelen / sizeof( *in );

s_worldData.bmodels = out = ri.Hunk_Alloc( count * sizeof( *out ), h_low );

for ( i = 0 ; i < count ; i++, in++, out++ ) {
model_t *model;

model = R_AllocModel();

assert( model != NULL );            
if ( model == NULL ) {
ri.Error(ERR_DROP, "R_LoadSubmodels: R_AllocModel() failed");
}

model->type = MOD_BRUSH;
model->bmodel = out;
Com_sprintf( model->name, sizeof( model->name ), "*%d", i );

for ( j = 0 ; j < 3 ; j++ ) {
out->bounds[0][j] = LittleFloat( in->mins[j] );
out->bounds[1][j] = LittleFloat( in->maxs[j] );
}

out->firstSurface = s_worldData.surfaces + LittleLong( in->firstSurface );
out->numSurfaces = LittleLong( in->numSurfaces );
}
}