static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR7;
    int VAR8[10][2];
    const int VAR9 = VAR2->VAR10;
    const int VAR11 = VAR4 * VAR9 + VAR3;
    const int VAR12 = 1 + VAR2->VAR13;
    int VAR14, VAR15;
    const int VAR16 = VAR2->VAR17;
    const int VAR18 = VAR2->VAR19;
    int VAR20, VAR21, VAR22, VAR23, VAR24, VAR25;
    FUN2(*VAR26)[2] = VAR2->VAR27;
    VAR6->VAR28 = VAR6->VAR29[1] + VAR30;
    VAR24 = VAR22 = (-32) >> VAR12;
    VAR25 = VAR23 = 31 >> VAR12;
    if (FUN3(VAR2->VAR31.VAR32[VAR11]))
    {
        VAR2->VAR33 = VAR34;
    }
    else
    {
        VAR2->VAR33 = VAR35;
    }
    for (VAR15 = 0; VAR15 < 4; VAR15++)
    {
        int VAR36 = VAR2->VAR37[VAR15];
        int VAR38, VAR39;
        VAR6->VAR40[VAR15][0] = VAR2->VAR31.VAR41[0][VAR36][0];
        VAR6->VAR40[VAR15][1] = VAR2->VAR31.VAR41[0][VAR36][1];
        VAR6->VAR42[VAR15][0] = VAR6->VAR40[VAR15][0] * VAR18 / VAR16 + ((VAR15 & 1) << (VAR12 + 3));
        VAR6->VAR42[VAR15][1] = VAR6->VAR40[VAR15][1] * VAR18 / VAR16 + ((VAR15 >> 1) << (VAR12 + 3));
        VAR39 = FUN4(VAR6->VAR42[VAR15][0], VAR6->VAR42[VAR15][0] - VAR6->VAR40[VAR15][0]) >> VAR12;
        VAR38 = FUN5(VAR6->VAR42[VAR15][0], VAR6->VAR42[VAR15][0] - VAR6->VAR40[VAR15][0]) >> VAR12;
        VAR39 += 16 * VAR3 + 1;
        VAR38 += 16 * VAR3 - 1;
        VAR23 = FUN5(VAR23, VAR2->VAR43 - VAR39);
        VAR22 = FUN4(VAR22, -16 - VAR38);
        VAR39 = FUN4(VAR6->VAR42[VAR15][1], VAR6->VAR42[VAR15][1] - VAR6->VAR40[VAR15][1]) >> VAR12;
        VAR38 = FUN5(VAR6->VAR42[VAR15][1], VAR6->VAR42[VAR15][1] - VAR6->VAR40[VAR15][1]) >> VAR12;
        VAR39 += 16 * VAR4 + 1;
        VAR38 += 16 * VAR4 - 1;
        VAR25 = FUN5(VAR25, VAR2->VAR44 - VAR39);
        VAR24 = FUN4(VAR24, -16 - VAR38);
        if (VAR2->VAR33 == VAR35)
            break;
    }
    FUN6(VAR23 <= 15 && VAR25 <= 15 && VAR22 >= -16 && VAR24 >= -16);
    if (VAR23 < 0 || VAR22 > 0 || VAR25 < 0 || VAR24 > 0)
    {
        VAR2->VAR27[VAR11][0] = 0;
        VAR2->VAR27[VAR11][1] = 0;
        return 256 * 256 * 256 * 64;
    }
    VAR6->VAR22 = VAR22;
    VAR6->VAR24 = VAR24;
    VAR6->VAR23 = VAR23;
    VAR6->VAR25 = VAR25;
    VAR6->VAR45 |= VAR46;
    VAR6->VAR47 |= VAR46;
    VAR6->VAR48 = 0;
    VAR6->VAR49 = 0;
    VAR50[0] = FUN7(VAR26[VAR11 - 1][0], VAR22 << VAR12, VAR23 << VAR12);
    VAR50[1] = FUN7(VAR26[VAR11 - 1][1], VAR24 << VAR12, VAR25 << VAR12);
    if (!VAR2->VAR51)
    {
        VAR52[0] = FUN7(VAR26[VAR11 - VAR9][0], VAR22 << VAR12, VAR23 << VAR12);
        VAR52[1] = FUN7(VAR26[VAR11 - VAR9][1], VAR24 << VAR12, VAR25 << VAR12);
        VAR53[0] = FUN7(VAR26[VAR11 - VAR9 + 1][0], VAR22 << VAR12, VAR23 << VAR12);
        VAR53[1] = FUN7(VAR26[VAR11 - VAR9 + 1][1], VAR24 << VAR12, VAR25 << VAR12);
        VAR54[0] = FUN8(VAR50[0], VAR52[0], VAR53[0]);
        VAR54[1] = FUN8(VAR50[1], VAR52[1], VAR53[1]);
    }
    VAR14 = FUN9(VAR2, &VAR20, &VAR21, VAR8, 0, 0, VAR26, 1 << (16 - VAR12), 0, 16);
    if (VAR6->VAR47 & VAR55)
        VAR14 = FUN10(VAR2, &VAR20, &VAR21, VAR14, 0, 0, 0, 16);
    else
        VAR14 = FUN11(VAR2, &VAR20, &VAR21, VAR14, 0, 0, 0, 16);
    if (VAR6->VAR56->VAR57 != VAR6->VAR56->VAR58 && !VAR6->VAR59)
        VAR14 = FUN12(VAR2, VAR20, VAR21, 0, 0, 0, 16, 1);
    FUN13(VAR2, 16 * VAR3, 16 * VAR4);
    VAR26[VAR11][0] = VAR20;
    VAR26[VAR11][1] = VAR21;
    VAR6->VAR45 &= ~VAR46;
    VAR6->VAR47 &= ~VAR46;
    return VAR14;
}