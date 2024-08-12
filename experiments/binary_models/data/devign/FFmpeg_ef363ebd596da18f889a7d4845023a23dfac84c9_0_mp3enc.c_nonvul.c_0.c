static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8[VAR4->VAR9]->VAR7;
    VAR10 *VAR11 = FUN2(VAR2->VAR8[VAR4->VAR9]->VAR12, "", NULL, 0);
    VAR13 *VAR14;
    int32_t VAR15;
    MPADecodeHeader VAR16;
    int VAR17, VAR18, VAR19;
    int VAR20;
    int VAR21;
    int VAR22 = VAR23;
    int VAR24;
    int VAR25 = 0;
    int VAR26, VAR27;
    if (!VAR2->VAR28->VAR29 || !VAR4->VAR30)
        return;
    for (VAR18 = 0; VAR18 < FUN3(VAR31); VAR18++)
    {
        const uint16_t VAR32 = VAR31[VAR18];
        if (VAR7->VAR33 == VAR32)
            VAR25 = 0x3;
        else if (VAR7->VAR33 == VAR32 / 2)
            VAR25 = 0x2;
        else if (VAR7->VAR33 == VAR32 / 4)
            VAR25 = 0x0;
        else
            continue;
        VAR17 = VAR18;
        break;
    }
    if (VAR18 == FUN3(VAR31))
    {
        FUN4(VAR2, VAR34, ""
                                  "");
        return;
    }
    switch (VAR7->VAR19)
    {
    case 1:
        VAR19 = VAR35;
        break;
    case 2:
        VAR19 = VAR36;
        break;
    default:
        FUN4(VAR2, VAR34, ""
                                  "");
        return;
    }
    VAR15 = 0xff << 24;
    VAR15 |= (0x7 << 5 | VAR25 << 3 | 0x1 << 1 | 0x1) << 16;
    VAR15 |= (VAR17 << 2) << 8;
    VAR15 |= VAR19 << 6;
    VAR26 = !((VAR15 & (1 << 20) && VAR15 & (1 << 19)));
    VAR4->VAR37 = VAR38[VAR25 != 3][VAR19 == 1] + 4;
    VAR27 = VAR4->VAR37 + VAR39;
    for (VAR20 = 1; VAR20 < 15; VAR20++)
    {
        int VAR40 = 1000 * VAR41[VAR26][3 - 1][VAR20];
        int VAR42 = FUN5(VAR40 - VAR7->VAR40);
        if (VAR42 < VAR22)
        {
            VAR22 = VAR42;
            VAR21 = VAR20;
        }
    }
    for (VAR20 = VAR21; VAR20 < 15; VAR20++)
    {
        int32_t VAR43 = VAR20 << (4 + 8);
        VAR15 |= VAR43;
        FUN6(&VAR16, VAR15);
        if (VAR27 <= VAR16.VAR44)
            break;
        VAR15 &= ~VAR43;
    }
    VAR24 = FUN7(&VAR14);
    if (VAR24 < 0)
        return;
    FUN8(VAR14, VAR15);
    FUN6(&VAR16, VAR15);
    FUN9(VAR16.VAR44 >= VAR27);
    FUN10(VAR14, 0, VAR4->VAR37 - 4);
    FUN11(VAR14, "");
    FUN8(VAR14, 0x01 | 0x02 | 0x04 | 0x08);
    VAR4->VAR45 = VAR16.VAR44;
    VAR4->VAR46 = 1;
    FUN8(VAR14, 0);
    FUN8(VAR14, 0);
    for (VAR18 = 0; VAR18 < VAR47; VAR18++)
        FUN12(VAR14, 255 * VAR18 / VAR47);
    FUN8(VAR14, 0);
    if (VAR11)
    {
        uint8_t VAR48[9] = {0};
        memcpy(VAR48, VAR11->VAR49, FUN13(strlen(VAR11->VAR49), sizeof(VAR48)));
        FUN14(VAR14, VAR48, sizeof(VAR48));
    }
    else
        FUN10(VAR14, 0, 9);
    FUN12(VAR14, 0);
    FUN12(VAR14, 0);
    FUN10(VAR14, 0, 8);
    FUN12(VAR14, 0);
    FUN12(VAR14, 0);
    if (VAR7->VAR50 >= 1 << 12)
    {
        FUN4(VAR2, VAR34, "");
        FUN15(VAR14, 0);
    }
    else
    {
        FUN15(VAR14, VAR7->VAR50 << 12);
    }
    FUN12(VAR14, 0);
    FUN12(VAR14, 0);
    FUN16(VAR14, 0);
    FUN8(VAR14, 0);
    FUN16(VAR14, 0);
    FUN16(VAR14, 0);
    FUN10(VAR14, 0, VAR16.VAR44 - VAR27);
    VAR4->VAR51 = FUN17(VAR14, &VAR4->VAR52);
    VAR4->VAR53 = FUN18(VAR2->VAR28);
    FUN14(VAR2->VAR28, VAR4->VAR52, VAR4->VAR51);
    VAR4->VAR54 = VAR4->VAR51;
}