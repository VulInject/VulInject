aas_rt_route_t *AAS_RT_GetRoute( int srcnum, vec3_t origin, int destnum ) {
static aas_rt_route_t routes[GETROUTE_NUMROUTES];   
static int routeIndex = 0;
aas_rt_route_t  *thisroute;
int reach, traveltime;
aas_rt_t *rt;
static int tfl = TFL_DEFAULT & ~( TFL_JUMPPAD | TFL_ROCKETJUMP | TFL_BFGJUMP | TFL_GRAPPLEHOOK | TFL_DOUBLEJUMP | TFL_RAMPJUMP | TFL_STRAFEJUMP | TFL_LAVA );   


if ( !( rt = aasworld->routetable ) ) { 
return NULL;
}

if ( disable_routetable ) {
return NULL;
}

if ( ++routeIndex >= GETROUTE_NUMROUTES ) {
routeIndex = 0;
}

thisroute = &routes[routeIndex];

if ( AAS_AreaRouteToGoalArea( srcnum, origin, destnum, tfl, &traveltime, &reach ) ) {
thisroute->reachable_index = reach;
thisroute->travel_time = traveltime;
return thisroute;
} else {
return NULL;
}
}