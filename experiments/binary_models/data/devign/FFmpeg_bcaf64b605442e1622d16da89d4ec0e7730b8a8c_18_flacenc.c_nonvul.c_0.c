static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12;
    VAR9 = VAR2->VAR13;
    if (!VAR6)
    {
        VAR9->VAR14 = VAR9->VAR15;
        FUN2(VAR9->VAR16, VAR9->VAR17);
        FUN3(VAR9, VAR2->VAR18);
        return 0;
    }
    if (VAR6->VAR19 < VAR9->VAR6.VAR20)
    {
        VAR9->VAR14 = FUN4(VAR6->VAR19, VAR9->VAR21, VAR2->VAR22);
    }
    FUN5(VAR9, VAR6->VAR19);
    FUN6(VAR9, VAR6->VAR23[0]);
    FUN7(VAR9);
    FUN8(VAR9);
    VAR10 = FUN9(VAR9);
    if (VAR10 < 0 || VAR10 > VAR9->VAR14)
    {
        VAR9->VAR6.VAR24 = 1;
        VAR10 = FUN9(VAR9);
        if (VAR10 < 0)
        {
            FUN10(VAR2, VAR25, "");
            return VAR10;
        }
    }
    if ((VAR12 = FUN11(VAR2, VAR4, VAR10)) < 0)
        return VAR12;
    VAR11 = FUN12(VAR9, VAR4);
    VAR9->VAR26++;
    VAR9->VAR27 += VAR6->VAR19;
    if ((VAR12 = FUN13(VAR9, VAR6->VAR23[0])) < 0)
    {
        FUN10(VAR2, VAR25, "");
        return VAR12;
    }
    if (VAR11 > VAR9->VAR15)
        VAR9->VAR15 = VAR11;
    if (VAR11 < VAR9->VAR28)
        VAR9->VAR28 = VAR11;
    VAR4->VAR29 = VAR6->VAR29;
    VAR4->VAR30 = FUN14(VAR2, VAR6->VAR19);
    VAR4->VAR31 = VAR11;
    *VAR7 = 1;
    return 0;
}