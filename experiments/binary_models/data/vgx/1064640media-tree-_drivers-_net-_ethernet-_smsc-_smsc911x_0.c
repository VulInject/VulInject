static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;
struct VAR6 *VAR7 = VAR4->VAR8;
int VAR9 = 0;

if (!VAR7)
return VAR9;


VAR9 = FUN2(VAR7, VAR10);
if (VAR9 < 0) {
FUN3(VAR2, VAR11, "");
return VAR9;
}


if (VAR9 & VAR12) {
VAR9 = FUN4(VAR7, VAR10, VAR9 & ~VAR12);
if (VAR9 < 0) {
FUN3(VAR2, VAR11, "");
return VAR9;
}

FUN5(1000, 1500);
}

return 0;
}