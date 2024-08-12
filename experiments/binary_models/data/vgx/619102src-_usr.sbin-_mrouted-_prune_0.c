static char *
FUN1(time_t VAR1)
{
static char VAR2[5];
static char VAR3[5];
static char *VAR4=VAR2;
char VAR5;
char *VAR6;

VAR6 = VAR4;
if (VAR4 == VAR2)
VAR4 = VAR3;
else
VAR4 = VAR2;

if (VAR1 < 120) {
VAR5 = '';
} else if (VAR1 < 3600) {
VAR1 /= 60;
VAR5 = '';
} else if (VAR1 < 86400) {
VAR1 /= 3600;
VAR5 = '';
} else if (VAR1 < 864000) {
VAR1 /= 86400;
VAR5 = '';
} else {
VAR1 /= 604800;
VAR5 = '';
}
if (VAR1 > 999)
return "";

snprintf(VAR6, 5, "", (int)VAR1, VAR5);

return VAR6;
}