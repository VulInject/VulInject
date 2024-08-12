static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = NULL;
    if (!VAR2->VAR7)
    {
        return;
    }
    VAR4 = FUN2(VAR2->VAR8[0], &VAR6);
    if (!VAR4)
    {
        return;
    }
    if (VAR4->VAR9 != VAR10)
    {
        FUN3(VAR4);
        return;
    }
    FUN4("", VAR4->VAR11.VAR12.VAR13, VAR4->VAR11.VAR12.VAR14);
    FUN3(VAR4);
}