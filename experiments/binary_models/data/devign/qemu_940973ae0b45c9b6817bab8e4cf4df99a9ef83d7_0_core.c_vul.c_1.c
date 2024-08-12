static bool FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    int VAR4;
    if (VAR2->VAR5 != 0xc2 || VAR2->VAR6 != 0x4f)
    {
        goto VAR7;
    }
    if (!VAR2->VAR8 && VAR2->VAR9 != VAR10)
    {
        goto VAR7;
    }
    switch (VAR2->VAR9)
    {
    case VAR11:
        VAR2->VAR8 = 0;
        return true;
    case VAR10:
        VAR2->VAR8 = 1;
        return true;
    case VAR12:
        switch (VAR2->VAR13)
        {
        case 0x00:
            VAR2->VAR14 = 0;
            break;
        case 0xf1:
            VAR2->VAR14 = 1;
            break;
        default:
            goto VAR7;
        }
        return true;
    case VAR15:
        if (!VAR2->VAR16)
        {
            VAR2->VAR5 = 0xc2;
            VAR2->VAR6 = 0x4f;
        }
        else
        {
            VAR2->VAR5 = 0x2c;
            VAR2->VAR6 = 0xf4;
        }
        return true;
    case VAR17:
        memset(VAR2->VAR18, 0, 0x200);
        VAR2->VAR18[0] = 0x01;
        for (VAR4 = 0; VAR4 < FUN2(VAR19); VAR4++)
        {
            VAR2->VAR18[2 + 0 + (VAR4 * 12)] = VAR19[VAR4][0];
            VAR2->VAR18[2 + 1 + (VAR4 * 12)] = VAR19[VAR4][11];
        }
        for (VAR4 = 0; VAR4 < 511; VAR4++)
        {
            VAR2->VAR18[511] += VAR2->VAR18[VAR4];
        }
        VAR2->VAR18[511] = 0x100 - VAR2->VAR18[511];
        VAR2->VAR20 = VAR21 | VAR22;
        FUN3(VAR2, VAR2->VAR18, 0x200, VAR23);
        FUN4(VAR2->VAR24);
        return false;
    case VAR25:
        memset(VAR2->VAR18, 0, 0x200);
        VAR2->VAR18[0] = 0x01;
        for (VAR4 = 0; VAR4 < FUN2(VAR19); VAR4++)
        {
            int VAR26;
            for (VAR26 = 0; VAR26 < 11; VAR26++)
            {
                VAR2->VAR18[2 + VAR26 + (VAR4 * 12)] = VAR19[VAR4][VAR26];
            }
        }
        VAR2->VAR18[362] = 0x02 | (VAR2->VAR14 ? 0x80 : 0x00);
        if (VAR2->VAR27 == 0)
        {
            VAR2->VAR18[363] = 0;
        }
        else
        {
            VAR2->VAR18[363] = VAR2->VAR28[3 + (VAR2->VAR27 - 1) * 24];
        }
        VAR2->VAR18[364] = 0x20;
        VAR2->VAR18[365] = 0x01;
        VAR2->VAR18[367] = (1 << 4 | 1 << 3 | 1);
        VAR2->VAR18[368] = 0x03;
        VAR2->VAR18[369] = 0x00;
        VAR2->VAR18[370] = 0x01;
        VAR2->VAR18[372] = 0x02;
        VAR2->VAR18[373] = 0x36;
        VAR2->VAR18[374] = 0x01;
        for (VAR4 = 0; VAR4 < 511; VAR4++)
        {
            VAR2->VAR18[511] += VAR2->VAR18[VAR4];
        }
        VAR2->VAR18[511] = 0x100 - VAR2->VAR18[511];
        VAR2->VAR20 = VAR21 | VAR22;
        FUN3(VAR2, VAR2->VAR18, 0x200, VAR23);
        FUN4(VAR2->VAR24);
        return false;
    case VAR29:
        switch (VAR2->VAR13)
        {
        case 0x01:
            memset(VAR2->VAR18, 0, 0x200);
            VAR2->VAR18[0] = 0x01;
            VAR2->VAR18[1] = 0x00;
            VAR2->VAR18[452] = VAR2->VAR16 & 0xff;
            VAR2->VAR18[453] = (VAR2->VAR16 & 0xff00) >> 8;
            for (VAR4 = 0; VAR4 < 511; VAR4++)
            {
                VAR2->VAR18[511] += VAR2->VAR18[VAR4];
            }
            VAR2->VAR18[511] = 0x100 - VAR2->VAR18[511];
            break;
        case 0x06:
            memset(VAR2->VAR18, 0, 0x200);
            VAR2->VAR18[0] = 0x01;
            if (VAR2->VAR27 == 0)
            {
                VAR2->VAR18[508] = 0;
            }
            else
            {
                VAR2->VAR18[508] = VAR2->VAR27;
                for (VAR4 = 2; VAR4 < 506; VAR4++)
                {
                    VAR2->VAR18[VAR4] = VAR2->VAR28[VAR4];
                }
            }
            for (VAR4 = 0; VAR4 < 511; VAR4++)
            {
                VAR2->VAR18[511] += VAR2->VAR18[VAR4];
            }
            VAR2->VAR18[511] = 0x100 - VAR2->VAR18[511];
            break;
        default:
            goto VAR7;
        }
        VAR2->VAR20 = VAR21 | VAR22;
        FUN3(VAR2, VAR2->VAR18, 0x200, VAR23);
        FUN4(VAR2->VAR24);
        return false;
    case VAR30:
        switch (VAR2->VAR13)
        {
        case 0:
        case 1:
        case 2:
            VAR2->VAR27++;
            if (VAR2->VAR27 > 21)
            {
                VAR2->VAR27 = 0;
            }
            VAR4 = 2 + (VAR2->VAR27 - 1) * 24;
            VAR2->VAR28[VAR4] = VAR2->VAR13;
            VAR2->VAR28[VAR4 + 1] = 0x00;
            VAR2->VAR28[VAR4 + 2] = 0x34;
            VAR2->VAR28[VAR4 + 3] = 0x12;
            break;
        default:
            goto VAR7;
        }
        return true;
    }
VAR7:
    FUN5(VAR2);
    return true;
}