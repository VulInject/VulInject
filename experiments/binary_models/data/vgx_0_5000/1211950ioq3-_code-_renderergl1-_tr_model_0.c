md3Tag_t *R_GetAnimTag( mdrHeader_t *mod, int framenum, const char *tagName, md3Tag_t * dest) 
{
int				i, j, k;
int				frameSize;
mdrFrame_t		*frame;
mdrTag_t		*tag;

if ( framenum >= mod->numFrames ) 
{

framenum = mod->numFrames - 1;
}

tag = (mdrTag_t *)((byte *)mod + mod->ofsTags);
for ( i = 0 ; i < mod->numTags ; i++, tag++ )
{
if ( !strcmp( tag->name, tagName ) )
{
Q_strncpyz(dest->name, tag->name, sizeof(dest->name));



frameSize = (intptr_t)( &((mdrFrame_t *)0)->bones[ mod->numBones ] );
frame = (mdrFrame_t *)((byte *)mod + mod->ofsFrames + framenum * frameSize );

for (j = 0; j < 3; j++)
{
for (k = 0; k < 3; k++)
dest->axis[j][k]=frame->bones[tag->boneIndex].matrix[k][j];
}

dest->origin[0]=frame->bones[tag->boneIndex].matrix[0][3];
dest->origin[1]=frame->bones[tag->boneIndex].matrix[1][3];
dest->origin[2]=frame->bones[tag->boneIndex].matrix[2][3];				

return dest;
}
}

return NULL;
}