qboolean BG_CanItemBeGrabbed( int gametype, const entityState_t *ent, const playerState_t *ps ) {
gitem_t	*item;
int		upperBound;

if ( ent->modelindex < 1 || ent->modelindex >= bg_numItems ) {
Com_Error( ERR_DROP, "BG_CanItemBeGrabbed: index out of range" );
}

item = &bg_itemlist[ent->modelindex];

switch( item->giType ) {
case IT_WEAPON:
return qtrue;	

case IT_AMMO:
if ( ps->ammo[ item->giTag ] >= 200 ) {
return qfalse;		
}
return qtrue;

case IT_ARMOR:
if( bg_itemlist[ps->stats[STAT_PERSISTANT_POWERUP]].giTag == PW_SCOUT ) {
return qfalse;
}


if( bg_itemlist[ps->stats[STAT_PERSISTANT_POWERUP]].giTag == PW_GUARD ) {
upperBound = ps->stats[STAT_MAX_HEALTH];
}
else {
upperBound = ps->stats[STAT_MAX_HEALTH] * 2;
}

if ( ps->stats[STAT_ARMOR] >= upperBound ) {
return qfalse;
}
if ( ps->stats[STAT_ARMOR] >= ps->stats[STAT_MAX_HEALTH] * 2 ) {
return qfalse;
}
return qtrue;

case IT_HEALTH:


if( bg_itemlist[ps->stats[STAT_PERSISTANT_POWERUP]].giTag == PW_GUARD ) {
}
else
if ( item->quantity == 5 || item->quantity == 100 ) {
if ( ps->stats[STAT_HEALTH] >= ps->stats[STAT_MAX_HEALTH] * 2 ) {
return qfalse;
}
return qtrue;
}

if ( ps->stats[STAT_HEALTH] >= ps->stats[STAT_MAX_HEALTH] ) {
return qfalse;
}
return qtrue;

case IT_POWERUP:
return qtrue;	

case IT_PERSISTANT_POWERUP:

if ( ps->stats[STAT_PERSISTANT_POWERUP] ) {
return qfalse;
}


if( ( ent->generic1 & 2 ) && ( ps->persistant[PERS_TEAM] != TEAM_RED ) ) {
return qfalse;
}
if( ( ent->generic1 & 4 ) && ( ps->persistant[PERS_TEAM] != TEAM_BLUE ) ) {
return qfalse;
}

return qtrue;

case IT_TEAM: 
if( gametype == GT_1FCTF ) {

if( item->giTag == PW_NEUTRALFLAG ) {
return qtrue;
}
if (ps->persistant[PERS_TEAM] == TEAM_RED) {
if (item->giTag == PW_BLUEFLAG  && ps->powerups[PW_NEUTRALFLAG] ) {
return qtrue;
}
} else if (ps->persistant[PERS_TEAM] == TEAM_BLUE) {
if (item->giTag == PW_REDFLAG  && ps->powerups[PW_NEUTRALFLAG] ) {
return qtrue;
}
}
}
if( gametype == GT_CTF ) {



if (ps->persistant[PERS_TEAM] == TEAM_RED) {
if (item->giTag == PW_BLUEFLAG ||
(item->giTag == PW_REDFLAG && ent->modelindex2) ||
(item->giTag == PW_REDFLAG && ps->powerups[PW_BLUEFLAG]) )
return qtrue;
} else if (ps->persistant[PERS_TEAM] == TEAM_BLUE) {
if (item->giTag == PW_REDFLAG ||
(item->giTag == PW_BLUEFLAG && ent->modelindex2) ||
(item->giTag == PW_BLUEFLAG && ps->powerups[PW_REDFLAG]) )
return qtrue;
}
}

if( gametype == GT_HARVESTER ) {
return qtrue;
}
return qfalse;

case IT_HOLDABLE:

if ( ps->stats[STAT_HOLDABLE_ITEM] ) {
return qfalse;
}
return qtrue;

case IT_BAD:
Com_Error( ERR_DROP, "BG_CanItemBeGrabbed: IT_BAD" );
default:
Com_Printf("BG_CanItemBeGrabbed: unknown enum %d\n", item->giType );
break;
}

return qfalse;
}