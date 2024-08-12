int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
int VAR4 = 0;
u8 VAR5;


if (VAR3 == VAR2->VAR6)
return 0;


if (VAR3 >= 10000000 && VAR3 < 20000000) {
VAR4 = FUN2(VAR2, VAR7, 0x10);
} else if ((VAR3 >= 20000000) && (VAR3 < 30000000)) {
VAR4 = FUN2(VAR2, VAR7, 0x20);
} else {
FUN3("", VAR8);
return -VAR9;
}

VAR4 |= FUN4(VAR2, VAR10, &VAR5);
if (VAR5 & VAR11) {
VAR4 |= FUN5(VAR2, VAR10,
VAR11, 0);
VAR4 |= FUN5(VAR2, VAR10,
VAR11, VAR11);
}

FUN3("", VAR8, VAR3);
if (VAR4 < 0)
return -VAR9;

VAR2->VAR6 = VAR3;

return 0;
}