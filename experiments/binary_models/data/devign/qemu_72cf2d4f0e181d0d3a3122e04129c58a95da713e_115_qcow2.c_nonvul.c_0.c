static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR3 *VAR5;
    if (VAR2->VAR6 != 0)
    {
        FUN2(VAR2, VAR7);
    }
    for (VAR4 = VAR2->VAR8.VAR9; VAR4 != NULL; VAR4 = VAR5)
    {
        VAR5 = VAR4->VAR10.VAR11;
        FUN3(VAR4, 0);
    }
    FUN4(&VAR2->VAR8);
}