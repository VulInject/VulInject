static void FUN1(int *VAR1, VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, int *VAR6)
{
    VAR7 *VAR8 = FUN2();
    int VAR9;
    int VAR10 = 0;
    FUN3(VAR8, &VAR11);
    VAR12 = FUN4(VAR8, VAR11, &VAR10, VAR13, FUN5(VAR13));
    FUN6(VAR12 <= FUN5(VAR13));
    for (VAR9 = 0; VAR9 < VAR12; VAR9++)
    {
        VAR14 *VAR15 = &VAR13[VAR9];
        if ((VAR15->VAR16 & VAR17))
        {
            FUN7(VAR15->VAR18, VAR3);
            *VAR1 = FUN8(*VAR1, VAR15->VAR18);
        }
        if ((VAR15->VAR16 & VAR19))
        {
            FUN7(VAR15->VAR18, VAR4);
            *VAR1 = FUN8(*VAR1, VAR15->VAR18);
        }
        if ((VAR15->VAR16 & VAR20))
        {
            FUN7(VAR15->VAR18, VAR5);
            *VAR1 = FUN8(*VAR1, VAR15->VAR18);
        }
    }
    if (VAR10 >= 0 && VAR10 < *VAR6)
    {
        *VAR6 = VAR10;
    }
}