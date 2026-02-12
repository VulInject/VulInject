static void PM_GroundTraceMissed( void ) {
trace_t trace;
vec3_t point;

if ( pm->ps->groundEntityNum != ENTITYNUM_NONE ) {

if ( pm->debugLevel ) {
Com_Printf( "%i:lift\n", c_pmove );
}



VectorCopy( pm->ps->origin, point );
point[2] -= 64;

pm->trace( &trace, pm->ps->origin, pm->mins, pm->maxs, point, pm->ps->clientNum, pm->tracemask );
if ( trace.fraction == 1.0 ) {
if ( pm->cmd.forwardmove >= 0 ) {
BG_AnimScriptEvent( pm->ps, ANIM_ET_JUMP, qfalse, qtrue );
pm->ps->pm_flags &= ~PMF_BACKWARDS_JUMP;
} else {
BG_AnimScriptEvent( pm->ps, ANIM_ET_JUMPBK, qfalse, qtrue );
pm->ps->pm_flags |= PMF_BACKWARDS_JUMP;
}
}
}

pm->ps->groundEntityNum = ENTITYNUM_NONE;
pml.groundPlane = qfalse;
pml.walking = qfalse;
}