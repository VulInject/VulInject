static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    const int VAR8 = VAR2->VAR9->VAR8;
    const int VAR10 = VAR2->VAR9->VAR10;
    VAR11 *VAR12 = (VAR11 *)VAR2->VAR13.VAR14[0];
    VAR11 *VAR15 = (VAR11 *)VAR2->VAR16.VAR14[0];
    const int VAR17 = VAR2->VAR16.VAR18[0] >> 1;
    unsigned int VAR19, VAR20, VAR21, VAR22, VAR23, VAR24;
    if (VAR2->VAR25 > 1)
    {
        VAR22 = 20;
        if (VAR5 < VAR22)
            return -1;
        VAR19 = FUN2(VAR4 + 8);
        VAR21 = FUN2(VAR4 + 12);
        VAR20 = FUN2(VAR4 + 16);
    }
    else
    {
        VAR22 = 0;
        VAR19 = FUN3(VAR4 - 4);
        VAR21 = FUN3(VAR4 - 2);
        VAR20 = FUN4(VAR5 - VAR19 - VAR21, 0);
    }
    if (VAR19 > VAR5 || VAR20 > VAR5 - VAR19 || VAR21 > VAR5 - VAR20 - VAR19 || VAR22 > VAR5 - VAR20 - VAR19 - VAR21)
    {
        FUN5(VAR2->VAR9, VAR26, "", VAR19, VAR20, VAR21, VAR19 + VAR20 + VAR21 - VAR5);
        return -1;
    }
    FUN6(&VAR2->VAR27, &VAR2->VAR28, VAR19 + VAR29);
    if (!VAR2->VAR27)
        return FUN7(VAR30);
    VAR2->VAR31.FUN8(VAR2->VAR27, (const VAR32 *)(VAR4 + VAR22), VAR19 / 4);
    memset((VAR3 *)VAR2->VAR27 + VAR19, 0, VAR29);
    FUN9(&VAR2->VAR33, VAR2->VAR27, 8 * VAR19);
    VAR24 = VAR22 + VAR19;
    VAR23 = VAR22 + VAR19 + VAR21;
    FUN10(&VAR2->VAR34, VAR4 + VAR24, VAR5 - VAR24);
    FUN10(&VAR2->VAR35, VAR4 + VAR23, VAR5 - VAR23);
    FUN11(VAR2);
    for (VAR7 = 0; VAR7 < VAR10; VAR7 += 8)
    {
        for (VAR6 = 0; VAR6 < VAR8; VAR6 += 8)
            FUN12(VAR2, VAR15 + VAR6, VAR12 + VAR6, 3, 3, VAR17);
        VAR12 += 8 * VAR17;
        VAR15 += 8 * VAR17;
    }
    return 0;
}