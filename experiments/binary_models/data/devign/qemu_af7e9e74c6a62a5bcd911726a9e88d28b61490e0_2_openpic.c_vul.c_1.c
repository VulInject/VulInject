static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7;
    FUN2("" VAR8 "", VAR9, VAR3);
    VAR7 = 0xFFFFFFFF;
    if (VAR3 & 0xF)
        return VAR7;
    switch (VAR3)
    {
    case 0x1000:
        VAR7 = VAR6->VAR10;
        break;
    case 0x1020:
        VAR7 = VAR6->VAR11;
        break;
    case 0x1080:
        VAR7 = VAR6->VAR12;
        break;
    case 0x1090:
        VAR7 = 0x00000000;
        break;
    case 0x00:
        VAR7 = VAR6->VAR13;
        break;
    case 0x40:
    case 0x50:
    case 0x60:
    case 0x70:
    case 0x80:
    case 0x90:
    case 0xA0:
    case 0xB0:
        VAR7 = FUN3(VAR6, VAR3, FUN4());
        break;
    case 0x10A0:
    case 0x10B0:
    case 0x10C0:
    case 0x10D0:
    {
        int VAR14;
        VAR14 = (VAR3 - 0x10A0) >> 4;
        VAR7 = FUN5(VAR6, VAR6->VAR15 + VAR14);
    }
    break;
    case 0x10E0:
        VAR7 = VAR6->VAR16;
        break;
    default:
        break;
    }
    FUN2("", VAR9, VAR7);
    return VAR7;
}