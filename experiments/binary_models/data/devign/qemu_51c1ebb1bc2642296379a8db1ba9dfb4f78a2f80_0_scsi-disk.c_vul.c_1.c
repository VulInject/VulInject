VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, VAR5 *VAR6, int VAR7)
{
    int64_t VAR8;
    uint32_t VAR9;
    uint32_t VAR10;
    int VAR11;
    int VAR12;
    VAR3->VAR13 = VAR6[0];
    VAR3->VAR4 = VAR4;
    VAR3->VAR14 = 0;
    VAR3->VAR15 = 0;
    VAR3->VAR16 = 0;
    VAR12 = 0;
    FUN2("", VAR6[0]);
    switch (VAR3->VAR13 >> 5)
    {
    case 0:
        VAR9 = VAR6[3] | (VAR6[2] << 8) | ((VAR6[1] & 0x1f) << 16);
        VAR10 = VAR6[4];
        VAR11 = 6;
        break;
    case 1:
    case 2:
        VAR9 = VAR6[5] | (VAR6[4] << 8) | (VAR6[3] << 16) | (VAR6[2] << 24);
        VAR10 = VAR6[8] | (VAR6[7] << 8);
        VAR11 = 10;
        break;
    case 4:
        VAR9 = VAR6[5] | (VAR6[4] << 8) | (VAR6[3] << 16) | (VAR6[2] << 24);
        VAR10 = VAR6[13] | (VAR6[12] << 8) | (VAR6[11] << 16) | (VAR6[10] << 24);
        VAR11 = 16;
        break;
    case 5:
        VAR9 = VAR6[5] | (VAR6[4] << 8) | (VAR6[3] << 16) | (VAR6[2] << 24);
        VAR10 = VAR6[9] | (VAR6[8] << 8) | (VAR6[7] << 16) | (VAR6[6] << 24);
        VAR11 = 12;
        break;
    default:
        FUN3("", VAR3->VAR13);
        goto VAR17;
    }
    {
        int VAR18;
        for (VAR18 = 1; VAR18 < VAR11; VAR18++)
        {
            FUN4("", VAR6[VAR18]);
        }
        FUN4("");
    }
    if (VAR7 || VAR6[1] >> 5)
    {
        FUN2("", VAR7 ? VAR7 : VAR6[1] >> 5);
        goto VAR17;
    }
    switch (VAR3->VAR13)
    {
    case 0x0:
        FUN2("");
        break;
    case 0x03:
        FUN2("", VAR10);
        if (VAR10 < 4)
            goto VAR17;
        memset(VAR6, 0, 4);
        VAR3->VAR6[0] = 0xf0;
        VAR3->VAR6[1] = 0;
        VAR3->VAR6[2] = VAR3->VAR19;
        VAR3->VAR16 = 4;
        break;
    case 0x12:
        FUN2("", VAR10);
        if (VAR10 < 36)
        {
            FUN3("", VAR10);
        }
        memset(VAR3->VAR6, 0, 36);
        if (FUN5(VAR3->VAR20) == VAR21)
        {
            VAR3->VAR6[0] = 5;
            VAR3->VAR6[1] = 0x80;
            memcpy(&VAR3->VAR6[16], "", 16);
        }
        else
        {
            VAR3->VAR6[0] = 0;
            memcpy(&VAR3->VAR6[16], "", 16);
        }
        memcpy(&VAR3->VAR6[8], "", 8);
        memcpy(&VAR3->VAR6[32], VAR22, 4);
        VAR3->VAR6[2] = 3;
        VAR3->VAR6[3] = 2;
        VAR3->VAR6[4] = 32;
        VAR3->VAR16 = 36;
        break;
    case 0x16:
        FUN2("");
        if (VAR6[1] & 1)
            goto VAR17;
        break;
    case 0x17:
        FUN2("");
        if (VAR6[1] & 1)
            goto VAR17;
        break;
    case 0x1a:
    case 0x5a:
    {
        char *VAR23;
        int VAR24;
        VAR24 = VAR6[2] & 0x3f;
        FUN2("", VAR24, VAR10);
        VAR23 = VAR3->VAR6;
        memset(VAR23, 0, 4);
        VAR3->VAR6[1] = 0;
        VAR3->VAR6[3] = 0;
        if (FUN5(VAR3->VAR20) == VAR21)
        {
            VAR3->VAR6[2] = 0x80;
        }
        VAR23 += 4;
        if ((VAR24 == 8 || VAR24 == 0x3f))
        {
            VAR23[0] = 8;
            VAR23[1] = 0x12;
            VAR23[2] = 4;
            VAR23 += 19;
        }
        if ((VAR24 == 0x3f || VAR24 == 0x2a) && (FUN5(VAR3->VAR20) == VAR21))
        {
            VAR23[0] = 0x2a;
            VAR23[1] = 0x14;
            VAR23[2] = 3;
            VAR23[3] = 0;
            VAR23[4] = 0x7f;
            VAR23[5] = 0xff;
            VAR23[6] = 0x2d | (FUN6(VAR3->VAR20) ? 2 : 0);
            VAR23[7] = 0;
            VAR23[8] = (50 * 176) >> 8;
            VAR23[9] = (50 * 176) & 0xff;
            VAR23[10] = 0 >> 8;
            VAR23[11] = 0 & 0xff;
            VAR23[12] = 2048 >> 8;
            VAR23[13] = 2048 & 0xff;
            VAR23[14] = (16 * 176) >> 8;
            VAR23[15] = (16 * 176) & 0xff;
            VAR23[18] = (16 * 176) >> 8;
            VAR23[19] = (16 * 176) & 0xff;
            VAR23[20] = (16 * 176) >> 8;
            VAR23[21] = (16 * 176) & 0xff;
            VAR23 += 21;
        }
        VAR3->VAR16 = VAR23 - VAR3->VAR6;
        VAR3->VAR6[0] = VAR3->VAR16 - 4;
        if (VAR3->VAR16 > VAR10)
            VAR3->VAR16 = VAR10;
    }
    break;
    case 0x1b:
        FUN2("");
        break;
    case 0x1e:
        FUN2("", VAR6[4] & 3);
        FUN7(VAR3->VAR20, VAR6[4] & 1);
        break;
    case 0x25:
        FUN2("");
        memset(VAR3->VAR6, 0, 8);
        FUN8(VAR3->VAR20, &VAR8);
        VAR3->VAR6[0] = (VAR8 >> 24) & 0xff;
        VAR3->VAR6[1] = (VAR8 >> 16) & 0xff;
        VAR3->VAR6[2] = (VAR8 >> 8) & 0xff;
        VAR3->VAR6[3] = VAR8 & 0xff;
        VAR3->VAR6[4] = 0;
        VAR3->VAR6[5] = 0;
        VAR3->VAR6[6] = VAR3->VAR25 * 2;
        VAR3->VAR6[7] = 0;
        VAR3->VAR16 = 8;
        break;
    case 0x08:
    case 0x28:
        FUN2("", VAR9, VAR10);
        VAR3->VAR26 = VAR9 * VAR3->VAR25;
        VAR3->VAR14 = VAR10 * VAR3->VAR25;
        break;
    case 0x0a:
    case 0x2a:
        FUN2("", VAR9, VAR10);
        VAR3->VAR26 = VAR9 * VAR3->VAR25;
        VAR3->VAR14 = VAR10 * VAR3->VAR25;
        VAR12 = 1;
        break;
    case 0x35:
        FUN2("", VAR9, VAR10);
        FUN9(VAR3->VAR20);
        break;
    case 0x43:
    {
        int VAR27, VAR28, VAR29, VAR30;
        VAR29 = VAR6[1] & 2;
        VAR28 = VAR6[2] & 0xf;
        VAR27 = VAR6[6];
        FUN8(VAR3->VAR20, &VAR8);
        FUN2("", VAR27, VAR28, VAR29 >> 1);
        switch (VAR28)
        {
        case 0:
            VAR30 = FUN10(VAR8, VAR3->VAR6, VAR29, VAR27);
            break;
        case 1:
            VAR30 = 12;
            memset(VAR3->VAR6, 0, 12);
            VAR3->VAR6[1] = 0x0a;
            VAR3->VAR6[2] = 0x01;
            VAR3->VAR6[3] = 0x01;
            break;
        case 2:
            VAR30 = FUN11(VAR8, VAR3->VAR6, VAR29, VAR27);
            break;
        default:
            goto VAR31;
        }
        if (VAR30 > 0)
        {
            if (VAR10 > VAR30)
                VAR10 = VAR30;
            VAR3->VAR16 = VAR10;
            break;
        }
    VAR31:
        FUN2("");
        goto VAR17;
    }
    case 0x46:
        FUN2("", VAR6[1] & 3, VAR10);
        memset(VAR3->VAR6, 0, 8);
        VAR3->VAR6[7] = 8;
        VAR3->VAR16 = 8;
        break;
    case 0x56:
        FUN2("");
        if (VAR6[1] & 3)
            goto VAR17;
        break;
    case 0x57:
        FUN2("");
        if (VAR6[1] & 3)
            goto VAR17;
        break;
    case 0xa0:
        FUN2("", VAR10);
        if (VAR10 < 16)
            goto VAR17;
        memset(VAR3->VAR6, 0, 16);
        VAR3->VAR6[3] = 8;
        VAR3->VAR16 = 16;
        break;
    default:
        FUN2("", VAR6[0]);
    VAR17:
        FUN12(VAR3, VAR32);
        return 0;
    }
    if (VAR3->VAR14 == 0 && VAR3->VAR16 == 0)
    {
        FUN12(VAR3, VAR33);
    }
    VAR10 = VAR3->VAR14 * 512 + VAR3->VAR16;
    return VAR12 ? -VAR10 : VAR10;
}