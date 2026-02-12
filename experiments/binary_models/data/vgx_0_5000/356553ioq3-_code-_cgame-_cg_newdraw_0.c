static void CG_DrawSelectedPlayerArmor( rectDef_t *rect, float scale, vec4_t color, qhandle_t shader, int textStyle ) {
clientInfo_t *ci;
int value;
char num[16];
ci = cgs.clientinfo + sortedTeamPlayers[CG_GetSelectedPlayer()];
if (ci) {
if (ci->armor > 0) {
if (shader) {
trap_R_SetColor( color );
CG_DrawPic(rect->x, rect->y, rect->w, rect->h, shader);
trap_R_SetColor( NULL );
} else {
Com_sprintf (num, sizeof(num), "%i", ci->armor);
value = CG_Text_Width(num, scale, 0);
CG_Text_Paint(rect->x + (rect->w - value) / 2, rect->y + rect->h, scale, color, num, 0, 0, textStyle);
}
}
}
}