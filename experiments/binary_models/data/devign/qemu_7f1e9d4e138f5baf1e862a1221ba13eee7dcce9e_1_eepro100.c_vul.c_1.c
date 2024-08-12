static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    eepro100_tx_t VAR4;
    uint32_t VAR5;
    switch (VAR3)
    {
    case VAR6:
        break;
    case VAR7:
        if (FUN2(VAR2) != VAR8)
        {
            FUN3("", FUN2(VAR2), VAR8);
        }
        FUN4(VAR2, VAR9);
        VAR2->VAR10 = VAR2->VAR11;
    VAR12:
        VAR5 = VAR2->VAR13 + VAR2->VAR10;
        FUN5(VAR5, (VAR14 *)&VAR4, sizeof(VAR4));
        uint16_t VAR15 = FUN6(VAR4.VAR15);
        uint16_t VAR16 = FUN6(VAR4.VAR16);
        FUN3("", VAR3, VAR15, VAR16, VAR4.VAR17);
        bool VAR18 = ((VAR16 & 0x8000) != 0);
        bool VAR19 = ((VAR16 & 0x4000) != 0);
        bool VAR20 = ((VAR16 & 0x2000) != 0);
        bool VAR21 = ((VAR16 & 0x0010) != 0);
        uint16_t VAR22 = VAR16 & 0x0007;
        VAR2->VAR10 = FUN7(VAR4.VAR17);
        switch (VAR22)
        {
        case VAR23:
            break;
        case VAR24:
            FUN5(VAR5 + 8, &VAR2->VAR25[0], 6);
            FUN8(VAR26, FUN3("", FUN9(&VAR2->VAR25[0], 6)));
            break;
        case VAR27:
            FUN5(VAR5 + 8, &VAR2->VAR28[0], sizeof(VAR2->VAR28));
            FUN8(VAR26, FUN3("", FUN9(&VAR2->VAR28[0], 16)));
            break;
        case VAR29:
            break;
        case VAR30:
            (void)0;
            uint32_t VAR31 = FUN7(VAR4.VAR32);
            uint16_t VAR33 = (FUN6(VAR4.VAR33) & 0x3fff);
            FUN8(VAR34, FUN3("", VAR31, VAR33, VAR4.VAR35));
            assert(!VAR21);
            assert(VAR33 <= 2600);
            if (!((VAR33 > 0) || (VAR31 != 0xffffffff)))
            {
                FUN3("");
            }
            uint8_t VAR36[2600];
            uint16_t VAR37 = 0;
            uint32_t VAR38 = VAR5 + 0x10;
            assert(VAR33 <= sizeof(VAR36));
            while (VAR37 < VAR33)
            {
                uint32_t VAR39 = FUN10(VAR38);
                uint16_t VAR40 = FUN11(VAR38 + 4);
                VAR38 += 8;
                FUN8(VAR34, FUN3("", VAR39, VAR40));
                VAR40 = FUN12(VAR40, sizeof(VAR36) - VAR37);
                FUN5(VAR39, &VAR36[VAR37], VAR40);
                VAR37 += VAR40;
            }
            if (VAR31 == 0xffffffff)
            {
            }
            else
            {
                uint8_t VAR35 = 0;
                if (FUN13(VAR2) && !(VAR2->VAR28[6] & FUN14(4)))
                {
                    assert(VAR33 == 0);
                    for (; VAR35 < 2; VAR35++)
                    {
                        uint32_t VAR39 = FUN10(VAR38);
                        uint16_t VAR40 = FUN11(VAR38 + 4);
                        uint16_t VAR41 = FUN11(VAR38 + 6);
                        VAR38 += 8;
                        FUN8(VAR34, FUN3("", VAR39, VAR40));
                        VAR40 = FUN12(VAR40, sizeof(VAR36) - VAR37);
                        FUN5(VAR39, &VAR36[VAR37], VAR40);
                        VAR37 += VAR40;
                        if (VAR41 & 1)
                        {
                            break;
                        }
                    }
                }
                VAR38 = VAR31;
                for (; VAR35 < VAR4.VAR35; VAR35++)
                {
                    uint32_t VAR39 = FUN10(VAR38);
                    uint16_t VAR40 = FUN11(VAR38 + 4);
                    uint16_t VAR41 = FUN11(VAR38 + 6);
                    VAR38 += 8;
                    FUN8(VAR34, FUN3("", VAR39, VAR40));
                    VAR40 = FUN12(VAR40, sizeof(VAR36) - VAR37);
                    FUN5(VAR39, &VAR36[VAR37], VAR40);
                    VAR37 += VAR40;
                    if (VAR41 & 1)
                    {
                        break;
                    }
                }
            }
            FUN8(VAR34, FUN3("", VAR2, VAR37, FUN9(VAR36, VAR37)));
            FUN15(VAR2->VAR42, VAR36, VAR37);
            VAR2->VAR43.VAR44++;
            break;
        case VAR45:
            FUN8(VAR26, FUN3(""));
            break;
        default:
            FUN16("");
        }
        FUN17(VAR5, VAR15 | 0x8000 | 0x2000);
        if (VAR20)
        {
            FUN18(VAR2);
        }
        if (VAR18)
        {
            FUN4(VAR2, VAR8);
            FUN19(VAR2);
        }
        else if (VAR19)
        {
            FUN4(VAR2, VAR46);
            FUN19(VAR2);
        }
        else
        {
            FUN8(VAR26, FUN3(""));
            goto VAR12;
        }
        FUN8(VAR26, FUN3(""));
        break;
    case VAR47:
        if (FUN2(VAR2) != VAR46)
        {
            FUN3("", FUN2(VAR2));
            FUN4(VAR2, VAR46);
        }
        if (FUN2(VAR2) == VAR46)
        {
            FUN8(VAR26, FUN3(""));
            FUN4(VAR2, VAR9);
            goto VAR12;
        }
        break;
    case VAR48:
        VAR2->VAR49 = VAR2->VAR11;
        FUN8(VAR26, FUN3("", VAR3));
        break;
    case VAR50:
        FUN8(VAR26, FUN3("", VAR3));
        FUN20(VAR2);
        break;
    case VAR51:
        FUN8(VAR26, FUN3("", VAR3));
        VAR2->VAR13 = VAR2->VAR11;
        break;
    case VAR52:
        FUN8(VAR26, FUN3("", VAR3));
        FUN20(VAR2);
        memset(&VAR2->VAR43, 0, sizeof(VAR2->VAR43));
        break;
    case VAR53:
        FUN16("");
        break;
    default:
        FUN16("");
    }
}