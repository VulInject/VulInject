void G_ResetMarkers( gentity_t* ent ) {
int i, time;
char buffer[256];
float period;

trap_Cvar_VariableStringBuffer( "sv_fps", buffer, sizeof( buffer ) - 1 );

period = atoi( buffer );
period = ( period == 0 ) ? 50.0f : 1000.f / period;

ent->client->topMarker = MAX_CLIENT_MARKERS - 1;
for ( i = MAX_CLIENT_MARKERS, time = level.time; i >= 0; i--, time -= period ) {
ent->client->clientMarkers[i].servertime =  time;
ent->client->clientMarkers[i].time =        time;

VectorCopy( ent->r.mins,            ent->client->clientMarkers[i].mins );
VectorCopy( ent->r.maxs,            ent->client->clientMarkers[i].maxs );
VectorCopy( ent->r.currentOrigin,   ent->client->clientMarkers[i].origin );
}
}