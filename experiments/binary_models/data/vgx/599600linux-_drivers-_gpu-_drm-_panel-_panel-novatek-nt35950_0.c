static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = &VAR4->VAR7[0]->VAR6;
int VAR8;

if (!VAR4->VAR9)
return 0;

VAR8 = FUN3(VAR4);
if (VAR8 < 0)
FUN4(VAR6, "", VAR8);

FUN5(VAR4->VAR10, 0);
FUN6(FUN7(VAR4->VAR11), VAR4->VAR11);

VAR4->VAR9 = false;
return 0;
}