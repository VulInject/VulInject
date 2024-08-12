static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    struct VAR6 *VAR7 = VAR5->VAR8;
    size_t VAR9 = sizeof(struct VAR6);
    uint64_t VAR10;
    uint16_t VAR11 = ((VAR2->VAR12 & 0xFF) >> 8) | (VAR3 & 0xFF);
    uint8_t VAR13[6];
    VAR14 *VAR15;
    size_t VAR16, VAR17;
    if (!VAR5->VAR8)
    {
        VAR5->VAR8 = FUN2(VAR9);
        memset(VAR5->VAR8, 0, VAR9);
        VAR7 = VAR5->VAR8;
        VAR7->VAR18[0] = 0x7f;
        VAR7->VAR19[0] = 0x7f;
        FUN3(VAR13, 0, sizeof(VAR7->VAR18));
        VAR15 = FUN4(VAR2, VAR5->VAR20, VAR3, VAR13, VAR5);
        if (!VAR15)
        {
            FUN5(VAR5->VAR20, "");
            FUN6(VAR5->VAR8);
            VAR5->VAR8 = NULL;
            return VAR21;
        }
        FUN7(VAR5->VAR20, "", VAR3);
        VAR16 = FUN8(VAR15);
        if (VAR16 > 0)
        {
            VAR5->VAR22 = VAR16;
            FUN9(VAR15);
        }
        return VAR23;
    }
    else if (VAR7->VAR18[0] != 0x7f && VAR7->VAR19[0] == 0x7f)
    {
        FUN3(VAR13, 0x83, sizeof(VAR7->VAR19));
        VAR15 = FUN4(VAR2, VAR5->VAR20, VAR3, VAR13, VAR5);
        if (!VAR15)
        {
            FUN5(VAR5->VAR20, "");
            return VAR21;
        }
        FUN7(VAR5->VAR20, "", VAR3);
        VAR16 = FUN8(VAR15);
        if (VAR16 > 0)
        {
            VAR5->VAR22 = VAR16;
            FUN9(VAR15);
        }
        return VAR23;
    }
    if ((VAR7->VAR18[0] >> 5) == 0)
    {
        if (FUN10(VAR5->VAR24))
        {
            VAR7->VAR25 = FUN11(VAR26);
        }
        else
        {
            VAR7->VAR25 = FUN11(VAR27);
        }
    }
    else
    {
        VAR7->VAR25 = FUN11(VAR28);
    }
    VAR7->VAR29.VAR30.VAR31 = FUN11(VAR11);
    VAR7->VAR24.VAR32.VAR33 = FUN11(VAR34 | VAR35);
    FUN12(VAR2->VAR36.VAR37, &VAR10);
    VAR7->VAR38 = FUN13(VAR10);
    VAR7->VAR39 = FUN13(VAR10);
    VAR7->VAR40 = FUN13(VAR10);
    VAR7->VAR41 = 0xFFFF;
    VAR7->VAR42 = (VAR2->VAR12 & 0xFF);
    VAR7->VAR43.VAR44 = 1;
    VAR7->VAR43.VAR45[0] = FUN13(FUN14(VAR11));
    VAR7->VAR46 = 0x1;
    VAR7->VAR47 = 1;
    VAR7->VAR48 = 1;
    VAR17 = FUN15(VAR5->VAR8, VAR9, &VAR5->VAR49);
    FUN6(VAR5->VAR8);
    VAR5->VAR22 = VAR9 - VAR17;
    VAR5->VAR8 = NULL;
    return VAR50;
}