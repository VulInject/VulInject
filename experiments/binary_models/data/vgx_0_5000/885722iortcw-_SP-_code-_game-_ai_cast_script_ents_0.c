


extern vec3_t playerMins, playerMaxs;
void SP_ai_marker( gentity_t *ent ) {
vec3_t dest;
trace_t tr;
vec3_t checkMins, checkMaxs;

if ( g_gametype.integer != GT_SINGLE_PLAYER ) {
G_FreeEntity( ent );
return;
}


VectorCopy( playerMins, checkMins );
checkMins[0] += 1;
checkMins[1] += 1;
VectorCopy( playerMaxs, checkMaxs );
checkMaxs[0] -= 1;
checkMaxs[1] -= 1;


if ( !( ent->spawnflags & 1 ) ) {

ent->r.currentOrigin[2] += 1.0; 
VectorSet( dest, ent->r.currentOrigin[0], ent->r.currentOrigin[1], ent->r.currentOrigin[2] - 4096 );
trap_Trace( &tr, ent->r.currentOrigin, checkMins, checkMaxs, dest, ent->s.number, MASK_PLAYERSOLID | CONTENTS_MONSTERCLIP );

if ( tr.startsolid ) {
G_Printf( "WARNING: ai_marker (%s) in solid at %s\n", ent->targetname, vtos( ent->r.currentOrigin ) );
return;
}

G_SetOrigin( ent, tr.endpos );
}
}