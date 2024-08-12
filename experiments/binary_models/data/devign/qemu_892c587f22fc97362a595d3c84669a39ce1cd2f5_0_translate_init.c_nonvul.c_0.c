static void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4[2];
    uint64_t VAR5 = 0x0000000F0000FFFFULL;
    uint32_t VAR6 = 0x3800 | 0x0020;
    int VAR7;
    FUN2(VAR2);
    if (VAR3 == VAR8)
    {
        VAR5 = 0x000003FE0000FFFFULL;
    }
    FUN3(VAR2, VAR5);
    FUN4(VAR2, VAR9, "", VAR10, VAR10, &VAR11, &VAR12, 0x00000000);
    FUN4(VAR2, VAR13, "", &VAR14, &VAR15, &VAR14, &VAR15, 0x00000000);
    VAR2->VAR16 = 3;
    VAR2->VAR17 = 2;
    VAR2->VAR18 = 0;
    switch (VAR3)
    {
    case VAR19:
        VAR4[0] = FUN5(2, 1, 1, 0, 256);
        VAR4[1] = FUN5(16, 1, 9, VAR20 | VAR21, 16);
        break;
    case VAR22:
        VAR4[0] = FUN5(4, 1, 1, 0, 512);
        VAR4[1] = FUN5(16, 1, 12, VAR20 | VAR21, 16);
        break;
    case VAR8:
        VAR4[0] = FUN5(4, 1, 1, 0, 512);
        VAR4[1] = FUN5(64, 1, 12, VAR20 | VAR21, 64);
        break;
    default:
        FUN6(VAR2, "" VAR23 "", VAR2->VAR24[VAR25]);
    }
    switch (VAR3)
    {
    case VAR19:
    case VAR22:
        VAR2->VAR26 = 32;
        VAR2->VAR27 = 32;
        break;
    case VAR8:
        VAR2->VAR26 = 64;
        VAR2->VAR27 = 64;
        VAR6 |= 0x1000000;
        break;
    default:
        FUN6(VAR2, "" VAR23 "", VAR2->VAR24[VAR25]);
    }
    FUN7(VAR2, 0x000000DF, VAR4);
    FUN4(VAR2, VAR28, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR30, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR31, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR32, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR33, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR34, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR35, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR36, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR37, "", VAR10, VAR10, &VAR11, &VAR29, VAR6);
    FUN4(VAR2, VAR38, "", VAR10, VAR10, &VAR11, &VAR39, 0x00000000);
    FUN4(VAR2, VAR40, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR41, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR42, "", VAR10, VAR10, &VAR11, &VAR29, 0x00000000);
    FUN4(VAR2, VAR43, "", VAR10, VAR10, &VAR11, &VAR44, 0x00000000);
    VAR2->VAR45 = 0;
    VAR2->VAR46 = VAR47;
    for (VAR7 = 0; VAR7 < VAR48; VAR7++)
    {
        VAR2->VAR45 += FUN8(VAR2, VAR7);
    }
    FUN9(VAR2);
    FUN10(VAR2);
}