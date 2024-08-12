static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6;
    int VAR7;
    VAR7 = FUN2(&VAR4->VAR8, VAR4->VAR9, NULL, NULL);
    if (VAR7 < 0)
        return VAR7;
    VAR6 = VAR4->VAR8;
    VAR6->VAR10 = VAR2->VAR10;
    VAR6->VAR11 = VAR2->VAR11;
    FUN3(&VAR6->VAR12, VAR2->VAR12, 0);
    VAR6->VAR5 = FUN4(VAR6->VAR9->VAR13);
    if (!VAR6->VAR5)
    {
        FUN5(VAR6->VAR14);
        return FUN6(VAR15);
    }
    *(const VAR16 **)VAR6->VAR5 = VAR6->VAR9->VAR17;
    FUN7(VAR6->VAR5);
    FUN8(VAR6->VAR5, "", 1, 0);
    FUN8(VAR6->VAR5, "", VAR4->VAR18, 0);
    FUN8(VAR6->VAR5, "", 1, 0);
    VAR6->VAR19 = VAR2->VAR19;
    VAR6->VAR20 = VAR2->VAR20;
    return 0;
}