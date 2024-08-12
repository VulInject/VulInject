static int FUN1(VAR1 *VAR2, gdbr_server_cmd_cb VAR3, void *VAR4) {
char *VAR5 = NULL;
if (FUN2 (VAR2) < 0) {
return -1;
}
VAR2->VAR6[VAR2->VAR7] = '';
if (VAR2->VAR6[5] == '') {

return FUN3 (VAR2, "");
}
if (!(VAR5 = strtok (VAR2->VAR6, ""))) {
return FUN3 (VAR2, "");
}
while ((VAR5 = strtok (NULL, ""))) {
FUN4 ("", VAR8, VAR5);
switch (VAR5[0]) {
case '':

if (FUN5 (VAR2, VAR4, "", NULL, 0) < 0) {
FUN3 (VAR2, "");
return -1;
}
return FUN3 (VAR2, "");
case '':

if (FUN5 (VAR2, VAR4, "", NULL, 0) < 0) {
FUN3 (VAR2, "");
return -1;
}
return FUN3 (VAR2, "");
default:

return FUN3 (VAR2, "");
}
}
return -1;
}