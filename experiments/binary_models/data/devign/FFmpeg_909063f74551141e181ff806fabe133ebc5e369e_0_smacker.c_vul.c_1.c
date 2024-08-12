static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *const VAR9 = VAR2->VAR10;
    VAR5 *VAR11;
    VAR12 *VAR13;
    GetBitContext VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19;
    int VAR20;
    if (VAR7 == 769)
        return 0;
    if (VAR9->VAR21.VAR3[0])
        VAR2->FUN2(VAR2, &VAR9->VAR21);
    VAR9->VAR21.VAR22 = 1;
    VAR9->VAR21.VAR23 = VAR24 | VAR25 | VAR26;
    if (VAR2->FUN3(VAR2, &VAR9->VAR21) < 0)
    {
        FUN4(VAR2, VAR27, "");
        return -1;
    }
    VAR13 = (VAR12 *)VAR9->VAR21.VAR3[1];
    VAR9->VAR21.VAR28 = VAR6[0] & 1;
    VAR9->VAR21.VAR29 = !!(VAR6[0] & 2);
    if (VAR9->VAR21.VAR29)
        VAR9->VAR21.VAR30 = VAR31;
    else
        VAR9->VAR21.VAR30 = VAR32;
    VAR6++;
    for (VAR19 = 0; VAR19 < 256; VAR19++)
        *VAR13++ = FUN5(&VAR6);
    VAR7 -= 769;
    FUN6(VAR9->VAR33, VAR9->VAR34);
    FUN6(VAR9->VAR35, VAR9->VAR36);
    FUN6(VAR9->VAR37, VAR9->VAR38);
    FUN6(VAR9->VAR39, VAR9->VAR40);
    FUN7(&VAR14, VAR6, VAR7 * 8);
    VAR16 = 0;
    VAR17 = VAR2->VAR41 >> 2;
    VAR18 = VAR2->VAR42 >> 2;
    VAR15 = VAR17 * VAR18;
    VAR11 = VAR9->VAR21.VAR3[0];
    VAR20 = VAR9->VAR21.VAR43[0];
    while (VAR16 < VAR15)
    {
        int VAR44, VAR45, VAR46;
        uint16_t VAR47;
        VAR44 = FUN8(&VAR14, VAR9->VAR39, VAR9->VAR40);
        VAR45 = VAR48[(VAR44 >> 2) & 0x3F];
        switch (VAR44 & 3)
        {
        case VAR49:
            while (VAR45-- && VAR16 < VAR15)
            {
                int VAR50, VAR51;
                int VAR52, VAR53;
                VAR50 = FUN8(&VAR14, VAR9->VAR35, VAR9->VAR36);
                VAR51 = FUN8(&VAR14, VAR9->VAR33, VAR9->VAR34);
                VAR11 = VAR9->VAR21.VAR3[0] + (VAR16 / VAR17) * (VAR20 * 4) + (VAR16 % VAR17) * 4;
                VAR52 = VAR50 >> 8;
                VAR53 = VAR50 & 0xFF;
                for (VAR19 = 0; VAR19 < 4; VAR19++)
                {
                    if (VAR51 & 1)
                        VAR11[0] = VAR52;
                    else
                        VAR11[0] = VAR53;
                    if (VAR51 & 2)
                        VAR11[1] = VAR52;
                    else
                        VAR11[1] = VAR53;
                    if (VAR51 & 4)
                        VAR11[2] = VAR52;
                    else
                        VAR11[2] = VAR53;
                    if (VAR51 & 8)
                        VAR11[3] = VAR52;
                    else
                        VAR11[3] = VAR53;
                    VAR51 >>= 4;
                    VAR11 += VAR20;
                }
                VAR16++;
            }
            break;
        case VAR54:
            VAR46 = 0;
            if (VAR2->VAR55 == FUN9('', '', '', ''))
            {
                if (FUN10(&VAR14))
                    VAR46 = 1;
                else if (FUN10(&VAR14))
                    VAR46 = 2;
            }
            while (VAR45-- && VAR16 < VAR15)
            {
                VAR11 = VAR9->VAR21.VAR3[0] + (VAR16 / VAR17) * (VAR20 * 4) + (VAR16 % VAR17) * 4;
                switch (VAR46)
                {
                case 0:
                    for (VAR19 = 0; VAR19 < 4; VAR19++)
                    {
                        VAR47 = FUN8(&VAR14, VAR9->VAR37, VAR9->VAR38);
                        FUN11(VAR11 + 2, VAR47);
                        VAR47 = FUN8(&VAR14, VAR9->VAR37, VAR9->VAR38);
                        FUN11(VAR11, VAR47);
                        VAR11 += VAR20;
                    }
                    break;
                case 1:
                    VAR47 = FUN8(&VAR14, VAR9->VAR37, VAR9->VAR38);
                    VAR11[0] = VAR11[1] = VAR47 & 0xFF;
                    VAR11[2] = VAR11[3] = VAR47 >> 8;
                    VAR11 += VAR20;
                    VAR11[0] = VAR11[1] = VAR47 & 0xFF;
                    VAR11[2] = VAR11[3] = VAR47 >> 8;
                    VAR11 += VAR20;
                    VAR47 = FUN8(&VAR14, VAR9->VAR37, VAR9->VAR38);
                    VAR11[0] = VAR11[1] = VAR47 & 0xFF;
                    VAR11[2] = VAR11[3] = VAR47 >> 8;
                    VAR11 += VAR20;
                    VAR11[0] = VAR11[1] = VAR47 & 0xFF;
                    VAR11[2] = VAR11[3] = VAR47 >> 8;
                    VAR11 += VAR20;
                    break;
                case 2:
                    for (VAR19 = 0; VAR19 < 2; VAR19++)
                    {
                        uint16_t VAR56, VAR57;
                        VAR56 = FUN8(&VAR14, VAR9->VAR37, VAR9->VAR38);
                        VAR57 = FUN8(&VAR14, VAR9->VAR37, VAR9->VAR38);
                        FUN11(VAR11, VAR56);
                        FUN11(VAR11 + 2, VAR57);
                        VAR11 += VAR20;
                        FUN11(VAR11, VAR56);
                        FUN11(VAR11 + 2, VAR57);
                        VAR11 += VAR20;
                    }
                    break;
                }
                VAR16++;
            }
            break;
        case VAR58:
            while (VAR45-- && VAR16 < VAR15)
                VAR16++;
            break;
        case VAR59:
            VAR46 = VAR44 >> 8;
            while (VAR45-- && VAR16 < VAR15)
            {
                uint32_t VAR60;
                VAR11 = VAR9->VAR21.VAR3[0] + (VAR16 / VAR17) * (VAR20 * 4) + (VAR16 % VAR17) * 4;
                VAR60 = VAR46 * 0x01010101;
                for (VAR19 = 0; VAR19 < 4; VAR19++)
                {
                    *((VAR12 *)VAR11) = VAR60;
                    VAR11 += VAR20;
                }
                VAR16++;
            }
            break;
        }
    }
    *VAR4 = sizeof(VAR61);
    *(VAR61 *)VAR3 = VAR9->VAR21;
    return VAR7;
}