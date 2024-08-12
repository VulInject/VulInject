static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6) {
int VAR7, VAR8;

if (!VAR4->VAR9) return 0;
if (VAR4->VAR10 <= 0) return 0;

VAR7 = FUN2(VAR4->VAR10, &VAR8, 1);
if (0 == VAR7) return 0; 


if (-1 == VAR7) {


FUN3(VAR6, VAR11, VAR12,
"", VAR4->VAR10, VAR4->VAR13);
}
else {
FUN4(VAR2, VAR4, VAR6, VAR8);
}

VAR4->VAR10 = 0;
if (VAR4->VAR13 != VAR14)
VAR4->VAR15 = VAR16;
FUN5(VAR2, VAR4, VAR17);
return 1;
}