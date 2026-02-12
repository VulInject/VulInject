static void CG_DrawStatusBarKeys() {
int i;
float y = 0;    
gitem_t *gi;
int itemnum;

float   *fadeColor;



if ( cg.showItems ) {
fadeColor = colorWhite;
} else {
fadeColor = CG_FadeColor( cg.itemFadeTime, 1000 );
}

if ( !fadeColor ) {
return;
}








for ( i = 1; i < KEY_NUM_KEYS; i++ )
{
gi = BG_FindItemForKey( i, &itemnum );


if ( cg.snap->ps.stats[STAT_KEYS] & ( 1 << gi->giTag ) ) {
y += ICON_SIZE + 5;
CG_DrawKeyModel( itemnum, 640 - ( 1.5 * ICON_SIZE ), y, ICON_SIZE, ICON_SIZE, cg.time + fadeColor[0] * 1000 );
}
}
}