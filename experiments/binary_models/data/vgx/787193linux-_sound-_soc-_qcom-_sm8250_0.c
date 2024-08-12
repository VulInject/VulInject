static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
struct VAR7 *VAR8 = &VAR2->VAR8;
int VAR9;

VAR4 = FUN2(VAR8, sizeof(*VAR4), VAR10);
if (!VAR4)
return -VAR11;

VAR4->VAR12 = VAR13;

VAR6 = FUN2(VAR8, sizeof(*VAR6), VAR10);
if (!VAR6)
return -VAR11;

VAR4->VAR8 = VAR8;
FUN3(VAR8, VAR4);
FUN4(VAR4, VAR6);
VAR9 = FUN5(VAR4);
if (VAR9)
return VAR9;

VAR4->VAR14 = VAR15;
FUN6(VAR4);
return FUN7(VAR8, VAR4);
}