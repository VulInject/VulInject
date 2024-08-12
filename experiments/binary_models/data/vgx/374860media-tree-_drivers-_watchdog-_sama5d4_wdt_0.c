FUN1(VAR1, int, 0);
FUN2(VAR1,
""
FUN3(VAR2) "");

FUN1(VAR3, bool, 0);
FUN2(VAR3,
""
FUN3(VAR4) "");

FUN4((VAR5)->VAR6 + (VAR7))

FUN5((VAR8), (VAR5)->VAR6 + (VAR7))

static int FUN6(struct VAR9 *VAR10)
{
struct VAR11 *VAR5 = FUN7(VAR10);

VAR5->VAR12 &= ~VAR13;
FUN8(VAR5, VAR14, VAR5->VAR12);

return 0;
}