NCURSES_EXPORT(int)
restartterm(NCURSES_CONST char *termp, int filenum, int *errret)
{
int result;

T((T_CALLED("restartterm(%s,%d,%p)"), termp, filenum, errret));

if (setupterm(termp, filenum, errret) != OK) {
result = ERR;
} else if (SP != 0) {
int saveecho = SP->_echo;
int savecbreak = SP->_cbreak;
int saveraw = SP->_raw;
int savenl = SP->_nl;

if (saveecho)
echo();
else
noecho();

if (savecbreak) {
cbreak();
noraw();
} else if (saveraw) {
nocbreak();
raw();
} else {
nocbreak();
noraw();
}
if (savenl)
nl();
else
nonl();

reset_prog_mode();

_nc_update_screensize(SP);

result = OK;
} else {
result = ERR;
}
returnCode(result);
}