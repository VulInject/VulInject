void SV_Trace( trace_t *results, const vec3_t start, vec3_t mins, vec3_t maxs, const vec3_t end, int passEntityNum, int contentmask, int capsule ) {
moveclip_t	clip;
int			i;

if ( !mins ) {
mins = vec3_origin;
}
if ( !maxs ) {
maxs = vec3_origin;
}

Com_Memset ( &clip, 0, sizeof ( moveclip_t ) );


CM_BoxTrace( &clip.trace, start, end, mins, maxs, 0, contentmask, capsule );
clip.trace.entityNum = clip.trace.fraction != 1.0 ? ENTITYNUM_WORLD : ENTITYNUM_NONE;
if ( clip.trace.fraction == 0 ) {
*results = clip.trace;
return;		
}

clip.contentmask = contentmask;
clip.start = start;

VectorCopy( end, clip.end );
clip.mins = mins;
clip.maxs = maxs;
clip.passEntityNum = passEntityNum;
clip.capsule = capsule;





for ( i=0 ; i<3 ; i++ ) {
if ( end[i] > start[i] ) {
clip.boxmins[i] = clip.start[i] + clip.mins[i] - 1;
clip.boxmaxs[i] = clip.end[i] + clip.maxs[i] + 1;
} else {
clip.boxmins[i] = clip.end[i] + clip.mins[i] - 1;
clip.boxmaxs[i] = clip.start[i] + clip.maxs[i] + 1;
}
}


SV_ClipMoveToEntities ( &clip );

*results = clip.trace;
}