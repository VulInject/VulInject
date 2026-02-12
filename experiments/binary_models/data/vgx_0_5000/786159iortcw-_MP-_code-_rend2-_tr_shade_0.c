static void R_BindAnimatedImageToTMU( textureBundle_t *bundle, int tmu ) {
int64_t index;

if ( bundle->isVideoMap ) {
ri.CIN_RunCinematic(bundle->videoMapHandle);
ri.CIN_UploadCinematic(bundle->videoMapHandle);
GL_BindToTMU(tr.scratchImage[bundle->videoMapHandle], tmu);
return;
}

if ( bundle->numImageAnimations <= 1 ) {
if ( bundle->isLightmap && ( backEnd.refdef.rdflags & RDF_SNOOPERVIEW ) ) {
GL_BindToTMU( tr.whiteImage, tmu );
} else {
GL_BindToTMU( bundle->image[0], tmu);
}
return;
}



index = tess.shaderTime * bundle->imageAnimationSpeed * FUNCTABLE_SIZE;
index >>= FUNCTABLE_SIZE2;

if ( index < 0 ) {
index = 0;	
}



while ( index >= bundle->numImageAnimations ) {
index -= bundle->numImageAnimations;
}

if ( bundle->isLightmap && ( backEnd.refdef.rdflags & RDF_SNOOPERVIEW ) ) {
GL_BindToTMU( tr.whiteImage, tmu );
} else {
GL_BindToTMU( bundle->image[ index ], tmu );
}
}