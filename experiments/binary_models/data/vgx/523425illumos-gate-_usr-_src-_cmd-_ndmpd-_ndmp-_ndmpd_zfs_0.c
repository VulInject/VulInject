static int
FUN1(VAR1 *VAR2,
char *VAR3, VAR4 *VAR5)
{
char VAR6[VAR7];
char *VAR8 = VAR3;
int VAR9 = 0;

*VAR5 = VAR10;

(void) FUN2(VAR2,
VAR6, VAR7, VAR11);

if (VAR3[0] == '') {
(void) snprintf(VAR3, VAR7, "",
VAR12,
VAR13,
(VAR2->VAR14) ? '' : '',
VAR6);
return (0);
}

if (strstr((const char *)VAR3, (const char *)VAR6)) {
FUN3(VAR15, "",
VAR6);
*VAR5 = VAR11;
return (0);
}

while (*VAR8) {
if (*(VAR8++) == '')
VAR9++;
}

if (VAR9 >= VAR16) {
FUN4(VAR2, VAR17,
""
"",
VAR2->VAR18,
VAR19,
VAR16);
return (-1);
}

assert((strlen(VAR3) + strlen(VAR6) + 2) < VAR7);

(void) FUN5(VAR3, "", VAR7);
(void) FUN5(VAR3, VAR6, VAR7);

return (0);
}