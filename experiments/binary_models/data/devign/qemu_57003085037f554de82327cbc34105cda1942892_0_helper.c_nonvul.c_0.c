void FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR4 *VAR7, VAR4 *VAR8)
{
    if (VAR3 & 0x80000000)
    {
        if (VAR3 > VAR2->VAR9)
            VAR3 = VAR2->VAR10;
    }
    else
    {
        if (VAR3 > VAR2->VAR10)
            VAR3 = VAR2->VAR10;
    }
    switch (VAR3)
    {
    case 0:
        *VAR5 = VAR2->VAR10;
        *VAR6 = VAR2->VAR11;
        *VAR8 = VAR2->VAR12;
        *VAR7 = VAR2->VAR13;
        if (FUN2())
            FUN3(0, NULL, VAR6, VAR7, VAR8);
        break;
    case 1:
        *VAR5 = VAR2->VAR14;
        *VAR6 = (VAR2->VAR15 << 24) | 8 << 8;
        *VAR7 = VAR2->VAR16;
        *VAR8 = VAR2->VAR17;
        if (FUN2())
            *VAR7 |= (1 << 31);
        break;
    case 2:
        *VAR5 = 1;
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0x2c307d;
        break;
    case 4:
        switch (*VAR7)
        {
        case 0:
            *VAR5 = 0x0000121;
            *VAR6 = 0x1c0003f;
            *VAR7 = 0x000003f;
            *VAR8 = 0x0000001;
            break;
        case 1:
            *VAR5 = 0x0000122;
            *VAR6 = 0x1c0003f;
            *VAR7 = 0x000003f;
            *VAR8 = 0x0000001;
            break;
        case 2:
            *VAR5 = 0x0000143;
            *VAR6 = 0x3c0003f;
            *VAR7 = 0x0000fff;
            *VAR8 = 0x0000001;
            break;
        default:
            *VAR5 = 0;
            *VAR6 = 0;
            *VAR7 = 0;
            *VAR8 = 0;
            break;
        }
        break;
    case 5:
        *VAR5 = 0;
        *VAR6 = 0;
        *VAR7 = VAR18 | VAR19;
        *VAR8 = 0;
        break;
    case 6:
        *VAR5 = 0;
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0;
        break;
    case 9:
        *VAR5 = 0;
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0;
        break;
    case 0xA:
        *VAR5 = 0;
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0;
        break;
    case 0x80000000:
        *VAR5 = VAR2->VAR9;
        *VAR6 = VAR2->VAR11;
        *VAR8 = VAR2->VAR12;
        *VAR7 = VAR2->VAR13;
        break;
    case 0x80000001:
        *VAR5 = VAR2->VAR17;
        *VAR6 = 0;
        *VAR7 = VAR2->VAR20;
        *VAR8 = VAR2->VAR21;
        if (FUN2())
        {
            uint32_t VAR22, VAR23;
            FUN3(0x80000001, &VAR22, NULL, NULL, &VAR23);
            if ((VAR23 & 0x20000000) == 0)
                *VAR8 &= ~0x20000000;
            if ((VAR23 & 0x00000800) == 0)
                *VAR8 &= ~0x00000800;
            if ((VAR23 & 0x00100000) == 0)
                *VAR8 &= ~0x00100000;
            *VAR7 &= ~4UL;
            *VAR8 &= ~0xc0000000;
        }
        break;
    case 0x80000002:
    case 0x80000003:
    case 0x80000004:
        *VAR5 = VAR2->VAR24[(VAR3 - 0x80000002) * 4 + 0];
        *VAR6 = VAR2->VAR24[(VAR3 - 0x80000002) * 4 + 1];
        *VAR7 = VAR2->VAR24[(VAR3 - 0x80000002) * 4 + 2];
        *VAR8 = VAR2->VAR24[(VAR3 - 0x80000002) * 4 + 3];
        break;
    case 0x80000005:
        *VAR5 = 0x01ff01ff;
        *VAR6 = 0x01ff01ff;
        *VAR7 = 0x40020140;
        *VAR8 = 0x40020140;
        break;
    case 0x80000006:
        *VAR5 = 0;
        *VAR6 = 0x42004200;
        *VAR7 = 0x02008140;
        *VAR8 = 0;
        break;
    case 0x80000008:
        if (VAR2->VAR21 & VAR25)
        {
            *VAR5 = 0x00003020;
            *VAR5 = 0x00003028;
        }
        else
        {
            *VAR5 = 0x00000020;
            if (VAR2->VAR17 & VAR26)
                *VAR5 = 0x00000024;
            else
                *VAR5 = 0x00000020;
        }
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0;
        break;
    case 0x8000000A:
        *VAR5 = 0x00000001;
        *VAR6 = 0x00000010;
        *VAR7 = 0;
        *VAR8 = 0;
        break;
    default:
        *VAR5 = 0;
        *VAR6 = 0;
        *VAR7 = 0;
        *VAR8 = 0;
        break;
    }
}