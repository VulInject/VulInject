static int FUN1(u16 VAR1, u16 VAR2, int VAR3)
{
u16 VAR4;
int VAR5 = 0;
unsigned long VAR6 = VAR7 + VAR8;

for (;;) {
VAR4 = FUN2(VAR9);
if ((VAR4 & VAR1) == VAR2)
break;
if (FUN3(VAR7, VAR6)) {
FUN4(VAR10 ""
"",
VAR11, VAR4, VAR1, VAR2);
return -1;
}
VAR5++;
if (VAR3 && VAR5 > 64)
break;
}
return 0;
}