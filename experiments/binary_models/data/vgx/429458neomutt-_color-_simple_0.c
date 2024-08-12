void FUN1(enum ColorId VAR1)
{
struct VAR2 *VAR3 = FUN2(VAR1);
if (!VAR3)
return;

struct VAR4 *VAR5 = FUN3();
FUN4(VAR1, VAR5);
FUN5(VAR6, "", VAR5->VAR7);
FUN6(&VAR5);

struct EventColor VAR8 = { VAR1, VAR3 };
FUN7(VAR9, VAR10, VAR11, &VAR8);

FUN8(VAR3);
}