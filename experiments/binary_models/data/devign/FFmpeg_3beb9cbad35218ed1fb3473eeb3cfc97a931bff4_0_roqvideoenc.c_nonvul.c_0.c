static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12;
    VAR9->VAR2 = VAR2;
    VAR9->VAR13 = VAR6;
    if (VAR6->VAR14)
        VAR9->VAR15 = VAR6->VAR14 - 1;
    else
        VAR9->VAR15 = 2 * VAR16;
    VAR11 = ((VAR9->VAR17 * VAR9->VAR18 / 64) * 138 + 7) / 8 + 256 * (6 + 4) + 8;
    if ((VAR12 = FUN2(VAR4, VAR11)) < 0)
    {
        FUN3(VAR2, VAR19, "", VAR11);
        return VAR12;
    }
    VAR9->VAR20 = VAR4->VAR21;
    if (VAR9->VAR22 == VAR2->VAR23)
        VAR9->VAR22 = 0;
    if (VAR9->VAR24)
    {
        if (FUN4(VAR2, VAR9->VAR25, 0) || FUN4(VAR2, VAR9->VAR26, 0))
        {
            FUN3(VAR2, VAR19, "");
            return -1;
        }
        FUN5(VAR9);
        VAR9->VAR24 = 0;
    }
    VAR12 = FUN6(VAR9);
    if (VAR12 < 0)
        return VAR12;
    VAR4->VAR11 = VAR9->VAR20 - VAR4->VAR21;
    if (VAR9->VAR22 == 1)
        VAR4->VAR27 |= VAR28;
    *VAR7 = 1;
    return 0;
}