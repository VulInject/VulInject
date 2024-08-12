static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR8 *VAR9 = VAR6->VAR9;
int VAR10;

VAR10 = FUN2(VAR9, VAR11,
FUN3(VAR4) * 256,
VAR12);
if (VAR10 < 0) {
FUN4(VAR9->VAR13, "", VAR10);
return VAR10;
}
VAR10 = FUN5(VAR9, 0, VAR14,
FUN3(VAR4) * 64,
FUN3(VAR4) * 256);
if (VAR10 < 0) {
FUN4(VAR9->VAR13, "", VAR10);
return VAR10;
}
return 0;
}