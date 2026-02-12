void CG_CheckPlayerstateEvents( playerState_t *ps, playerState_t *ops ) {
int			i;
int			event;
centity_t	*cent;

if ( ps->externalEvent && ps->externalEvent != ops->externalEvent ) {
cent = &cg_entities[ ps->clientNum ];
cent->currentState.event = ps->externalEvent;
cent->currentState.eventParm = ps->externalEventParm;
CG_EntityEvent( cent, cent->lerpOrigin );
}

cent = &cg.predictedPlayerEntity; 

for ( i = ps->eventSequence - MAX_PS_EVENTS ; i < ps->eventSequence ; i++ ) {

if ( i >= ops->eventSequence


|| (i > ops->eventSequence - MAX_PS_EVENTS && ps->events[i & (MAX_PS_EVENTS-1)] != ops->events[i & (MAX_PS_EVENTS-1)]) ) {

event = ps->events[ i & (MAX_PS_EVENTS-1) ];
cent->currentState.event = event;
cent->currentState.eventParm = ps->eventParms[ i & (MAX_PS_EVENTS-1) ];
CG_EntityEvent( cent, cent->lerpOrigin );

cg.predictableEvents[ i & (MAX_PREDICTED_EVENTS-1) ] = event;

cg.eventSequence++;
}
}
}