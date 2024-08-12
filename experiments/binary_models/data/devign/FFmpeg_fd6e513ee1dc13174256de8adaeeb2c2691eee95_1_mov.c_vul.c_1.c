static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1];
    VAR11 *VAR12 = (VAR11 *)VAR7->VAR13;
    int VAR14, VAR15;
    uint32_t VAR16;
    FUN2("", VAR5);
    FUN3(VAR4);
    FUN3(VAR4);
    FUN3(VAR4);
    FUN3(VAR4);
    VAR14 = FUN4(VAR4);
    while (VAR14--)
    {
        enum CodecID VAR17;
        int VAR18 = FUN4(VAR4);
        VAR16 = FUN5(VAR4);
        FUN4(VAR4);
        FUN6(VAR4);
        FUN6(VAR4);
        VAR17 = FUN7(VAR19, VAR16);
        if (VAR17 >= 0)
        {
            VAR20 *VAR21;
            VAR21 = FUN8(VAR17);
            if (VAR21)
                VAR7->VAR21.VAR22 = VAR21->VAR23;
        }
        FUN9("", VAR18, (VAR16 >> 0) & 0xff, (VAR16 >> 8) & 0xff, (VAR16 >> 16) & 0xff, (VAR16 >> 24) & 0xff, VAR7->VAR21.VAR22);
        VAR7->VAR21.VAR24 = VAR16;
        if (VAR7->VAR21.VAR22 == VAR25)
        {
            MOV_atom_t VAR26 = {0, 0, 0};
            VAR7->VAR21.VAR27 = VAR17;
            FUN6(VAR4);
            FUN6(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            VAR7->VAR21.VAR28 = FUN6(VAR4);
            VAR7->VAR21.VAR29 = FUN6(VAR4);
            if (VAR7->VAR21.VAR27 == VAR30)
            {
                VAR7->VAR21.VAR28 = 0;
                VAR7->VAR21.VAR29 = 0;
            }
            FUN4(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            VAR15 = FUN6(VAR4);
            FUN9("", VAR15);
            FUN10(VAR4, (VAR31 *)VAR7->VAR21.VAR32, 32);
            VAR7->VAR21.VAR33 = FUN6(VAR4);
            VAR7->VAR21.VAR34 = FUN6(VAR4);
            VAR7->VAR21.VAR35 = 25;
            VAR7->VAR21.VAR36 = 1;
            VAR18 -= (16 + 8 * 4 + 2 + 32 + 2 * 2);
            while (VAR18 >= 8)
            {
                MOV_atom_t VAR26;
                int64_t VAR37;
                VAR26.VAR18 = FUN4(VAR4);
                VAR26.VAR23 = FUN5(VAR4);
                VAR18 -= 8;
                FUN9("", (VAR26.VAR23 >> 0) & 0xff, (VAR26.VAR23 >> 8) & 0xff, (VAR26.VAR23 >> 16) & 0xff, (VAR26.VAR23 >> 24) & 0xff, VAR26.VAR18, VAR18);
                VAR37 = FUN11(VAR4);
                switch (VAR26.VAR23)
                {
                case FUN12('', '', '', ''):
                {
                    int VAR38, VAR39;
                    FUN4(VAR4);
                    VAR39 = FUN13(VAR4, &VAR38);
                    if (VAR38 == 0x03)
                    {
                        FUN6(VAR4);
                        FUN3(VAR4);
                        VAR39 = FUN13(VAR4, &VAR38);
                        if (VAR38 != 0x04)
                            goto VAR40;
                        FUN3(VAR4);
                        FUN4(VAR4);
                        FUN4(VAR4);
                        FUN4(VAR4);
                        VAR39 = FUN14(VAR4, &VAR38);
                        if (VAR38 != 0x05)
                            goto VAR40;
                        FUN9("", VAR39);
                        VAR12->VAR41 = FUN15(VAR39);
                        if (VAR12->VAR41)
                        {
                            FUN10(VAR4, VAR12->VAR41, VAR39);
                            VAR12->VAR42 = VAR39;
                        }
                    }
                }
                break;
                default:
                    break;
                }
            VAR40:
                FUN9("", VAR5.VAR18, FUN11(VAR4) - VAR37);
                if (VAR5.VAR18 > 8)
                {
                    FUN16(VAR4, (VAR5.VAR18 - 8) - ((FUN11(VAR4) - VAR37)));
                    VAR18 -= VAR5.VAR18 - 8;
                }
            }
            if (VAR18 > 0)
            {
                FUN16(VAR4, VAR18);
            }
            VAR26.VAR18 = VAR18;
            FUN17(VAR2, VAR4, VAR26);
        }
        else
        {
            FUN6(VAR4);
            FUN6(VAR4);
            FUN4(VAR4);
            VAR7->VAR21.VAR43 = FUN6(VAR4);
            VAR7->VAR21.VAR33 = FUN6(VAR4);
            VAR7->VAR21.VAR27 = FUN7(VAR44, VAR16);
            FUN6(VAR4);
            FUN6(VAR4);
            VAR7->VAR21.VAR45 = ((FUN4(VAR4) >> 16));
            switch (VAR7->VAR21.VAR27)
            {
            case VAR46:
                if (VAR7->VAR21.VAR33 == 8)
                    VAR7->VAR21.VAR27 = VAR47;
            case VAR48:
                VAR7->VAR21.VAR49 = VAR7->VAR21.VAR45 * 8;
                break;
            default:;
            }
            FUN4(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            FUN4(VAR4);
            {
                MOV_atom_t VAR26 = {VAR16, FUN11(VAR4), VAR18 - (16 + 20 + 16 + 8)};
                FUN17(VAR2, VAR4, VAR26);
            }
        }
    }
    return 0;
}