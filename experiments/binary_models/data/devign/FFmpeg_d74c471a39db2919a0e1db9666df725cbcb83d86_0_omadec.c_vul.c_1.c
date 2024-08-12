static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    uint32_t VAR7, VAR8;
    int16_t VAR9;
    uint8_t VAR10[VAR11];
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17 = NULL;
    VAR18 *VAR19 = VAR2->VAR20;
    FUN2(VAR2, VAR21, &VAR17, 0);
    VAR3 = FUN3(VAR2->VAR22, VAR10, VAR11);
    if (VAR3 < VAR11)
        return -1;
    if (memcmp(VAR10, ((const VAR12[]){'', '', ''}), 3) || VAR10[4] != 0 || VAR10[5] != VAR11)
    {
        FUN4(VAR2, VAR23, "");
        return VAR24;
    }
    VAR19->VAR25 = FUN5(VAR2->VAR22);
    VAR9 = FUN6(&VAR10[6]);
    if (VAR9 != -1 && VAR9 != -128 && FUN7(VAR2, VAR17, VAR10) < 0)
    {
        FUN8(&VAR17);
        return -1;
    }
    FUN8(&VAR17);
    VAR7 = FUN9(&VAR10[33]);
    VAR15 = FUN10(VAR2, NULL);
    if (!VAR15)
        return FUN11(VAR26);
    VAR15->VAR27 = 0;
    VAR15->VAR28->VAR29 = VAR30;
    VAR15->VAR28->VAR31 = VAR10[32];
    VAR15->VAR28->VAR32 = FUN12(VAR33, VAR15->VAR28->VAR31);
    switch (VAR10[32])
    {
    case VAR34:
        VAR6 = VAR35[(VAR7 >> 13) & 7] * 100;
        if (!VAR6)
        {
            FUN4(VAR2, VAR23, "");
            return VAR24;
        }
        if (VAR6 != 44100)
            FUN13(VAR2, "", VAR6);
        VAR4 = (VAR7 & 0x3FF) * 8;
        VAR5 = (VAR7 >> 17) & 1;
        VAR15->VAR28->VAR36 = 2;
        VAR15->VAR28->VAR37 = VAR38;
        VAR15->VAR28->VAR39 = VAR6;
        VAR15->VAR28->VAR40 = VAR15->VAR28->VAR39 * VAR4 * 8 / 1024;
        if (FUN14(VAR15->VAR28, 14))
            return FUN11(VAR26);
        VAR13 = VAR15->VAR28->VAR41;
        FUN15(&VAR13[0], 1);
        FUN16(&VAR13[2], VAR6);
        FUN15(&VAR13[6], VAR5);
        FUN15(&VAR13[8], VAR5);
        FUN15(&VAR13[10], 1);
        FUN17(VAR15, 64, 1, VAR15->VAR28->VAR39);
        break;
    case VAR42:
        VAR8 = (VAR7 >> 10) & 7;
        if (!VAR8)
        {
            FUN4(VAR2, VAR23, "" VAR43 "", VAR8);
            return VAR24;
        }
        VAR15->VAR28->VAR37 = VAR44[VAR8 - 1];
        VAR15->VAR28->VAR36 = VAR45[VAR8 - 1];
        VAR4 = ((VAR7 & 0x3FF) * 8) + 8;
        VAR6 = VAR35[(VAR7 >> 13) & 7] * 100;
        if (!VAR6)
        {
            FUN4(VAR2, VAR23, "");
            return VAR24;
        }
        VAR15->VAR28->VAR39 = VAR6;
        VAR15->VAR28->VAR40 = VAR6 * VAR4 * 8 / 2048;
        FUN17(VAR15, 64, 1, VAR6);
        break;
    case VAR46:
        VAR15->VAR47 = VAR48;
        VAR4 = 1024;
        break;
    case VAR49:
        VAR15->VAR28->VAR36 = 2;
        VAR15->VAR28->VAR37 = VAR38;
        VAR15->VAR28->VAR39 = 44100;
        VAR4 = 1024;
        VAR15->VAR28->VAR40 = VAR15->VAR28->VAR39 * 32;
        VAR15->VAR28->VAR50 = FUN18(VAR15->VAR28->VAR32);
        FUN17(VAR15, 64, 1, VAR15->VAR28->VAR39);
        break;
    default:
        FUN4(VAR2, VAR23, "", VAR10[32]);
        return FUN11(VAR51);
    }
    VAR15->VAR28->VAR52 = VAR4;
    return 0;
}