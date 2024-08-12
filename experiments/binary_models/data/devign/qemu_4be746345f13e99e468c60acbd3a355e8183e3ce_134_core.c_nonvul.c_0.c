static bool FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5;
    if (!VAR2->VAR6)
    {
        FUN2(VAR2);
        return true;
    }
    switch (VAR2->VAR7)
    {
    case 0x02:
        FUN3(VAR2->VAR6, true);
        VAR5 = (VAR4 *)VAR2->VAR5;
        FUN4(VAR5 + 85, (1 << 14) | (1 << 5) | 1);
        return true;
    case 0x82:
        FUN3(VAR2->VAR6, false);
        VAR5 = (VAR4 *)VAR2->VAR5;
        FUN4(VAR5 + 85, (1 << 14) | 1);
        FUN5(VAR2);
        return false;
    case 0xcc:
    case 0x66:
    case 0xaa:
    case 0x55:
    case 0x05:
    case 0x85:
    case 0x69:
    case 0x67:
    case 0x96:
    case 0x9a:
    case 0x42:
    case 0xc2:
        return true;
    case 0x03:
    {
        uint8_t VAR8 = VAR2->VAR9 & 0x07;
        VAR5 = (VAR4 *)VAR2->VAR5;
        switch (VAR2->VAR9 >> 3)
        {
        case 0x00:
        case 0x01:
            FUN4(VAR5 + 62, 0x07);
            FUN4(VAR5 + 63, 0x07);
            FUN4(VAR5 + 88, 0x3f);
            break;
        case 0x02:
            FUN4(VAR5 + 62, 0x07 | (1 << (VAR8 + 8)));
            FUN4(VAR5 + 63, 0x07);
            FUN4(VAR5 + 88, 0x3f);
            break;
        case 0x04:
            FUN4(VAR5 + 62, 0x07);
            FUN4(VAR5 + 63, 0x07 | (1 << (VAR8 + 8)));
            FUN4(VAR5 + 88, 0x3f);
            break;
        case 0x08:
            FUN4(VAR5 + 62, 0x07);
            FUN4(VAR5 + 63, 0x07);
            FUN4(VAR5 + 88, 0x3f | (1 << (VAR8 + 8)));
            break;
        default:
            goto VAR10;
        }
        return true;
    }
    }
VAR10:
    FUN2(VAR2);
    return true;
}