void RE_AddLightToScene( const vec3_t org, float intensity, float r, float g, float b, int overdraw ) {
dlight_t    *dl;

if ( !tr.registered ) {
return;
}
if ( r_numdlights >= MAX_DLIGHTS ) {
return;
}
if ( intensity <= 0 ) {
return;
}

if ( glConfig.hardwareType == GLHW_RIVA128 || glConfig.hardwareType == GLHW_PERMEDIA2 ) {
return;
}

if ( !( overdraw & REF_FORCE_DLIGHT ) ) {
if ( r_dynamiclight->integer == 0 ) {
return;
}
if ( r_dynamiclight->integer == 2 && !( backEndData->dlights[r_numdlights].forced ) ) {
return;
}
}

overdraw &= ~REF_FORCE_DLIGHT;
overdraw &= ~REF_JUNIOR_DLIGHT; 

dl = &backEndData->dlights[r_numdlights++];
VectorCopy( org, dl->origin );
dl->radius = intensity;
dl->color[0] = r;
dl->color[1] = g;
dl->color[2] = b;
dl->dlshader = NULL;
dl->overdraw = 0;

if ( overdraw == 10 ) { 
dl->dlshader = R_GetShaderByHandle( RE_RegisterShader( "negdlightshader" ) );
} else if ( overdraw == 11 ) { 
dl->dlshader = R_GetShaderByHandle( RE_RegisterShader( "flamedlightshader" ) );
} else {
dl->overdraw = overdraw;
}
}