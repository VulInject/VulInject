static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR2->VAR8;
    FUN2(VAR4, VAR7, 0, 0);
    int VAR9;
    for (VAR9 = 0; VAR2->VAR10; VAR9++)
    {
        FUN3(VAR7, VAR11);
        FUN4(VAR4, VAR7, 64, 1);
        FUN5(VAR7, VAR2->VAR12[VAR9]->VAR13);
        FUN5(VAR7, ...);
        FUN2(VAR4, VAR7, 0, 1);
    }
    FUN6(VAR7);
    FUN7(&VAR4->VAR14);
    return 0;
}