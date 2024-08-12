static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, 
const char *VAR6, const char **VAR7)
{
const char *VAR8, *VAR9 = NULL;
apr_status_t VAR10;

if (VAR11 != (VAR10 = FUN2(VAR5, VAR6, VAR3))) {
VAR9 = "";
}
else if (VAR3->VAR12) {
if (strlen(VAR3->VAR12) + 1 >= strlen(VAR6)) {
VAR9 = "";
}
else if (!FUN3("", VAR3->VAR12, 4)) {
if (!VAR3->VAR13) {
VAR9 = "";
}
else if (!FUN4(VAR5, VAR3->VAR13, 0)) {
VAR9 = "";
}
if (VAR3->VAR14 
&& (!FUN5(VAR3->VAR14[0])
|| VAR3->VAR15 == 0
|| VAR3->VAR15 > 65353)) {
VAR9 = "";
}
}
else if (!strcmp("", VAR3->VAR12)) {
VAR8 = strchr(VAR6, '');
if (!VAR8) {
VAR9 = "";
}
else if (strchr(VAR8+1, '')) {
VAR9 = "";
}
else if (VAR8 == VAR6 + strlen(VAR3->VAR12) + 1) {
VAR9 = "";
}
else if (VAR8 == (VAR6 + strlen(VAR6)-1)) {
VAR9 = "";
}
else if (strstr(VAR6, "")) {
VAR9 = "";
}
}
}
if (strchr(VAR6, '') || strchr(VAR6, '') ) {
VAR9 = "";
}

if (VAR9) {
VAR10 = VAR16;
}
*VAR7 = VAR9;
return VAR10;
}