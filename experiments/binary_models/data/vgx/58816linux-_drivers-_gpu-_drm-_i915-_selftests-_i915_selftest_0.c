static bool FUN1(const char *VAR1, const char *VAR2)
{
char *VAR3, *VAR4, *VAR5;
bool VAR6 = true;

VAR3 = FUN2(VAR7.VAR3, VAR8);
for (VAR4 = VAR3; (VAR5 = FUN3(&VAR4, ""));) {
bool VAR9 = true;
char *VAR10;

if (*VAR5 == '') {
VAR9 = false;
VAR5++;
}

if (*VAR5 == '')
continue;

VAR10 = strchr(VAR5, '');
if (VAR10) {
*VAR10++ = '';
if (strcmp(VAR5, VAR1)) {
if (VAR9)
VAR6 = false;
continue;
}
VAR5 = VAR10;
}

if (strcmp(VAR5, VAR2)) {
if (VAR9)
VAR6 = false;
continue;
}

VAR6 = VAR9;
break;
}
FUN4(VAR3);

return VAR6;
}