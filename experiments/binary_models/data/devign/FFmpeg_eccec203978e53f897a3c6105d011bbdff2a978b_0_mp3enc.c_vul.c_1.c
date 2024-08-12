static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8[VAR4->VAR9]->VAR7;
    int32_t VAR10;
    MPADecodeHeader VAR11;
    int VAR12, VAR13, VAR14;
    int VAR15;
    int VAR16 = -1;
    int VAR17 = VAR18;
    int VAR19;
    int VAR20 = 0;
    int VAR21, VAR22;
    const char *VAR23 = (VAR7->VAR24 & VAR25) ? "" : VAR26;
    if (!VAR2->VAR27->VAR28 || !VAR4->VAR29)
        return 0;
    for (VAR13 = 0; VAR13 < FUN2(VAR30); VAR13++)
    {
        const uint16_t VAR31 = VAR30[VAR13];
        if (VAR7->VAR32 == VAR31)
            VAR20 = 0x3;
        else if (VAR7->VAR32 == VAR31 / 2)
            VAR20 = 0x2;
        else if (VAR7->VAR32 == VAR31 / 4)
            VAR20 = 0x0;
        else
            continue;
        VAR12 = VAR13;
        break;
    }
    if (VAR13 == FUN2(VAR30))
    {
        FUN3(VAR2, VAR33, "");
        return -1;
    }
    switch (VAR7->VAR14)
    {
    case 1:
        VAR14 = VAR34;
        break;
    case 2:
        VAR14 = VAR35;
        break;
    default:
        FUN3(VAR2, VAR33, ""
                                  "");
        return -1;
    }
    VAR10 = 0xffU << 24;
    VAR10 |= (0x7 << 5 | VAR20 << 3 | 0x1 << 1 | 0x1) << 16;
    VAR10 |= (VAR12 << 2) << 8;
    VAR10 |= VAR14 << 6;
    for (VAR15 = 1; VAR15 < 15; VAR15++)
    {
        int VAR36 = 1000 * VAR37[VAR22][3 - 1][VAR15];
        int VAR38 = FUN4(VAR36 - VAR7->VAR36);
        if (VAR38 < VAR17)
        {
            VAR17 = VAR38;
            VAR16 = VAR15;
        }
    }
    FUN5(VAR16 >= 0);
    for (VAR15 = VAR16;; VAR15++)
    {
        int32_t VAR39 = VAR15 << (4 + 8);
        if (15 == VAR15)
            return -1;
        VAR10 |= VAR39;
        FUN6(&VAR11, VAR10);
        VAR19 = VAR40[VAR11.VAR22 == 1][VAR11.VAR41 == 1];
        VAR21 = 4 + VAR19 + 4 + 4 + 4 + 4 + VAR42 + 24;
        if (VAR21 <= VAR11.VAR43)
            break;
        VAR10 &= ~VAR39;
    }
    FUN7(VAR2->VAR27, VAR10);
    FUN8(VAR2->VAR27, 0, VAR19);
    VAR4->VAR19 = FUN9(VAR2->VAR27);
    FUN10(VAR2->VAR27, "");
    FUN7(VAR2->VAR27, 0x01 | 0x02 | 0x04);
    VAR4->VAR44 = VAR11.VAR43;
    VAR4->VAR45 = 1;
    VAR4->VAR46 = 0;
    VAR4->VAR47 = 0;
    FUN7(VAR2->VAR27, 0);
    FUN7(VAR2->VAR27, 0);
    for (VAR13 = 0; VAR13 < VAR42; ++VAR13)
        FUN11(VAR2->VAR27, (VAR48)(255 * VAR13 / VAR42));
    for (VAR13 = 0; VAR13 < strlen(VAR23); ++VAR13)
        FUN11(VAR2->VAR27, VAR23[VAR13]);
    for (; VAR13 < 21; ++VAR13)
        FUN11(VAR2->VAR27, 0);
    FUN12(VAR2->VAR27, FUN13(VAR7->VAR49 - 528 - 1, 0) << 12);
    FUN8(VAR2->VAR27, 0, VAR11.VAR43 - VAR21);
    return 0;
}