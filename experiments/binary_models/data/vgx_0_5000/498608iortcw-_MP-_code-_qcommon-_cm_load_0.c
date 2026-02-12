void CMod_LoadBrushes( lump_t *l ) {
dbrush_t    *in;
cbrush_t    *out;
int i, count;

in = ( void * )( cmod_base + l->fileofs );
if ( l->filelen % sizeof( *in ) ) {
Com_Error( ERR_DROP, "MOD_LoadBmodel: funny lump size" );
}
count = l->filelen / sizeof( *in );

cm.brushes = Hunk_Alloc( ( BOX_BRUSHES + count ) * sizeof( *cm.brushes ), h_high );
cm.numBrushes = count;

out = cm.brushes;

for ( i = 0 ; i < count ; i++, out++, in++ ) {
out->sides = cm.brushsides + LittleLong( in->firstSide );
out->numsides = LittleLong( in->numSides );

out->shaderNum = LittleLong( in->shaderNum );
if ( out->shaderNum < 0 || out->shaderNum >= cm.numShaders ) {
Com_Error( ERR_DROP, "CMod_LoadBrushes: bad shaderNum: %i", out->shaderNum );
}
out->contents = cm.shaders[out->shaderNum].contentFlags;

CM_BoundBrush( out );
}

}