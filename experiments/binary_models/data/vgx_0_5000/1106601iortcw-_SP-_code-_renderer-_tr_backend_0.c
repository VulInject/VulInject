void RB_ZombieFX( int part, drawSurf_t *drawSurf, int oldNumVerts, int oldNumIndex ) {
int numSurfVerts;
float deltaTime;
char    *surfName;
trZombieFleshHitverts_t *fleshHitVerts;



if ( *drawSurf->surface == SF_MD3 ) {
surfName = ( (md3Surface_t *)drawSurf->surface )->name;
} else if ( *drawSurf->surface == SF_MDC ) {
surfName = ( (mdcSurface_t *)drawSurf->surface )->name;
} else {
Com_Printf( "RB_ZombieFX: unknown surface type\n" );
return;
}


if ( !Q_strncmp( surfName, "u_sk", 4 ) ) {
return;
}

if ( !Q_strncmp( surfName, "l_sk", 4 ) ) {
return;
}

if ( !Q_strncmp( surfName, "h_sk", 4 ) ) {
return;
}

numSurfVerts = tess.numVertexes - oldNumVerts;

if ( numSurfVerts > ZOMBIEFX_MAX_VERTS ) {
Com_Printf( "RB_ZombieFX: exceeded ZOMBIEFX_MAX_VERTS\n" );
return;
}

deltaTime = backEnd.currentEntity->e.shaderTime;
if ( ZOMBIEFX_FADEOUT_TIME_SEC < deltaTime ) {

tess.numVertexes = oldNumVerts;
tess.numIndexes = oldNumIndex;
return;
}

fleshHitVerts = &zombieFleshHitVerts[backEnd.currentEntity->e.entityNum][part];


RB_ZombieFXFullAlpha( oldNumVerts, numSurfVerts );


if ( !Q_stricmp( surfName, zombieFxFleshHitSurfaceNames[part] ) ) {


if ( fleshHitVerts->numNewHits ) {
RB_ZombieFXProcessNewHits( fleshHitVerts, oldNumVerts, numSurfVerts );
}


if ( fleshHitVerts->isHit ) {
RB_ZombieFXShowFleshHits( fleshHitVerts, oldNumVerts, numSurfVerts );
}
}


if ( deltaTime ) {
RB_ZombieFXDecompose( oldNumVerts, numSurfVerts, deltaTime / ZOMBIEFX_FADEOUT_TIME_SEC );
}

}