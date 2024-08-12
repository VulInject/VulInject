static void FUN1(VAR1 *VAR2, target_ulong VAR3, uint32_t VAR4, int VAR5)
{
    target_ulong VAR6;
    VAR7 *VAR8;
    uint8_t VAR9;
    if (VAR2->VAR10 == 0)
        VAR3 -= (VAR11)(long)VAR2->VAR12;
    else
        VAR3 -= VAR2->VAR13;
    VAR9 = VAR4;
    FUN2("" VAR14 "", VAR15, VAR3, VAR4, VAR5);
    if (VAR2->VAR9 != 0xA0 && VAR9 == 0xF0)
    {
        FUN2("", VAR15, VAR2->VAR9, VAR9);
        goto VAR16;
    }
    FUN3(VAR2->VAR13, VAR2->VAR17, VAR2->VAR18);
    VAR6 = VAR3 & (VAR2->VAR19 - 1);
    if (VAR2->VAR5 == 2)
        VAR6 = VAR6 >> 1;
    else if (VAR2->VAR5 == 4)
        VAR6 = VAR6 >> 2;
    switch (VAR2->VAR10)
    {
    case 0:
    VAR20:
        if (VAR6 == 0x55 && VAR9 == 0x98)
        {
        VAR21:
            VAR2->VAR10 = 7;
            VAR2->VAR9 = 0x98;
            return;
        }
        if (VAR6 != 0x555 || VAR9 != 0xAA)
        {
            FUN2("" VAR14 "", VAR15, VAR6, VAR9, 0x555);
            goto VAR16;
        }
        FUN2("", VAR15);
        break;
    case 1:
    VAR22:
        if (VAR6 != 0x2AA || VAR9 != 0x55)
        {
            FUN2("" VAR14 "", VAR15, VAR6, VAR9);
            goto VAR16;
        }
        FUN2("", VAR15);
        break;
    case 2:
        if (!VAR2->VAR23 && VAR6 != 0x555)
        {
            FUN2("" VAR14 "", VAR15, VAR6, VAR9);
            goto VAR16;
        }
        switch (VAR9)
        {
        case 0x20:
            VAR2->VAR23 = 1;
            goto VAR24;
        case 0x80:
        case 0x90:
        case 0xA0:
            VAR2->VAR9 = VAR9;
            FUN2("", VAR15, VAR9);
            break;
        default:
            FUN2("", VAR15, VAR9);
            goto VAR16;
        }
        break;
    case 3:
        switch (VAR2->VAR9)
        {
        case 0x80:
            goto VAR20;
        case 0xA0:
            FUN2("" VAR14 "", VAR15, VAR3, VAR4, VAR5);
            VAR8 = VAR2->VAR12;
            switch (VAR5)
            {
            case 1:
                VAR8[VAR3] &= VAR4;
                FUN4(VAR2, VAR3, 1);
                break;
            case 2:
                VAR8[VAR3] &= VAR4 >> 8;
                VAR8[VAR3 + 1] &= VAR4;
                VAR8[VAR3] &= VAR4;
                VAR8[VAR3 + 1] &= VAR4 >> 8;
                FUN4(VAR2, VAR3, 2);
                break;
            case 4:
                VAR8[VAR3] &= VAR4 >> 24;
                VAR8[VAR3 + 1] &= VAR4 >> 16;
                VAR8[VAR3 + 2] &= VAR4 >> 8;
                VAR8[VAR3 + 3] &= VAR4;
                VAR8[VAR3] &= VAR4;
                VAR8[VAR3 + 1] &= VAR4 >> 8;
                VAR8[VAR3 + 2] &= VAR4 >> 16;
                VAR8[VAR3 + 3] &= VAR4 >> 24;
                FUN4(VAR2, VAR3, 4);
                break;
            }
            VAR2->VAR25 = 0x00 | ~(VAR4 & 0x80);
            if (VAR2->VAR23)
                goto VAR24;
            goto VAR16;
        case 0x90:
            if (VAR2->VAR23 && VAR9 == 0x00)
            {
                goto VAR16;
            }
            if (VAR6 == 0x55 && VAR9 == 0x98)
                goto VAR21;
        default:
            FUN2("", VAR15, VAR2->VAR9);
            goto VAR16;
        }
    case 4:
        switch (VAR2->VAR9)
        {
        case 0xA0:
            return;
        case 0x80:
            goto VAR22;
        default:
            FUN2("", VAR15, VAR2->VAR9);
            goto VAR16;
        }
        break;
    case 5:
        switch (VAR9)
        {
        case 0x10:
            if (VAR6 != 0x555)
            {
                FUN2("" VAR14 "", VAR15, VAR3);
                goto VAR16;
            }
            FUN2("", VAR15);
            memset(VAR2->VAR12, 0xFF, VAR2->VAR17);
            VAR2->VAR25 = 0x00;
            FUN4(VAR2, 0, VAR2->VAR17);
            FUN5(VAR2->VAR26, FUN6(VAR27) + (VAR28 * 5));
            break;
        case 0x30:
            VAR8 = VAR2->VAR12;
            VAR3 &= ~(VAR2->VAR19 - 1);
            FUN2("" VAR14 "", VAR15, VAR3);
            memset(VAR8 + VAR3, 0xFF, VAR2->VAR19);
            FUN4(VAR2, VAR3, VAR2->VAR19);
            VAR2->VAR25 = 0x00;
            FUN5(VAR2->VAR26, FUN6(VAR27) + (VAR28 / 2));
            break;
        default:
            FUN2("", VAR15, VAR9);
            goto VAR16;
        }
        VAR2->VAR9 = VAR9;
        break;
    case 6:
        switch (VAR2->VAR9)
        {
        case 0x10:
            return;
        case 0x30:
            return;
        default:
            FUN2("", VAR15, VAR2->VAR9);
            goto VAR16;
        }
        break;
    case 7:
        FUN2("", VAR15);
        goto VAR16;
    default:
        FUN2("", VAR15);
        goto VAR16;
    }
    VAR2->VAR10++;
    return;
VAR16:
    if (VAR2->VAR10 != 0)
    {
        FUN3(VAR2->VAR13, VAR2->VAR17, VAR2->VAR29 | VAR30 | VAR2->VAR18);
    }
    VAR2->VAR23 = 0;
    VAR2->VAR10 = 0;
    VAR2->VAR9 = 0;
    return;
VAR24:
    VAR2->VAR10 = 2;
    VAR2->VAR9 = 0;
    return;
}