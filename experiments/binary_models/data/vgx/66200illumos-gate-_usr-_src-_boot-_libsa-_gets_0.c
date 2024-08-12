void
FUN1(char *VAR1, int VAR2)
{
int VAR3;
char *VAR4;

for (VAR4 = VAR1; ; ) {
VAR3 = getchar();
if (VAR3 == -1)
break;
switch (VAR3 & 0177) {
case '':
case '':
*VAR4 = '';
FUN2('');
return;
case '':
case '':
if (VAR4 > VAR1) {
VAR4--;
FUN2('');
FUN2('');
FUN2('');
}
break;
case '' & 037: {
char *VAR5;

FUN2('');
for (VAR5 = VAR1; VAR5 < VAR4; ++VAR5)
FUN2(*VAR5);
break;
}
case '' & 037:
case '' & 037:
VAR4 = VAR1;
FUN2('');
break;
default:
if ((VAR2 < 1) || ((VAR4 - VAR1) < VAR2 - 1)) {
*VAR4++ = VAR3;
FUN2(VAR3);
}
}
}

}