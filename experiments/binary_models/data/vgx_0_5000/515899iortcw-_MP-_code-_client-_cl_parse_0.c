void CL_DeltaEntity( msg_t *msg, clSnapshot_t *frame, int newnum, entityState_t *old,
qboolean unchanged ) {
entityState_t   *state;



state = &cl.parseEntities[cl.parseEntitiesNum & ( MAX_PARSE_ENTITIES - 1 )];

if ( unchanged ) {
*state = *old;
} else {
MSG_ReadDeltaEntity( msg, old, state, newnum );
}

if ( state->number == ( MAX_GENTITIES - 1 ) ) {
return;     
}


if ( clc.onlyVisibleClients ) {
if ( state->number < MAX_CLIENTS ) {
if ( isEntVisible( state ) ) {
entLastVisible[state->number] = frame->serverTime;
state->eFlags &= ~EF_NODRAW;
} else {
if ( entLastVisible[state->number] < ( frame->serverTime - 600 ) ) {
state->eFlags |= EF_NODRAW;
}
}
}
}

cl.parseEntitiesNum++;
frame->numEntities++;
}