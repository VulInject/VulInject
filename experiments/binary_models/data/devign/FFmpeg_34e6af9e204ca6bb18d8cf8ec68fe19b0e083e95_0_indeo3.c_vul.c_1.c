static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    GetByteContext VAR8;
    const VAR5 *VAR9;
    uint32_t VAR10, VAR11, VAR12, VAR13;
    uint32_t VAR14, VAR15, VAR16, VAR17[3], VAR18[3];
    uint16_t VAR19, VAR20;
    int VAR21, VAR22;
    FUN2(&VAR8, VAR6, VAR7);
    VAR10 = FUN3(&VAR8);
    VAR11 = FUN3(&VAR8);
    VAR12 = FUN3(&VAR8);
    VAR13 = FUN3(&VAR8);
    if ((VAR10 ^ VAR11 ^ VAR13 ^ VAR23) != VAR12)
    {
        FUN4(VAR4, VAR24, "");
        return VAR25;
    }
    VAR9 = VAR8.VAR26;
    if (FUN5(&VAR8) != 32)
    {
        FUN4(VAR4, VAR24, "");
        return VAR25;
    }
    VAR2->VAR10 = VAR10;
    VAR2->VAR27 = FUN5(&VAR8);
    VAR2->VAR13 = (FUN3(&VAR8) + 7) >> 3;
    VAR2->VAR28 = FUN6(&VAR8);
    if (VAR2->VAR13 == 16)
        return 4;
    if (VAR2->VAR13 > VAR7)
        VAR2->VAR13 = VAR7;
    FUN7(&VAR8, 3);
    VAR19 = FUN5(&VAR8);
    VAR20 = FUN5(&VAR8);
    if (FUN8(VAR20, VAR19, 0, VAR4))
        return VAR25;
    if (VAR20 != VAR2->VAR20 || VAR19 != VAR2->VAR19)
    {
        int VAR29;
        FUN9(VAR4, "");
        if (VAR20 < 16 || VAR20 > 640 || VAR19 < 16 || VAR19 > 480 || VAR20 & 3 || VAR19 & 3)
        {
            FUN4(VAR4, VAR24, "", VAR20, VAR19);
            return VAR25;
        }
        VAR2->VAR20 = VAR20;
        VAR2->VAR19 = VAR19;
        FUN10(VAR2);
        if ((VAR29 = FUN11(VAR2, VAR4)) < 0)
            return VAR29;
        FUN12(VAR4, VAR20, VAR19);
    }
    VAR14 = FUN3(&VAR8);
    VAR16 = FUN3(&VAR8);
    VAR15 = FUN3(&VAR8);
    FUN7(&VAR8, 4);
    VAR17[0] = VAR14;
    VAR17[1] = VAR16;
    VAR17[2] = VAR15;
    for (VAR22 = 0; VAR22 < 3; VAR22++)
    {
        VAR18[VAR22] = VAR2->VAR13;
        for (VAR21 = 2; VAR21 >= 0; VAR21--)
            if (VAR17[VAR21] < VAR18[VAR22] && VAR17[VAR21] > VAR17[VAR22])
                VAR18[VAR22] = VAR17[VAR21];
    }
    VAR2->VAR30 = VAR18[0] - VAR17[0];
    VAR2->VAR31 = VAR18[1] - VAR17[1];
    VAR2->VAR32 = VAR18[2] - VAR17[2];
    if (FUN13(VAR14, VAR16, VAR15) >= VAR2->VAR13 - 16 || FUN14(VAR14, VAR16, VAR15) < VAR8.VAR26 - VAR9 + 16 || FUN14(VAR2->VAR30, VAR2->VAR31, VAR2->VAR32) <= 0)
    {
        FUN4(VAR4, VAR24, "");
        return VAR25;
    }
    VAR2->VAR33 = VAR9 + VAR14;
    VAR2->VAR34 = VAR9 + VAR16;
    VAR2->VAR35 = VAR9 + VAR15;
    VAR2->VAR36 = VAR8.VAR26;
    if (VAR2->VAR13 == 16)
    {
        FUN4(VAR4, VAR37, "");
        return 16;
    }
    if (VAR2->VAR27 & VAR38)
    {
        FUN15(VAR4, "");
        return VAR39;
    }
    if (VAR2->VAR27 & VAR40 || VAR2->VAR27 & VAR41)
    {
        FUN15(VAR4, "");
        return VAR39;
    }
    return 0;
}