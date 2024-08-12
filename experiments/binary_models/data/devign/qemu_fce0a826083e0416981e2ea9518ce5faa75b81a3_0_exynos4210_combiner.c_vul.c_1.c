static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    unsigned int VAR7;
    FUN4(VAR4, VAR8, VAR9);
    for (VAR7 = 0; VAR7 < VAR9; VAR7++)
    {
        FUN5(VAR2, &VAR6->VAR10[VAR7]);
    }
    FUN6(&VAR6->VAR11, FUN7(VAR6), &VAR12, VAR6, "", VAR13);
    FUN8(VAR2, &VAR6->VAR11);
    return 0;
}