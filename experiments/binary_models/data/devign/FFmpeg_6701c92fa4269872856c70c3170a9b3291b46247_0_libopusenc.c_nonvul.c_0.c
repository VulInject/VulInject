static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const int VAR11 = VAR2->VAR12 * FUN2(VAR2->VAR13);
    VAR14 *VAR15;
    int VAR16;
    int VAR17;
    if (VAR6)
    {
        VAR16 = FUN3(&VAR9->VAR18, VAR6);
        if (VAR16 < 0)
            return VAR16;
        if (VAR6->VAR19 < VAR9->VAR20.VAR21)
        {
            VAR15 = VAR9->VAR22;
            memcpy(VAR15, VAR6->VAR23[0], VAR6->VAR19 * VAR11);
        }
        else
            VAR15 = VAR6->VAR23[0];
    }
    else
    {
        if (!VAR9->VAR18.VAR24 || (!VAR9->VAR18.VAR25 && !VAR9->VAR18.VAR26))
            return 0;
        VAR15 = VAR9->VAR22;
        memset(VAR15, 0, VAR9->VAR20.VAR21 * VAR11);
    }
    if ((VAR16 = FUN4(VAR2, VAR4, (1275 * 3 + 7) * VAR9->VAR27, 0)) < 0)
        return VAR16;
    if (VAR2->VAR13 == VAR28)
        VAR16 = FUN5(VAR9->VAR29, (float *)VAR15, VAR9->VAR20.VAR21, VAR4->VAR23, VAR4->VAR30);
    else
        VAR16 = FUN6(VAR9->VAR29, (VAR31 *)VAR15, VAR9->VAR20.VAR21, VAR4->VAR23, VAR4->VAR30);
    if (VAR16 < 0)
    {
        FUN7(VAR2, VAR32, "", FUN8(VAR16));
        return FUN9(VAR16);
    }
    FUN10(VAR4, VAR16);
    FUN11(&VAR9->VAR18, VAR9->VAR20.VAR21, &VAR4->VAR33, &VAR4->VAR34);
    VAR17 = VAR9->VAR20.VAR21 - VAR4->VAR34;
    if ((VAR17 < VAR9->VAR20.VAR21) != (VAR4->VAR34 > 0))
    {
        FUN12(VAR4);
        FUN13(VAR4);
        return FUN14(VAR35);
    }
    if (VAR17 > 0)
    {
        VAR14 *VAR36 = FUN15(VAR4, VAR37, 10);
        if (!VAR36)
        {
            FUN12(VAR4);
            FUN13(VAR4);
            return FUN14(VAR38);
        }
        FUN16(VAR36 + 4, VAR17);
    }
    *VAR7 = 1;
    return 0;
}