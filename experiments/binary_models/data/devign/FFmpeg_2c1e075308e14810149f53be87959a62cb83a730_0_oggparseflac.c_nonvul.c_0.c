FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    VAR9 *VAR10 = VAR2->VAR8[VAR3];
    GetBitContext VAR11;
    FLACStreaminfo VAR12;
    int VAR13;
    if (VAR7->VAR14[VAR7->VAR15] == 0xff)
        return 0;
    FUN2(&VAR11, VAR7->VAR14 + VAR7->VAR15, VAR7->VAR16 * 8);
    FUN3(&VAR11);
    VAR13 = FUN4(&VAR11, 7);
    if (VAR13 == VAR17)
    {
        VAR18 *VAR19 = VAR7->VAR14 + VAR7->VAR15 + 5 + 4 + 4 + 4;
        FUN5(&VAR11, 4 * 8);
        if (FUN4(&VAR11, 8) != 1)
            return -1;
        FUN5(&VAR11, 8 + 16);
        FUN5(&VAR11, 4 * 8);
        if (FUN6(&VAR11, 32) != VAR20)
            return -1;
        FUN7(VAR10->VAR21, &VAR12, VAR19);
        VAR10->VAR21->VAR22 = VAR23;
        VAR10->VAR21->VAR24 = VAR25;
        VAR10->VAR26 = VAR27;
        if (FUN8(VAR10->VAR21, VAR20) < 0)
            return FUN9(VAR28);
        memcpy(VAR10->VAR21->VAR29, VAR19, VAR10->VAR21->VAR30);
        FUN10(VAR10, 64, 1, VAR10->VAR21->VAR31);
    }
    else if (VAR13 == VAR32)
    {
        FUN11(VAR2, &VAR10->VAR33, VAR7->VAR14 + VAR7->VAR15 + 4, VAR7->VAR16 - 4);
    }
    return 1;
}