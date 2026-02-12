static void CreateExternalShaders( void ) {
tr.projectionShadowShader = R_FindShader( "projectionShadow", LIGHTMAP_NONE, qtrue );
tr.flareShader = R_FindShader( "flareShader", LIGHTMAP_NONE, qtrue );



if(!tr.flareShader->defaultShader)
{
int index;

for(index = 0; index < tr.flareShader->numUnfoggedPasses; index++)
{
tr.flareShader->stages[index]->adjustColorsForFog = ACFF_NONE;
tr.flareShader->stages[index]->stateBits |= GLS_DEPTHTEST_DISABLE;
}
}

tr.sunShader = R_FindShader( "sun", LIGHTMAP_NONE, qtrue );

tr.sunFlareShader = R_FindShader( "gfx/2d/sunflare", LIGHTMAP_NONE, qtrue);


if (tr.sunFlareShader->defaultShader)
{
image_t *image;

if (!tr.flareShader->defaultShader && tr.flareShader->stages[0] && tr.flareShader->stages[0]->bundle[0].image[0])
image = tr.flareShader->stages[0]->bundle[0].image[0];
else
image = tr.dlightImage;

InitShader( "gfx/2d/sunflare", LIGHTMAP_NONE );
stages[0].bundle[0].image[0] = image;
stages[0].active = qtrue;
stages[0].stateBits = GLS_DEFAULT;
tr.sunFlareShader = FinishShader();
}

}