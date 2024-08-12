static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9;
    const VAR10 *VAR11;
    int VAR12, VAR13, VAR14;
    VAR9 = VAR2->VAR15;
    if (!VAR6)
    {
        VAR9->VAR16 = VAR9->VAR17;
        FUN2(VAR9->VAR18, VAR9->VAR19);
        FUN3(VAR9, VAR2->VAR20);
        return 0;
    }
    VAR11 = (const VAR10 *)VAR6->VAR21[0];
    if (VAR6->VAR22 < VAR9->VAR6.VAR23)
    {
        VAR9->VAR16 = FUN4(VAR6->VAR22, VAR9->VAR24, 16);
    }
    FUN5(VAR9, VAR6->VAR22);
    FUN6(VAR9, VAR11);
    FUN7(VAR9);
    FUN8(VAR9);
    VAR12 = FUN9(VAR9);
    if (VAR12 > VAR9->VAR16)
    {
        VAR9->VAR6.VAR25 = 1;
        VAR12 = FUN9(VAR9);
    }
    if ((VAR14 = FUN10(VAR4, VAR12)))
    {
        FUN11(VAR2, VAR26, "");
        return VAR14;
    }
    VAR13 = FUN12(VAR9, VAR4);
    VAR9->VAR27++;
    VAR9->VAR28 += VAR6->VAR22;
    if ((VAR14 = FUN13(VAR9, VAR11)) < 0)
    {
        FUN11(VAR2, VAR26, "");
        return VAR14;
    }
    if (VAR13 > VAR9->VAR17)
        VAR9->VAR17 = VAR13;
    if (VAR13 < VAR9->VAR29)
        VAR9->VAR29 = VAR13;
    VAR4->VAR30 = VAR6->VAR30;
    VAR4->VAR31 = FUN14(VAR2, VAR6->VAR22);
    VAR4->VAR32 = VAR13;
    *VAR7 = 1;
    return 0;
}