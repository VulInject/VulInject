FUN1(VAR1 *VAR2, int VAR3)
{
    struct VAR4 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR8 + VAR3;
    VAR9 *VAR10 = VAR2->VAR8[VAR3];
    const VAR11 *VAR12 = VAR7->VAR13 + VAR7->VAR14;
    uint64_t VAR15;
    uint64_t VAR16;
    uint32_t VAR17;
    if (!(*VAR12 & 1))
        return 0;
    if (*VAR12 == 1)
    {
        VAR12++;
        if (*VAR12 == '')
        {
            int VAR18;
            VAR10->VAR19->VAR20 = VAR21;
            VAR12 += 8;
            VAR18 = FUN2(&VAR12);
            VAR10->VAR19->VAR22 = FUN3(VAR23, VAR18);
            VAR10->VAR19->VAR24 = VAR18;
        }
        else if (*VAR12 == '')
        {
            VAR10->VAR19->VAR20 = VAR25;
            VAR10->VAR19->VAR22 = VAR26;
            VAR12 += 12;
        }
        else
        {
            uint8_t VAR27[5];
            int VAR28;
            VAR10->VAR19->VAR20 = VAR29;
            VAR12 += 8;
            FUN4(&VAR12, VAR27, 4);
            VAR27[4] = 0;
            VAR28 = FUN5(VAR27, NULL, 16);
            VAR10->VAR19->VAR22 = FUN3(VAR30, VAR28);
            if (VAR10->VAR19->VAR22 != VAR31)
                VAR10->VAR32 = VAR33;
        }
        VAR17 = FUN2(&VAR12);
        VAR17 = FUN6(VAR17, VAR7->VAR34);
        VAR15 = FUN7(&VAR12);
        VAR16 = FUN7(&VAR12);
        VAR12 += 4;
        VAR12 += 8;
        if (VAR10->VAR19->VAR20 == VAR21)
        {
            VAR10->VAR19->VAR35 = FUN2(&VAR12);
            VAR10->VAR19->VAR36 = FUN2(&VAR12);
            FUN8(VAR10, 64, VAR15, VAR16 * 10000000);
        }
        else
        {
            VAR10->VAR19->VAR37 = FUN9(&VAR12);
            VAR12 += 2;
            VAR10->VAR19->VAR38 = FUN2(&VAR12) * 8;
            VAR10->VAR19->VAR39 = VAR16 * 10000000 / VAR15;
            FUN8(VAR10, 64, 1, VAR10->VAR19->VAR39);
            if (VAR17 >= 56 && VAR10->VAR19->VAR22 == VAR31)
            {
                VAR12 += 4;
                VAR17 -= 4;
            }
            if (VAR17 > 52)
            {
                FUN10(VAR40 <= 52);
                VAR17 -= 52;
                VAR10->VAR19->VAR41 = VAR17;
                VAR10->VAR19->VAR42 = FUN11(VAR17 + VAR40);
                FUN4(&VAR12, VAR10->VAR19->VAR42, VAR17);
            }
        }
    }
    else if (*VAR12 == 3)
    {
        if (VAR7->VAR34 > 8)
            FUN12(VAR2, &VAR10->VAR43, VAR12 + 7, VAR7->VAR34 - 8);
    }
    return 1;
}