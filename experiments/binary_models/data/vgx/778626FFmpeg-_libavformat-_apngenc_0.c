static int FUN1(VAR1 *VAR2)
{
VAR3 *VAR4 = VAR2->VAR5;
VAR6 *VAR7 = VAR2->VAR8;
uint8_t VAR9[8];
int VAR10;

if (VAR4->VAR11) {
VAR10 = FUN2(VAR2, NULL);
if (VAR10 < 0)
return VAR10;
}

FUN3(VAR7, FUN4('', '', '', ''), NULL, 0);

if (VAR4->VAR12 && (VAR7->VAR13 & VAR14)) {
FUN5(VAR7, VAR4->VAR12, VAR15);

FUN6(VAR9, VAR4->VAR16);
FUN6(VAR9 + 4, VAR4->VAR17);
FUN3(VAR7, FUN4('', '', '', ''), VAR9, 8);
}

return 0;
}