qboolean AICast_CheckAttackAtPos( int entnum, int enemy, vec3_t pos, qboolean ducking, qboolean allowHitWorld ) {
gentity_t   *ent;
vec3_t savepos;
int saveview;
qboolean rval;
cast_state_t *cs;

cs = AICast_GetCastState( entnum );
ent = &g_entities[cs->bs->entitynum];

VectorCopy( ent->r.currentOrigin, savepos );
VectorCopy( pos, ent->r.currentOrigin );

saveview = ent->client->ps.viewheight;
if ( ducking ) {
if ( ent->client->ps.viewheight != ent->client->ps.crouchViewHeight ) {
ent->client->ps.viewheight = ent->client->ps.crouchViewHeight;
}
} else {
if ( ent->client->ps.viewheight != ent->client->ps.standViewHeight ) {
ent->client->ps.viewheight = ent->client->ps.standViewHeight;
}
}

rval = AICast_CheckAttack_real( cs, enemy, allowHitWorld );

VectorCopy( savepos, ent->r.currentOrigin );
ent->client->ps.viewheight = saveview;

return rval;
}