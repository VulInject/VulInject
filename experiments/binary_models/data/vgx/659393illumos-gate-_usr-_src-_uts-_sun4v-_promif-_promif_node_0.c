static char *
FUN1(char *VAR1, char *VAR2)
{
char *VAR3 = VAR2;

for (;;) {
VAR1 = FUN2(VAR1, VAR2);
VAR2 += FUN3(VAR2);
if ((*VAR1 == '') || (*VAR1 == '')) {
*VAR2++ = *VAR1++;
*VAR2 = '';
continue;
}
break;
}


FUN4(VAR3, VAR3);

return (VAR1);
}