static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int VAR5 = 0;
    if (FUN2(&VAR2->VAR6, 32) != FUN3(""))
    {
        FUN4(VAR2->VAR7, VAR8, "");
        return -1;
    }
    VAR2->VAR9 = 0;
    VAR2->VAR10 = VAR11;
    VAR2->VAR12 = -1;
    VAR2->VAR13 = FUN5(&VAR2->VAR6, 8);
    VAR2->VAR14 = FUN6(VAR2, VAR15);
    VAR2->VAR16 = FUN6(VAR2, VAR17);
    if (VAR2->VAR16 <= 0 || VAR2->VAR16 > VAR18)
    {
        FUN4(VAR2->VAR7, VAR8, "", VAR2->VAR16);
        return -1;
    }
    VAR2->VAR7->VAR16 = VAR2->VAR16;
    if (VAR2->VAR13 > 0)
    {
        int VAR19, VAR10;
        VAR10 = FUN6(VAR2, FUN7(VAR11));
        if (!VAR10 || VAR10 > VAR20)
        {
            FUN4(VAR2->VAR7, VAR8, "", VAR10);
            return FUN8(VAR21);
        }
        VAR2->VAR10 = VAR10;
        VAR5 = FUN6(VAR2, VAR22);
        VAR2->VAR12 = FUN6(VAR2, 0);
        VAR19 = FUN6(VAR2, VAR23);
        for (VAR3 = 0; VAR3 < VAR19; VAR3++)
        {
            FUN9(&VAR2->VAR6, 8);
        }
    }
    VAR2->VAR24 = FUN10(VAR25, VAR5);
    if ((VAR4 = FUN11(VAR2)) < 0)
        return VAR4;
    if ((VAR4 = FUN12(VAR2)) < 0)
        return VAR4;
    if (VAR2->VAR13 > 1)
        VAR2->VAR9 = VAR26;
    if (FUN13(&VAR2->VAR6, VAR27) != VAR28)
    {
        FUN4(VAR2->VAR7, VAR8, "");
        return -1;
    }
    VAR2->VAR29 = FUN13(&VAR2->VAR6, VAR30);
    if (VAR2->VAR29 >= VAR31 || VAR2->VAR29 < VAR32)
    {
        FUN4(VAR2->VAR7, VAR8, "", VAR2->VAR29);
        return -1;
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR29; VAR3++)
        VAR2->VAR33[VAR3] = (char)FUN13(&VAR2->VAR6, VAR34);
    if (FUN14(VAR2->VAR7, VAR2->VAR33, VAR2->VAR29) < 0)
        return -1;
    VAR2->VAR35 = 0;
    VAR2->VAR36 = 0;
    VAR2->VAR37 = 1;
    return 0;
}