static VAR1 FUN1(void *VAR2, uint32_t VAR3, int VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR2;
    uint8_t VAR7;
    if (VAR4 > 9)
    {
        FUN2("", VAR8, VAR4);
    }
    if (VAR6->VAR9 >= FUN3(VAR6->VAR10))
    {
        VAR7 = 0;
    }
    else
    {
        VAR7 = VAR6->VAR10[VAR6->VAR9++];
    }
    if (VAR6->VAR11-- > 0)
    {
        VAR6->VAR12[VAR6->VAR11] = VAR3;
    }
    else
    {
        VAR6->VAR3 = VAR3;
    }
    switch (VAR6->VAR3)
    {
    case 0x00:
        break;
    case 0x01:
        FUN4(VAR6);
        break;
    case 0x02:
        VAR6->VAR13 = 0;
        break;
    case 0x03:
        VAR6->VAR13 = 1;
        break;
    case 0x04:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = (VAR6->VAR14 >> 16) & 0xff;
        VAR6->VAR10[1] = (VAR6->VAR14 >> 8) & 0xff;
        VAR6->VAR10[2] = (VAR6->VAR14 >> 0) & 0xff;
        break;
    case 0x06:
    case 0x07:
    case 0x08:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = 0x01;
        break;
    case 0x09:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = VAR6->VAR13 << 7;
        VAR6->VAR10[1] = (5 << 4) | (VAR6->VAR15 << 2) | (VAR6->sleep << 1) | VAR6->VAR16;
        VAR6->VAR10[2] = (VAR6->VAR17 << 7) | (VAR6->VAR18 << 5) | (VAR6->VAR19 << 2) | (VAR6->VAR20 << 1) | (VAR6->VAR21 >> 2);
        VAR6->VAR10[3] = VAR6->VAR21 << 6;
        break;
    case 0x0a:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = (VAR6->VAR19 << 2) | (VAR6->VAR16 << 3) | (VAR6->sleep << 4) | (VAR6->VAR15 << 5) | (VAR6->sleep << 6) | (VAR6->VAR13 << 7);
        break;
    case 0x0b:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = 0;
        break;
    case 0x0c:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = 5;
        break;
    case 0x0d:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = (VAR6->VAR18 << 5) | (VAR6->VAR17 << 7) | VAR6->VAR21;
        break;
    case 0x0e:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = VAR6->VAR20 << 7;
        break;
    case 0x0f:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = VAR6->VAR22;
        break;
    case 0x10:
        VAR6->sleep = 1;
        break;
    case 0x11:
        VAR6->sleep = 0;
        VAR6->VAR22 ^= 1 << 6;
        break;
    case 0x12:
        VAR6->VAR15 = 1;
        VAR6->VAR16 = 0;
        VAR6->VAR17 = 0;
        break;
    case 0x13:
        VAR6->VAR15 = 0;
        VAR6->VAR16 = 1;
        VAR6->VAR17 = 0;
        break;
    case 0x20:
        VAR6->VAR18 = 0;
        break;
    case 0x21:
        VAR6->VAR18 = 1;
        break;
    case 0x22:
    case 0x23:
        goto VAR23;
    case 0x25:
        if (VAR6->VAR11 < 0)
        {
            VAR6->VAR11 = 1;
        }
        goto VAR23;
    case 0x26:
        if (!VAR6->VAR11)
        {
            VAR6->VAR21 = FUN5(VAR6->VAR12[0] & 0xf);
            if (VAR6->VAR21 == 32)
            {
                VAR6->VAR21 = -1;
            }
        }
        else if (VAR6->VAR11 < 0)
        {
            VAR6->VAR11 = 1;
        }
        break;
    case 0x28:
        VAR6->VAR19 = 0;
        break;
    case 0x29:
        VAR6->VAR19 = 1;
        break;
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x30:
    case 0x33:
        goto VAR23;
    case 0x34:
        VAR6->VAR20 = 0;
        break;
    case 0x35:
        if (!VAR6->VAR11)
        {
            VAR6->VAR20 = 1;
        }
        else if (VAR6->VAR11 < 0)
        {
            VAR6->VAR11 = 1;
        }
        break;
    case 0x36:
        goto VAR23;
    case 0x37:
        VAR6->VAR15 = 0;
        VAR6->VAR16 = 0;
        VAR6->VAR17 = 1;
        break;
    case 0x38:
    case 0x39:
    case 0x3a:
        goto VAR23;
    case 0xb0:
    case 0xb1:
        if (VAR6->VAR11 < 0)
        {
            VAR6->VAR11 = 2;
        }
        break;
    case 0xb4:
        break;
    case 0xb5:
    case 0xb6:
    case 0xb7:
    case 0xb8:
    case 0xba:
    case 0xbb:
        goto VAR23;
    case 0xbd:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = 0;
        VAR6->VAR10[1] = 1;
        break;
    case 0xc2:
        if (VAR6->VAR11 < 0)
        {
            VAR6->VAR11 = 2;
        }
        break;
    case 0xc6:
    case 0xc7:
    case 0xd0:
    case 0xd1:
    case 0xd4:
    case 0xd5:
        goto VAR23;
    case 0xda:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = (VAR6->VAR14 >> 16) & 0xff;
        break;
    case 0xdb:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = (VAR6->VAR14 >> 8) & 0xff;
        break;
    case 0xdc:
        VAR6->VAR9 = 0;
        VAR6->VAR10[0] = (VAR6->VAR14 >> 0) & 0xff;
        break;
    default:
    VAR23:
        FUN6(VAR24, "", VAR8, VAR6->VAR3);
        break;
    }
    return VAR7;
}