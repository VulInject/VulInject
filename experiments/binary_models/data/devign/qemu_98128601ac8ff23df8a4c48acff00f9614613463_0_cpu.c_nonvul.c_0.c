static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    static bool VAR7;
    VAR4->VAR8 = &VAR6->VAR9;
    FUN4(&VAR6->VAR9);
    VAR6->VAR10 = FUN5(VAR11, VAR12, VAR13, VAR13);
    if (FUN6())
    {
        FUN7(FUN8(VAR6), VAR14, 4);
    }
    else
    {
        FUN7(FUN8(VAR6), VAR15, 4);
    }
    VAR6->VAR16[VAR17] = FUN9(VAR18, VAR19, VAR20, VAR6);
    VAR6->VAR16[VAR21] = FUN9(VAR18, VAR19, VAR22, VAR6);
    FUN10(FUN8(VAR6), VAR6->VAR23, FUN11(VAR6->VAR23));
    VAR6->VAR24 = "";
    VAR6->VAR25 = 1;
    VAR6->VAR26 = VAR27;
    if (FUN12())
    {
        VAR6->VAR25 = 2;
        if (!VAR7)
        {
            VAR7 = true;
            FUN13();
        }
    }
}