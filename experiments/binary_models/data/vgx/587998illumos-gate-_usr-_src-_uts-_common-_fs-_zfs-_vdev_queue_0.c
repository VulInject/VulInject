static void
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR5 *VAR6 = VAR4->VAR7;

FUN2(VAR4->VAR8, <, VAR9);
FUN3(FUN4(VAR2, VAR4->VAR8), VAR4);
FUN3(FUN5(VAR2, VAR4->VAR10), VAR4);

FUN6(&VAR6->VAR11);
VAR6->VAR12[VAR4->VAR8].VAR13++;
if (VAR6->VAR14 != NULL)
FUN7(VAR6->VAR14->VAR15);
FUN8(&VAR6->VAR11);
}