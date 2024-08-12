static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = NULL;
    uint8_t VAR10[255] = {0};
    int VAR11, VAR12 = 0;
    VAR13 *VAR14 = FUN2(VAR2->VAR15, "", NULL, 0);
    if (!VAR4->VAR16)
    {
        FUN3(VAR2, VAR17, "");
        return -1;
    }
    VAR6->VAR18 |= 0x00080000;
    for (VAR11 = 0; VAR11 < VAR2->VAR19; ++VAR11)
    {
        VAR20 *VAR21 = VAR2->VAR22[VAR11];
        VAR8 *VAR23 = FUN4(sizeof(*VAR23));
        if (!VAR23)
            return FUN5(VAR24);
        VAR21->VAR7 = VAR23;
        VAR23->VAR25 = FUN6(VAR26, VAR21->VAR27->VAR28);
        if (VAR21->VAR27->VAR29 == VAR30)
        {
            if (VAR21->VAR27->VAR28 != VAR31)
            {
                FUN3(VAR2, VAR17, "");
                return -1;
            }
            if (VAR21->VAR27->VAR32 != 48000)
            {
                FUN3(VAR2, VAR17, "");
                return -1;
            }
            if (VAR21->VAR27->VAR33 != 1)
            {
                FUN3(VAR2, VAR17, "");
                return -1;
            }
            VAR23->VAR34 = 2;
            VAR23->VAR32 = VAR21->VAR27->VAR32;
            FUN7(VAR21, 64, 1, VAR23->VAR32);
            VAR23->VAR35 = 16;
            VAR23->VAR36 = -2;
            VAR23->VAR37 = -2;
            VAR23->VAR38 = -2;
            VAR6->VAR39++;
            VAR6->VAR18 |= 0x04000000;
            VAR12 = '';
        }
        else if (VAR21->VAR27->VAR29 == VAR40)
        {
            if (VAR11 != 0)
            {
                FUN3(VAR2, VAR17, "");
                return -1;
            }
            if (VAR21->VAR27->VAR41 == 480 || VAR21->VAR27->VAR41 == 512)
            {
                VAR23->VAR36 = 5;
                VAR23->VAR32 = 60;
                VAR6->VAR18 |= 0x00000080;
                VAR6->VAR42 = (VAR43){1001, 60000};
            }
            else if (VAR21->VAR27->VAR41 == 576 || VAR21->VAR27->VAR41 == 608)
            {
                VAR23->VAR36 = 6;
                VAR23->VAR25++;
                VAR23->VAR32 = 50;
                VAR6->VAR18 |= 0x00000040;
                VAR6->VAR42 = (VAR43){1, 50};
            }
            else
            {
                FUN3(VAR2, VAR17, ""
                                        "");
                return -1;
            }
            if (!VAR14)
                VAR14 = FUN2(VAR21->VAR15, "", NULL, 0);
            FUN7(VAR21, 64, VAR6->VAR42.VAR44, VAR6->VAR42.VAR45);
            if (FUN8(VAR21) < 0)
                VAR23->VAR37 = -1;
            VAR23->VAR35 = VAR21->VAR27->VAR46;
            VAR23->VAR38 = 2;
            VAR9 = VAR23;
            switch (VAR21->VAR27->VAR28)
            {
            case VAR47:
                VAR23->VAR34 = 1;
                VAR6->VAR18 |= 0x00004000;
                VAR12 = '';
                break;
            case VAR48:
                VAR23->VAR34 = 9;
                VAR6->VAR49++;
                VAR12 = '';
                break;
            case VAR50:
                VAR23->VAR51 = -1;
                VAR23->VAR34 = 4;
                VAR6->VAR49++;
                VAR6->VAR18 |= 0x00008000;
                VAR12 = '';
                break;
            case VAR52:
                if (VAR21->VAR27->VAR53 == VAR54)
                {
                    VAR23->VAR25 += 2;
                    VAR23->VAR34 = 6;
                    VAR6->VAR18 |= 0x00002000;
                    VAR12 = '';
                }
                else
                {
                    VAR23->VAR34 = 5;
                    VAR6->VAR18 |= 0x00001000;
                    VAR12 = '';
                }
                break;
            default:
                FUN3(VAR2, VAR17, "");
                return -1;
            }
        }
        VAR23->VAR12 = VAR12 << 8 | ('' + VAR10[VAR12]++);
        VAR23->VAR55 = VAR2->VAR19 - VAR21->VAR56;
    }
    if (FUN9(VAR2, VAR57, (VAR43){1, 48000}) < 0)
        return -1;
    if (VAR14)
        FUN10(VAR2, &VAR6->VAR58, VAR14->VAR59, VAR9->VAR38);
    FUN11(&VAR6->VAR60, VAR9);
    VAR6->VAR18 |= 0x200000;
    FUN12(VAR2, 0);
    FUN13(VAR2);
    FUN14(VAR2);
    VAR6->VAR61 = 3;
    FUN15(VAR4);
    return 0;
}