static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    if (!VAR2->VAR5 || !VAR2->VAR6)
    {
        return;
    }
    VAR4 = FUN2(sizeof *VAR4);
    VAR4->VAR7 = FUN3(VAR2->VAR8.VAR9.VAR10);
    VAR4->VAR11 = FUN3(VAR2->VAR8.VAR9.VAR12);
    VAR4->VAR13 = FUN3(VAR2->VAR8.VAR14.VAR10);
    VAR4->VAR15 = FUN3(VAR2->VAR8.VAR14.VAR12);
    FUN4(VAR2->VAR6, "", VAR4, sizeof *VAR4);
}