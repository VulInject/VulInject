static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8[VAR4->VAR9]->VAR7;
    VAR10 *VAR11 = FUN2(VAR2->VAR8[VAR4->VAR9]->VAR12, "", NULL, 0);
    VAR13 *VAR14;
    int32_t VAR15;
    MPADecodeHeader VAR16;
    int VAR17, VAR18, VAR19;
    int VAR20;
    int VAR21 = -1;
    int VAR22 = VAR23;
    int VAR24;
    int VAR25 = 0;
    int VAR26;
    if (!VAR2->VAR27->VAR28 || !VAR4->VAR29)
        return 0;
    for (VAR18 = 0; VAR18 < FUN3(VAR30); VAR18++)
    {
        const uint16_t VAR31 = VAR30[VAR18];
        if (VAR7->VAR32 == VAR31)
            VAR25 = 0x3;
        else if (VAR7->VAR32 == VAR31 / 2)
            VAR25 = 0x2;
        else if (VAR7->VAR32 == VAR31 / 4)
            VAR25 = 0x0;
        else
            continue;
        VAR17 = VAR18;
        break;
    }
    if (VAR18 == FUN3(VAR30))
    {
        FUN4(VAR2, VAR33, "");
        return -1;
    }
    switch (VAR7->VAR19)
    {
    case 1:
        VAR19 = VAR34;
        break;
    case 2:
        VAR19 = VAR35;
        break;
    default:
        FUN4(VAR2, VAR33, ""
                                  "");
        return -1;
    }
    VAR15 = 0xffU << 24;
    VAR15 |= (0x7 << 5 | VAR25 << 3 | 0x1 << 1 | 0x1) << 16;
    VAR15 |= (VAR17 << 2) << 8;
    VAR15 |= VAR19 << 6;
    for (VAR20 = 1; VAR20 < 15; VAR20++)
    {
        int VAR36 = 1000 * VAR37[VAR25 != 3][3 - 1][VAR20];
        int VAR38 = FUN5(VAR36 - VAR7->VAR36);
        if (VAR38 < VAR22)
        {
            VAR22 = VAR38;
            VAR21 = VAR20;
        }
    }
    FUN6(VAR21 >= 0);
    for (VAR20 = VAR21;; VAR20++)
    {
        int32_t VAR39 = VAR20 << (4 + 8);
        if (15 == VAR20)
            return -1;
        VAR15 |= VAR39;
        VAR24 = FUN7(&VAR16, VAR15);
        FUN6(VAR24 >= 0);
        VAR4->VAR40 = VAR41[VAR16.VAR42 == 1][VAR16.VAR43 == 1] + 4;
        VAR26 = VAR4->VAR40 + VAR44;
        if (VAR26 <= VAR16.VAR45)
            break;
        VAR15 &= ~VAR39;
    }
    VAR24 = FUN8(&VAR14);
    if (VAR24 < 0)
        return VAR24;
    FUN9(VAR14, VAR15);
    FUN10(VAR14, 0, VAR4->VAR40 - 4);
    FUN11(VAR14, "");
    FUN9(VAR14, 0x01 | 0x02 | 0x04 | 0x08);
    VAR4->VAR46 = VAR16.VAR45;
    VAR4->VAR47 = 1;
    VAR4->VAR48 = 0;
    VAR4->VAR49 = 0;
    FUN9(VAR14, 0);
    FUN9(VAR14, 0);
    for (VAR18 = 0; VAR18 < VAR50; VAR18++)
        FUN12(VAR14, (VAR51)(255 * VAR18 / VAR50));
    FUN9(VAR14, 0);
    if (VAR11)
    {
        uint8_t VAR52[9] = {0};
        if (strlen(VAR11->VAR53) > sizeof(VAR52) && !strcmp("", VAR11->VAR53))
        {
            memcpy(VAR52, "", 9);
        }
        else
            memcpy(VAR52, VAR11->VAR53, FUN13(strlen(VAR11->VAR53), sizeof(VAR52)));
        FUN14(VAR14, VAR52, sizeof(VAR52));
    }
    else
        FUN14(VAR14, "", 9);
    FUN12(VAR14, 0);
    FUN12(VAR14, 0);
    FUN10(VAR14, 0, 8);
    FUN12(VAR14, 0);
    FUN12(VAR14, 0);
    if (VAR7->VAR54 - 528 - 1 >= 1 << 12)
    {
        FUN4(VAR2, VAR33, "");
    }
    FUN15(VAR14, FUN16(VAR7->VAR54 - 528 - 1, 0) << 12);
    FUN12(VAR14, 0);
    FUN12(VAR14, 0);
    FUN17(VAR14, 0);
    FUN9(VAR14, 0);
    FUN17(VAR14, 0);
    FUN17(VAR14, 0);
    FUN10(VAR14, 0, VAR16.VAR45 - VAR26);
    VAR4->VAR55 = FUN18(VAR14, &VAR4->VAR56);
    VAR4->VAR57 = FUN19(VAR2->VAR27);
    FUN14(VAR2->VAR27, VAR4->VAR56, VAR4->VAR55);
    VAR4->VAR58 = VAR4->VAR55;
    return 0;
}