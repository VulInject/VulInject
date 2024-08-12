static int FUN1(struct VAR1 *VAR2, enum VAR3 *VAR4,
VAR5 *VAR6, VAR7 *VAR8)
{
int VAR9, VAR10;


VAR9 = FUN2(VAR2->VAR11, 0x10);
if (VAR9 < 0) {
FUN3("");
return 0;
}

if (0 == (VAR9 & 0x80))
return 0;


VAR10 = FUN2(VAR2->VAR11, 0x00);
if (VAR10 < 0) {
FUN3("");
return 0;
}

FUN3("",
VAR10 & 0xff, VAR9 & 0xff);

*VAR4 = VAR12;
*VAR6 = VAR10 & 0xff;
*VAR8 = 0;
return 1;
}