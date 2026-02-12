void R_BuildCloudData( shaderCommands_t *input ) {
int i;
shader_t    *shader;

shader = input->shader;

assert( shader->isSky );

sky_min = 1.0 / 256.0f;     
sky_max = 255.0 / 256.0f;


tess.numIndexes = 0;
tess.numVertexes = 0;

if ( shader->sky.cloudHeight ) {
for ( i = 0; i < MAX_SHADER_STAGES; i++ )
{
if ( !tess.xstages[i] ) {
break;
}
FillCloudBox( shader, i );
}
}
}