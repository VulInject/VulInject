static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int64_t VAR8;
    int VAR9;
    int VAR10;
    FUN2(VAR2);
    FUN3(VAR7);
    VAR8 = FUN4(VAR7);
    FUN5(VAR7, 0, VAR11);
    if ((VAR10 = FUN6(VAR2, 1)) < 0)
        return VAR10;
    FUN7(VAR2);
    FUN8(VAR2);
    FUN9(VAR7);
    for (VAR9 = 1; VAR9 < VAR4->VAR12; VAR9++)
    {
        FUN5(VAR7, VAR4->VAR13[VAR9], VAR11);
        if ((VAR10 = FUN6(VAR2, 1)) < 0)
            return VAR10;
        FUN9(VAR7);
    }
    FUN5(VAR7, VAR8, VAR11);
    FUN10(&VAR4->VAR14);
    FUN10(&VAR4->VAR13);
    return 0;
}