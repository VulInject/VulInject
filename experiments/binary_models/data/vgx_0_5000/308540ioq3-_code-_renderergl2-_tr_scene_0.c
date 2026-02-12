void RE_AddRefEntityToScene( const refEntity_t *ent ) {
vec3_t cross;

if ( !tr.registered ) {
return;
}
if ( r_numentities >= MAX_REFENTITIES ) {
ri.Printf(PRINT_DEVELOPER, "RE_AddRefEntityToScene: Dropping refEntity, reached MAX_REFENTITIES\n");
return;
}
if ( Q_isnan(ent->origin[0]) || Q_isnan(ent->origin[1]) || Q_isnan(ent->origin[2]) ) {
static qboolean firstTime = qtrue;
if (firstTime) {
firstTime = qfalse;
ri.Printf( PRINT_WARNING, "RE_AddRefEntityToScene passed a refEntity which has an origin with a NaN component\n");
}
return;
}
if ( (int)ent->reType < 0 || ent->reType >= RT_MAX_REF_ENTITY_TYPE ) {
ri.Error( ERR_DROP, "RE_AddRefEntityToScene: bad reType %i", ent->reType );
}

backEndData->entities[r_numentities].e = *ent;
backEndData->entities[r_numentities].lightingCalculated = qfalse;

CrossProduct(ent->axis[0], ent->axis[1], cross);
backEndData->entities[r_numentities].mirrored = (DotProduct(ent->axis[2], cross) < 0.f);

r_numentities++;
}