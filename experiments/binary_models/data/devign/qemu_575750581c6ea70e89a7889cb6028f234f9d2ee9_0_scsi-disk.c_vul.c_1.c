static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR3->VAR10;
    uint64_t VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    int VAR14;
    int VAR15;
    uint8_t VAR16;
    VAR5 *VAR17;
    VAR18 *VAR19;
    VAR16 = VAR6[0];
    VAR19 = FUN2(VAR9, VAR4);
    if (VAR19)
    {
        FUN3("", VAR4);
        FUN4(VAR3, VAR4);
    }
    VAR19 = FUN5(VAR9, VAR4);
    VAR17 = VAR19->VAR20;
    VAR15 = 0;
    FUN6("", VAR7, VAR4, VAR6[0]);
    switch (VAR16 >> 5)
    {
    case 0:
        VAR12 = VAR6[3] | (VAR6[2] << 8) | ((VAR6[1] & 0x1f) << 16);
        VAR13 = VAR6[4];
        VAR14 = 6;
        break;
    case 1:
    case 2:
        VAR12 = VAR6[5] | (VAR6[4] << 8) | (VAR6[3] << 16) | (VAR6[2] << 24);
        VAR13 = VAR6[8] | (VAR6[7] << 8);
        VAR14 = 10;
        break;
    case 4:
        VAR12 = VAR6[5] | (VAR6[4] << 8) | (VAR6[3] << 16) | (VAR6[2] << 24);
        VAR13 = VAR6[13] | (VAR6[12] << 8) | (VAR6[11] << 16) | (VAR6[10] << 24);
        VAR14 = 16;
        break;
    case 5:
        VAR12 = VAR6[5] | (VAR6[4] << 8) | (VAR6[3] << 16) | (VAR6[2] << 24);
        VAR13 = VAR6[9] | (VAR6[8] << 8) | (VAR6[7] << 16) | (VAR6[6] << 24);
        VAR14 = 12;
        break;
    default:
        FUN3("", VAR16);
        goto VAR21;
    }
    {
        int VAR22;
        for (VAR22 = 1; VAR22 < VAR14; VAR22++)
        {
            FUN7("", VAR6[VAR22]);
        }
        FUN7("");
    }
    if (VAR7 || VAR6[1] >> 5)
    {
        FUN6("", VAR7 ? VAR7 : VAR6[1] >> 5);
        if (VAR16 != 0x03 && VAR16 != 0x12)
            goto VAR21;
    }
    switch (VAR16)
    {
    case 0x0:
        FUN6("");
        break;
    case 0x03:
        FUN6("", VAR13);
        if (VAR13 < 4)
            goto VAR21;
        memset(VAR17, 0, 4);
        VAR17[0] = 0xf0;
        VAR17[1] = 0;
        VAR17[2] = VAR9->VAR23;
        VAR19->VAR24 = 4;
        break;
    case 0x12:
        FUN6("", VAR13);
        if (VAR6[1] & 0x2)
        {
            FUN3("");
            goto VAR21;
        }
        else if (VAR6[1] & 0x1)
        {
            uint8_t VAR25 = VAR6[2];
            if (VAR13 < 4)
            {
                FUN3(""
                     "",
                     VAR25, VAR13);
                goto VAR21;
            }
            switch (VAR25)
            {
            case 0x00:
            {
                FUN6(""
                        "",
                        VAR13);
                VAR19->VAR24 = 0;
                if (FUN8(VAR9->VAR26) == VAR27)
                {
                    VAR17[VAR19->VAR24++] = 5;
                }
                else
                {
                    VAR17[VAR19->VAR24++] = 0;
                }
                VAR17[VAR19->VAR24++] = 0x00;
                VAR17[VAR19->VAR24++] = 0x00;
                VAR17[VAR19->VAR24++] = 3;
                VAR17[VAR19->VAR24++] = 0x00;
                VAR17[VAR19->VAR24++] = 0x80;
                VAR17[VAR19->VAR24++] = 0x83;
            }
            break;
            case 0x80:
            {
                if (VAR13 < 4)
                {
                    FUN3(""
                         "",
                         VAR13, 4);
                    goto VAR21;
                }
                FUN6("", VAR13);
                VAR19->VAR24 = 0;
                if (FUN8(VAR9->VAR26) == VAR27)
                {
                    VAR17[VAR19->VAR24++] = 5;
                }
                else
                {
                    VAR17[VAR19->VAR24++] = 0;
                }
                VAR17[VAR19->VAR24++] = 0x80;
                VAR17[VAR19->VAR24++] = 0x00;
                VAR17[VAR19->VAR24++] = 0x01;
                VAR17[VAR19->VAR24++] = '';
            }
            break;
            case 0x83:
            {
                int VAR28 = 255 - 8;
                int VAR29 = strlen(FUN9(VAR9->VAR26));
                if (VAR29 > VAR28)
                    VAR29 = VAR28;
                FUN6(""
                        "",
                        VAR13);
                VAR19->VAR24 = 0;
                if (FUN8(VAR9->VAR26) == VAR27)
                {
                    VAR17[VAR19->VAR24++] = 5;
                }
                else
                {
                    VAR17[VAR19->VAR24++] = 0;
                }
                VAR17[VAR19->VAR24++] = 0x83;
                VAR17[VAR19->VAR24++] = 0x00;
                VAR17[VAR19->VAR24++] = 3 + VAR29;
                VAR17[VAR19->VAR24++] = 0x2;
                VAR17[VAR19->VAR24++] = 0;
                VAR17[VAR19->VAR24++] = 0;
                VAR17[VAR19->VAR24++] = VAR29;
                memcpy(&VAR17[VAR19->VAR24], FUN9(VAR9->VAR26), VAR29);
                VAR19->VAR24 += VAR29;
            }
            break;
            default:
                FUN3(""
                     "",
                     VAR25, VAR13);
                goto VAR21;
            }
            break;
        }
        else
        {
            if (VAR6[2] != 0)
            {
                FUN3(""
                     "",
                     VAR6[2]);
                goto VAR21;
            }
            if (VAR13 < 5)
            {
                FUN3(""
                     "",
                     VAR13);
                goto VAR21;
            }
            if (VAR13 < 36)
            {
                FUN3(""
                     "",
                     VAR13);
            }
        }
        memset(VAR17, 0, 36);
        if (VAR7 || VAR6[1] >> 5)
        {
            VAR17[0] = 0x7f;
        }
        else if (FUN8(VAR9->VAR26) == VAR27)
        {
            VAR17[0] = 5;
            VAR17[1] = 0x80;
            memcpy(&VAR17[16], "", 16);
        }
        else
        {
            VAR17[0] = 0;
            memcpy(&VAR17[16], "", 16);
        }
        memcpy(&VAR17[8], "", 8);
        memcpy(&VAR17[32], VAR30, 4);
        VAR17[2] = 3;
        VAR17[3] = 2;
        VAR17[4] = 31;
        VAR17[7] = 0x10 | (VAR9->VAR31 ? 0x02 : 0);
        VAR19->VAR24 = 36;
        break;
    case 0x16:
        FUN6("");
        if (VAR6[1] & 1)
            goto VAR21;
        break;
    case 0x17:
        FUN6("");
        if (VAR6[1] & 1)
            goto VAR21;
        break;
    case 0x1a:
    case 0x5a:
    {
        VAR5 *VAR32;
        int VAR33;
        VAR33 = VAR6[2] & 0x3f;
        FUN6("", VAR33, VAR13);
        VAR32 = VAR17;
        memset(VAR32, 0, 4);
        VAR17[1] = 0;
        VAR17[3] = 0;
        if (FUN8(VAR9->VAR26) == VAR27)
        {
            VAR17[2] = 0x80;
        }
        VAR32 += 4;
        if (VAR33 == 4)
        {
            int VAR34, VAR35, VAR36;
            VAR32[0] = 4;
            VAR32[1] = 0x16;
            FUN10(VAR9->VAR26, &VAR34, &VAR35, &VAR36);
            VAR32[2] = (VAR34 >> 16) & 0xff;
            VAR32[3] = (VAR34 >> 8) & 0xff;
            VAR32[4] = VAR34 & 0xff;
            VAR32[5] = VAR35 & 0xff;
            VAR32[6] = (VAR34 >> 16) & 0xff;
            VAR32[7] = (VAR34 >> 8) & 0xff;
            VAR32[8] = VAR34 & 0xff;
            VAR32[9] = (VAR34 >> 16) & 0xff;
            VAR32[10] = (VAR34 >> 8) & 0xff;
            VAR32[11] = VAR34 & 0xff;
            VAR32[12] = 0;
            VAR32[13] = 200;
            VAR32[14] = 0xff;
            VAR32[15] = 0xff;
            VAR32[16] = 0xff;
            VAR32[20] = (5400 >> 8) & 0xff;
            VAR32[21] = 5400 & 0xff;
            VAR32 += 0x16;
        }
        else if (VAR33 == 5)
        {
            int VAR34, VAR35, VAR36;
            VAR32[0] = 5;
            VAR32[1] = 0x1e;
            VAR32[2] = 5000 >> 8;
            VAR32[3] = 5000 & 0xff;
            FUN10(VAR9->VAR26, &VAR34, &VAR35, &VAR36);
            VAR32[4] = VAR35 & 0xff;
            VAR32[5] = VAR36 & 0xff;
            VAR32[6] = VAR9->VAR37 * 2;
            VAR32[8] = (VAR34 >> 8) & 0xff;
            VAR32[9] = VAR34 & 0xff;
            VAR32[10] = (VAR34 >> 8) & 0xff;
            VAR32[11] = VAR34 & 0xff;
            VAR32[12] = (VAR34 >> 8) & 0xff;
            VAR32[13] = VAR34 & 0xff;
            VAR32[14] = 0;
            VAR32[15] = 1;
            VAR32[16] = 1;
            VAR32[17] = 0;
            VAR32[18] = 1;
            VAR32[19] = 1;
            VAR32[20] = 1;
            VAR32[28] = (5400 >> 8) & 0xff;
            VAR32[29] = 5400 & 0xff;
            VAR32 += 0x1e;
        }
        else if ((VAR33 == 8 || VAR33 == 0x3f))
        {
            memset(VAR32, 0, 20);
            VAR32[0] = 8;
            VAR32[1] = 0x12;
            VAR32[2] = 4;
            VAR32 += 20;
        }
        if ((VAR33 == 0x3f || VAR33 == 0x2a) && (FUN8(VAR9->VAR26) == VAR27))
        {
            VAR32[0] = 0x2a;
            VAR32[1] = 0x14;
            VAR32[2] = 3;
            VAR32[3] = 0;
            VAR32[4] = 0x7f;
            VAR32[5] = 0xff;
            VAR32[6] = 0x2d | (FUN11(VAR9->VAR26) ? 2 : 0);
            VAR32[7] = 0;
            VAR32[8] = (50 * 176) >> 8;
            VAR32[9] = (50 * 176) & 0xff;
            VAR32[10] = 0 >> 8;
            VAR32[11] = 0 & 0xff;
            VAR32[12] = 2048 >> 8;
            VAR32[13] = 2048 & 0xff;
            VAR32[14] = (16 * 176) >> 8;
            VAR32[15] = (16 * 176) & 0xff;
            VAR32[18] = (16 * 176) >> 8;
            VAR32[19] = (16 * 176) & 0xff;
            VAR32[20] = (16 * 176) >> 8;
            VAR32[21] = (16 * 176) & 0xff;
            VAR32 += 22;
        }
        VAR19->VAR24 = VAR32 - VAR17;
        VAR17[0] = VAR19->VAR24 - 4;
        if (VAR19->VAR24 > VAR13)
            VAR19->VAR24 = VAR13;
    }
    break;
    case 0x1b:
        FUN6("");
        break;
    case 0x1e:
        FUN6("", VAR6[4] & 3);
        FUN12(VAR9->VAR26, VAR6[4] & 1);
        break;
    case 0x25:
        FUN6("");
        memset(VAR17, 0, 8);
        FUN13(VAR9->VAR26, &VAR11);
        if (VAR11)
        {
            VAR11--;
            VAR17[0] = (VAR11 >> 24) & 0xff;
            VAR17[1] = (VAR11 >> 16) & 0xff;
            VAR17[2] = (VAR11 >> 8) & 0xff;
            VAR17[3] = VAR11 & 0xff;
            VAR17[4] = 0;
            VAR17[5] = 0;
            VAR17[6] = VAR9->VAR37 * 2;
            VAR17[7] = 0;
            VAR19->VAR24 = 8;
        }
        else
        {
            FUN14(VAR19, VAR38, VAR39);
            return 0;
        }
        break;
    case 0x08:
    case 0x28:
        FUN6("", VAR12, VAR13);
        VAR19->VAR40 = VAR12 * VAR9->VAR37;
        VAR19->VAR41 = VAR13 * VAR9->VAR37;
        break;
    case 0x0a:
    case 0x2a:
        FUN6("", VAR12, VAR13);
        VAR19->VAR40 = VAR12 * VAR9->VAR37;
        VAR19->VAR41 = VAR13 * VAR9->VAR37;
        VAR15 = 1;
        break;
    case 0x35:
        FUN6("", VAR12, VAR13);
        FUN15(VAR9->VAR26);
        break;
    case 0x43:
    {
        int VAR42, VAR43, VAR44, VAR45;
        VAR44 = VAR6[1] & 2;
        VAR43 = VAR6[2] & 0xf;
        VAR42 = VAR6[6];
        FUN13(VAR9->VAR26, &VAR11);
        FUN6("", VAR42, VAR43, VAR44 >> 1);
        switch (VAR43)
        {
        case 0:
            VAR45 = FUN16(VAR11, VAR17, VAR44, VAR42);
            break;
        case 1:
            VAR45 = 12;
            memset(VAR17, 0, 12);
            VAR17[1] = 0x0a;
            VAR17[2] = 0x01;
            VAR17[3] = 0x01;
            break;
        case 2:
            VAR45 = FUN17(VAR11, VAR17, VAR44, VAR42);
            break;
        default:
            goto VAR46;
        }
        if (VAR45 > 0)
        {
            if (VAR13 > VAR45)
                VAR13 = VAR45;
            VAR19->VAR24 = VAR13;
            break;
        }
    VAR46:
        FUN6("");
        goto VAR21;
    }
    case 0x46:
        FUN6("", VAR6[1] & 3, VAR13);
        memset(VAR17, 0, 8);
        VAR17[7] = 8;
        VAR19->VAR24 = 8;
        break;
    case 0x56:
        FUN6("");
        if (VAR6[1] & 3)
            goto VAR21;
        break;
    case 0x57:
        FUN6("");
        if (VAR6[1] & 3)
            goto VAR21;
        break;
    case 0xa0:
        FUN6("", VAR13);
        if (VAR13 < 16)
            goto VAR21;
        memset(VAR17, 0, 16);
        VAR17[3] = 8;
        VAR19->VAR24 = 16;
        break;
    case 0x2f:
        FUN6("", VAR12, VAR13);
        break;
    default:
        FUN6("", VAR6[0]);
    VAR21:
        FUN14(VAR19, VAR38, VAR47);
        return 0;
    }
    if (VAR19->VAR41 == 0 && VAR19->VAR24 == 0)
    {
        FUN14(VAR19, VAR48, VAR49);
    }
    VAR13 = VAR19->VAR41 * 512 + VAR19->VAR24;
    if (VAR15)
    {
        return -VAR13;
    }
    else
    {
        if (!VAR19->VAR41)
            VAR19->VAR41 = -1;
        return VAR13;
    }
}