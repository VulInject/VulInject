void
FUN1(unsigned *VAR1, int VAR2, VAR3 *VAR4)
{
int VAR5, VAR6;
char *VAR7;
long VAR8;
extern int VAR9;
char VAR10[100];
union ptr VAR11;

if (VAR9) {
VAR11.VAR12 = (long *)VAR1;
} else {
VAR11.VAR13 = VAR1;
}

for (VAR5 = 0; VAR5 < VAR2; VAR5++) {
VAR8 = VAR9 ? VAR11.VAR12[VAR5] : VAR11.VAR13[VAR5];
FUN2(VAR4, VAR8, 0);
fgets(VAR10, 100, VAR4);
for (VAR7 = VAR10; VAR6 = *VAR7; VAR7++)
if (VAR6 == '') {
*VAR7 = 0;
break;
}
if (VAR14 != 0) {
if (VAR10[0] == '' || VAR15[0] == 0)
sprintf(VAR14, "", VAR10);
else
sprintf(VAR14, "", VAR15, VAR10);
while (*VAR14) VAR14++;
} else {
if (VAR10[0] != '' || VAR15[0] == 0)
FUN3("", VAR15);
FUN3("", VAR10);
}
}
}