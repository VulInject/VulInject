struct Gdef *
get_speed(struct pmtab *pmptr)
{
static struct Gdef serial = { 0 };
struct Gdef *sp;
char *ttylabel = pmptr->p_ttylabel;

if ((ttylabel != NULL) && (*ttylabel != '\0')) {
if ((sp = find_def(ttylabel)) == NULL) {
log("unable to find <%s> in \"%s\"", ttylabel, TTYDEFS);
sp = &DEFAULT; 
}
} else {
sp = &DEFAULT; 
}


if (pmptr->p_ttymode == NULL ||
strcmp(pmptr->p_device, "/dev/console") != 0)
return (sp);


if (serial.g_id == NULL) {

serial.g_id = strsave(sp->g_id);
serial.g_iflags = merge_flags(sp->g_iflags, pmptr->p_ttymode);
serial.g_fflags = merge_flags(sp->g_fflags, pmptr->p_ttymode);
serial.g_autobaud = sp->g_autobaud;
serial.g_nextid = strsave(sp->g_nextid);
}
return (&serial);
}