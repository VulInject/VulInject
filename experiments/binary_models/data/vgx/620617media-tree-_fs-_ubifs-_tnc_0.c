static int FUN1(struct VAR1 *VAR2, const union VAR3 *VAR4,
struct VAR5 *VAR6, void *VAR7)
{
int VAR8;

FUN2(VAR4, "", VAR6->VAR9, VAR6->VAR10);

VAR8 = FUN3(VAR2, VAR7, FUN4(VAR2, VAR4), VAR6->VAR11, VAR6->VAR9,
VAR6->VAR10);
if (VAR8 == 1) {
union ubifs_key VAR12;
struct VAR13 *VAR14 = VAR7;


FUN5(VAR2, &VAR14->VAR4, &VAR12);
if (FUN6(VAR2, VAR4, &VAR12) != 0)
VAR8 = 0;
}
if (VAR8 == 0 && VAR2->VAR15)
FUN7(VAR4, "",
VAR6->VAR9, VAR6->VAR10, VAR6->VAR11);
return VAR8;
}