static void
FUN1(unsigned int *VAR1)
{
long VAR2;

FUN2("");
for (VAR2 = -6; VAR2 < 2; VAR2++) {
unsigned int VAR3;
if (FUN3(VAR3, (unsigned int VAR4 *)VAR1 + VAR2))
break;
FUN2("", VAR2 ? '' : '', VAR3, VAR2 ? '' : '');
}
FUN2("");
}