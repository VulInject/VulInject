int
slk_clear(void)
{
SLK_MAP	*slk;
int	i;
char *	spaces = "        ";

if ((slk = SP->slk) == NULL)
return (ERR);

slk->_changed = 2;	
if (slk->_win) {
(void) werase(slk->_win);
(void) wrefresh(slk->_win);
} else {

for (i = 0; i < slk->_num; i++)
_PUTS(tparm_p2(plab_norm, i + 1,
(long) spaces), 1);
_PUTS(label_off, 1);
(void) fflush(SP->term_file);
}

for (i = 0; i < slk->_num; ++i)
slk->_lch[i] = FALSE;

return (OK);
}