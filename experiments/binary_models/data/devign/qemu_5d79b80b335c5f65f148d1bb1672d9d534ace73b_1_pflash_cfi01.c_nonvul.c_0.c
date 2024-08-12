static void FUN1(VAR1 *VAR2, hwaddr VAR3, uint32_t VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8;
    uint8_t VAR9;
    VAR9 = VAR4;
    FUN2("" VAR10 "", VAR11, VAR3, VAR4, VAR5, VAR2->VAR12);
    if (!VAR2->VAR12)
    {
        FUN3(&VAR2->VAR13, false);
    }
    switch (VAR2->VAR12)
    {
    case 0:
        switch (VAR9)
        {
        case 0x00:
            goto VAR14;
        case 0x10:
        case 0x40:
            FUN2("", VAR11);
            break;
        case 0x20:
            VAR8 = VAR2->VAR15;
            VAR3 &= ~(VAR2->VAR16 - 1);
            FUN2("" VAR10 "", VAR11, VAR3, (unsigned)VAR2->VAR16);
            if (!VAR2->VAR17)
            {
                memset(VAR8 + VAR3, 0xff, VAR2->VAR16);
                FUN4(VAR2, VAR3, VAR2->VAR16);
            }
            else
            {
                VAR2->VAR18 |= 0x20;
            }
            VAR2->VAR18 |= 0x80;
            break;
        case 0x50:
            FUN2("", VAR11);
            VAR2->VAR18 = 0x0;
            goto VAR14;
        case 0x60:
            FUN2("", VAR11);
            break;
        case 0x70:
            FUN2("", VAR11);
            VAR2->VAR9 = VAR9;
            return;
        case 0x90:
            FUN2("", VAR11);
            VAR2->VAR9 = VAR9;
            return;
        case 0x98:
            FUN2("", VAR11);
            break;
        case 0xe8:
            FUN2("", VAR11);
            VAR2->VAR18 |= 0x80;
            break;
        case 0xf0:
            FUN2("", VAR11);
            goto VAR14;
        case 0xff:
            FUN2("", VAR11);
            goto VAR14;
        default:
            goto VAR19;
        }
        VAR2->VAR12++;
        VAR2->VAR9 = VAR9;
        break;
    case 1:
        switch (VAR2->VAR9)
        {
        case 0x10:
        case 0x40:
            FUN2("", VAR11);
            if (!VAR2->VAR17)
            {
                FUN5(VAR2, VAR3, VAR4, VAR5, VAR6);
                FUN4(VAR2, VAR3, VAR5);
            }
            else
            {
                VAR2->VAR18 |= 0x10;
            }
            VAR2->VAR18 |= 0x80;
            VAR2->VAR12 = 0;
            break;
        case 0x20:
        case 0x28:
            if (VAR9 == 0xd0)
            {
                VAR2->VAR12 = 0;
                VAR2->VAR18 |= 0x80;
            }
            else if (VAR9 == 0xff)
            {
                goto VAR14;
            }
            else
                goto VAR19;
            break;
        case 0xe8:
            FUN2("", VAR11, VAR4);
            VAR2->VAR20 = VAR4;
            VAR2->VAR12++;
            break;
        case 0x60:
            if (VAR9 == 0xd0)
            {
                VAR2->VAR12 = 0;
                VAR2->VAR18 |= 0x80;
            }
            else if (VAR9 == 0x01)
            {
                VAR2->VAR12 = 0;
                VAR2->VAR18 |= 0x80;
            }
            else if (VAR9 == 0xff)
            {
                goto VAR14;
            }
            else
            {
                FUN2("", VAR11);
                goto VAR14;
            }
            break;
        case 0x98:
            if (VAR9 == 0xff)
            {
                goto VAR14;
            }
            else
            {
                FUN2("", VAR11);
            }
            break;
        default:
            goto VAR19;
        }
        break;
    case 2:
        switch (VAR2->VAR9)
        {
        case 0xe8:
            if (!VAR2->VAR17)
            {
                FUN5(VAR2, VAR3, VAR4, VAR5, VAR6);
            }
            else
            {
                VAR2->VAR18 |= 0x10;
            }
            VAR2->VAR18 |= 0x80;
            if (!VAR2->VAR20)
            {
                hwaddr VAR21 = VAR2->VAR22 - 1;
                VAR21 = ~VAR21;
                FUN2("", VAR11);
                VAR2->VAR12++;
                if (!VAR2->VAR17)
                {
                    FUN4(VAR2, VAR3 & VAR21, VAR2->VAR22);
                }
                else
                {
                    VAR2->VAR18 |= 0x10;
                }
            }
            VAR2->VAR20--;
            break;
        default:
            goto VAR19;
        }
        break;
    case 3:
        switch (VAR2->VAR9)
        {
        case 0xe8:
            if (VAR9 == 0xd0)
            {
                VAR2->VAR12 = 0;
                VAR2->VAR18 |= 0x80;
            }
            else
            {
                FUN2(""write VAR23\"", VAR11);
                FUN6("");
                goto VAR14;
            }
            break;
        default:
            goto VAR19;
        }
        break;
    default:
        FUN2("", VAR11);
        goto VAR14;
    }
    return;
VAR19:
    FUN7(VAR24, ""
                             "" VAR10 ""
                             "",
                  VAR11, VAR3, VAR2->VAR12, VAR2->VAR9, VAR4);
VAR14:
    FUN3(&VAR2->VAR13, true);
    VAR2->VAR12 = 0;
    VAR2->VAR9 = 0;
}