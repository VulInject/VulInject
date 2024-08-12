static int
FUN1(struct VAR1 *VAR2, int VAR3,
const struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = &VAR2->VAR7;
const struct VAR8 *VAR9;

VAR9 = FUN2(VAR7, VAR5->VAR10->VAR11, "",
VAR2, NULL, "", "");
if (FUN3(VAR9))
return FUN4(VAR9);

VAR9 = FUN2(VAR7, VAR5->VAR10->VAR12, "",
VAR2, NULL, "", "");
if (FUN3(VAR9))
return FUN4(VAR9);

VAR9 = FUN2(VAR7, VAR5->VAR10->VAR13, "",
VAR2, NULL, "", "");
if (FUN3(VAR9))
return FUN4(VAR9);

return 0;
}