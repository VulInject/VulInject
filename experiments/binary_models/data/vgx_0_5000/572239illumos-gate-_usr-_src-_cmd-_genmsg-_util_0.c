static void
add_setid(int setid, int msgid, char *msg, char *file, int line, int no_write)
{
SetID si = setid_top, newsi, prev = NULL;

while (si) {
if (si->id > setid) {
break;
}
prev = si;
si = si->next;
}

if ((newsi = malloc(sizeof (SetIDRec))) == NULL) {
prg_err(gettext("fatal: out of memory"));
exit(EXIT_FAILURE);
}

newsi->id = setid;
newsi->top = NULL;
newsi->next = si;

if (set_comment) {
newsi->comment = ustrdup(set_comment);
free(set_comment);
set_comment = NULL;
} else {
newsi->comment = NULL;
}

if (prev == NULL) {
setid_top = newsi;
} else {
prev->next = newsi;
}

add_msgid(newsi, msgid, msg, file, line, no_write);
}