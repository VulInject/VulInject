static struct VAR1 *FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct VAR1 *VAR1;
int VAR6;
u32 VAR7;


if (VAR5->VAR8 == FUN2(VAR9)) {
int VAR10 = FUN3(VAR5);
struct VAR11 *VAR12;

if (FUN4(!FUN5(VAR5, VAR10 + sizeof(*VAR12))))
goto VAR13;

VAR12 = FUN6(VAR5);
if (VAR12->VAR8 == VAR14) {
VAR1 = FUN7(VAR3->VAR15);
if (VAR1)
return VAR1;
return FUN8(VAR3, 0);
}
}

VAR13:
VAR6 = FUN9(VAR3->VAR6);
if (FUN10(VAR6)) {
VAR7 = FUN11(VAR3) % VAR6;
return FUN8(VAR3, VAR7);
}
return NULL;
}