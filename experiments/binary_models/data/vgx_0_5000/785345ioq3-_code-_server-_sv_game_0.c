void SV_SetBrushModel( sharedEntity_t *ent, const char *name ) {
clipHandle_t	h;
vec3_t			mins, maxs;

if (!name) {
Com_Error( ERR_DROP, "SV_SetBrushModel: NULL" );
}

if (name[0] != '*') {
Com_Error( ERR_DROP, "SV_SetBrushModel: %s isn't a brush model", name );
}


ent->s.modelindex = atoi( name + 1 );

h = CM_InlineModel( ent->s.modelindex );
CM_ModelBounds( h, mins, maxs );
VectorCopy (mins, ent->r.mins);
VectorCopy (maxs, ent->r.maxs);
ent->r.bmodel = qtrue;

ent->r.contents = -1;		

SV_LinkEntity( ent );		
}