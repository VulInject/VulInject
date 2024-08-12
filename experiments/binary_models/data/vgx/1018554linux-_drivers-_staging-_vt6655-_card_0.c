static unsigned short FUN1(struct VAR1 *VAR2,
unsigned short VAR3)
{
unsigned int VAR4 = (unsigned int)VAR3;

FUN2("", VAR2->VAR5);

if (!FUN3((void *)VAR2)) {
FUN2("", VAR6, VAR3);
if (VAR3 > VAR7)
VAR3 = VAR7;
return VAR3;
}
while (VAR4 > VAR8) {
if (VAR2->VAR5 & ((VAR9)0x1 << VAR4)) {
FUN2("", VAR6, VAR4);
return (unsigned short)VAR4;
}
VAR4--;
}
FUN2("", VAR6);
return (unsigned short)VAR7;
}