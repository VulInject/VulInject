static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    if (VAR2->VAR5)
        FUN2(VAR2->VAR5);
    while (VAR2->VAR6 && FUN3(VAR2->VAR6))
    {
        VAR3 *VAR7;
        VAR8 *VAR9;
        FUN4(VAR2->VAR6, &VAR7, sizeof(VAR7), NULL);
        FUN4(VAR2->VAR6, &VAR9, sizeof(VAR9), NULL);
        FUN5(&VAR9);
    }
    VAR4 = VAR2->VAR10;
    while (VAR4)
    {
        VAR2->VAR10 = VAR4->VAR11;
        FUN6(&VAR4->VAR12);
        FUN5(&VAR4);
        VAR4 = VAR2->VAR10;
    }
    VAR2->VAR13 = 0;
    VAR2->VAR14 = 0;
}