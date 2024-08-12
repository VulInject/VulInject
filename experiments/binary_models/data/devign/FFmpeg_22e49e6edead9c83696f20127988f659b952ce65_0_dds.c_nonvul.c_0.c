static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR11;
    VAR12 *VAR13 = VAR3;
    int VAR14;
    int VAR15;
    FUN2(&VAR8->VAR16);
    FUN3(VAR11, VAR6->VAR3, VAR6->VAR17);
    if (FUN4(VAR11) < 128)
    {
        FUN5(VAR2, VAR18, "", FUN4(VAR11));
        return VAR19;
    }
    if (FUN6(VAR11) != FUN7('', '', '', '') || FUN6(VAR11) != 124)
    {
        FUN5(VAR2, VAR18, "");
        return VAR19;
    }
    FUN8(VAR11, 4);
    VAR2->VAR20 = FUN6(VAR11);
    VAR2->VAR21 = FUN6(VAR11);
    VAR15 = FUN9(VAR2->VAR21, VAR2->VAR20, 0, VAR2);
    if (VAR15 < 0)
    {
        FUN5(VAR2, VAR18, "", VAR2->VAR21, VAR2->VAR20);
        return VAR15;
    }
    VAR2->VAR22 = FUN10(VAR2->VAR21, VAR23);
    VAR2->VAR24 = FUN10(VAR2->VAR20, VAR25);
    FUN8(VAR11, 4);
    FUN8(VAR11, 4);
    VAR14 = FUN6(VAR11);
    if (VAR14 != 0)
        FUN5(VAR2, VAR26, "", VAR14);
    VAR15 = FUN11(VAR2);
    if (VAR15 < 0)
        return VAR15;
    VAR15 = FUN12(VAR2, VAR13, 0);
    if (VAR15 < 0)
        return VAR15;
    if (VAR8->VAR27)
    {
        int VAR17 = (VAR2->VAR24 / VAR25) * (VAR2->VAR22 / VAR23) * VAR8->VAR28;
        VAR8->VAR29 = FUN13(VAR2->VAR30, 1, VAR2->VAR24 / VAR25);
        if (FUN4(VAR11) < VAR17)
        {
            FUN5(VAR2, VAR18, "", FUN4(VAR11), VAR17);
            return VAR19;
        }
        VAR8->VAR31 = VAR11->VAR32;
        VAR2->FUN14(VAR2, VAR33, VAR13, NULL, VAR8->VAR29);
    }
    else
    {
        int VAR34 = FUN15(VAR2->VAR35, VAR13->VAR21, 0);
        if (VAR8->VAR36)
        {
            int VAR37;
            VAR38 *VAR39 = (VAR38 *)VAR13->VAR3[1];
            for (VAR37 = 0; VAR37 < 256; VAR37++)
            {
                uint32_t VAR40 = 0;
                VAR40 |= FUN16(VAR11) << 16;
                VAR40 |= FUN16(VAR11) << 8;
                VAR40 |= FUN16(VAR11) << 0;
                VAR40 |= FUN16(VAR11) << 24;
                VAR39[VAR37] = VAR40;
            }
            VAR13->VAR41 = 1;
        }
        if (FUN4(VAR11) < VAR13->VAR20 * VAR34)
        {
            FUN5(VAR2, VAR18, "", FUN4(VAR11), VAR13->VAR20 * VAR34);
            return VAR19;
        }
        FUN17(VAR13->VAR3[0], VAR13->VAR34[0], VAR11->VAR32, VAR34, VAR34, VAR13->VAR20);
    }
    if (VAR8->VAR42 != VAR43)
        FUN18(VAR2, VAR13);
    VAR13->VAR44 = VAR45;
    VAR13->VAR46 = 1;
    *VAR4 = 1;
    return VAR6->VAR17;
}