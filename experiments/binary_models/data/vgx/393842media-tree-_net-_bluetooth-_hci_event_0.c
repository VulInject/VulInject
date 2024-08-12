static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = (void *) VAR4->VAR7;
struct VAR8 *VAR9;

FUN2("", VAR2->VAR10, VAR6->VAR11);

if (VAR6->VAR11)
return;

FUN3(VAR2);

VAR9 = FUN4(VAR2, FUN5(VAR6->VAR12));
if (VAR9)
VAR9->VAR13 = VAR6->VAR13;

FUN6(VAR2);
}