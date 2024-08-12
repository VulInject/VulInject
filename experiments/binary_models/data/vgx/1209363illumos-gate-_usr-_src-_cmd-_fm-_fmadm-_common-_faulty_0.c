static int
FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
VAR1 *VAR4 = VAR3;
VAR1 *VAR5;
int VAR6 = 0;
int VAR7 = 0;
char VAR8[128];

while (VAR4) {
VAR5 = VAR2;
VAR6++;
(void) snprintf(VAR8, sizeof (VAR8), "", VAR4->VAR9);
VAR8[sizeof (VAR8) - 1] = 0;
while (VAR5) {
if (strstr(VAR5->VAR9, VAR8) != NULL) {
VAR7++;
break;
}
VAR5 = VAR5->VAR10;
if (VAR5 == VAR2)
break;
}
VAR4 = VAR4->VAR10;
if (VAR4 == VAR3)
break;
}
return (VAR7 == VAR6 ? 1 : 0);
}