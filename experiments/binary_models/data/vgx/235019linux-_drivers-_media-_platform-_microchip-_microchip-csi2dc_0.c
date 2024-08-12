static int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
int VAR6;

if (VAR3) {
VAR6 = FUN3(VAR5->VAR7);
if (VAR6 < 0)
return VAR6;

FUN4(VAR5);

FUN5(VAR5);

return FUN6(VAR5->VAR8, VAR9, VAR10,
true);
}

FUN7(VAR5->VAR7,
"",
FUN8(VAR5, VAR11),
FUN8(VAR5, VAR12),
FUN8(VAR5, VAR13));


VAR6 = FUN6(VAR5->VAR8, VAR9, VAR10, false);

FUN9(VAR5->VAR7);

return VAR6;
}