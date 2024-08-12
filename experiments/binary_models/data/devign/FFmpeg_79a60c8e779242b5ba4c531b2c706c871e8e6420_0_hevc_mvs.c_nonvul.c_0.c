static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, VAR8 *VAR9, int VAR10)
{
    VAR11 *VAR12;
    MvField VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    int VAR18 = VAR2->VAR19->VAR18;
    int VAR20 = 0;
    int VAR21;
    VAR22 *VAR23 = VAR2->VAR23->VAR24;
    if (!VAR23)
    {
        memset(VAR9, 0, sizeof(*VAR9));
        return 0;
    }
    VAR12 = VAR23->VAR12;
    VAR21 = VAR23->VAR25;
    VAR14 = VAR3 + VAR5;
    VAR15 = VAR4 + VAR6;
    if (VAR12 && (VAR4 >> VAR2->VAR19->VAR26) == (VAR15 >> VAR2->VAR19->VAR26) && VAR15 < VAR2->VAR19->VAR27 && VAR14 < VAR2->VAR19->VAR28)
    {
        VAR14 &= ~15;
        VAR15 &= ~15;
        FUN2(&VAR23->VAR29, VAR15, 0);
        VAR16 = VAR14 >> VAR2->VAR19->VAR30;
        VAR17 = VAR15 >> VAR2->VAR19->VAR30;
        VAR13 = FUN3(VAR16, VAR17);
        VAR20 = VAR31;
    }
    if (VAR12 && !VAR20)
    {
        VAR14 = VAR3 + (VAR5 >> 1);
        VAR15 = VAR4 + (VAR6 >> 1);
        VAR14 &= ~15;
        VAR15 &= ~15;
        FUN2(&VAR23->VAR29, VAR15, 0);
        VAR16 = VAR14 >> VAR2->VAR19->VAR30;
        VAR17 = VAR15 >> VAR2->VAR19->VAR30;
        VAR13 = FUN3(VAR16, VAR17);
        VAR20 = VAR31;
    }
    return VAR20;
}