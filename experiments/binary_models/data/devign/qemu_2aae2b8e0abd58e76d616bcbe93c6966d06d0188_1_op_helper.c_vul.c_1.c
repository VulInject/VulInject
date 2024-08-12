VAR1 FUN1(target_ulong VAR2, int VAR3, int VAR4, int VAR5)
{
    uint64_t VAR6 = 0;
    target_ulong VAR7 = VAR2;
    VAR3 &= 0xff;
    if ((VAR3 < 0x80 && (VAR8->VAR9 & VAR10) == 0) || ((VAR8->VAR11->VAR12 & VAR13) && VAR3 >= 0x30 && VAR3 < 0x80 && !(VAR8->VAR14 & VAR15)))
        FUN2(VAR16);
    FUN3(VAR2, VAR4 - 1);
    switch (VAR3)
    {
    case 0x82:
    case 0x8a:
    case 0x83:
    case 0x8b:
    {
        int VAR17 = (VAR3 & 1) ? VAR18 : VAR19;
        if (FUN4(VAR8, VAR2, VAR17) == -1ULL)
        {
            FUN5("", VAR7, VAR3, VAR4, VAR6);
            return 0;
        }
    }
    case 0x10:
    case 0x11:
    case 0x18:
    case 0x19:
    case 0x80:
    case 0x81:
    case 0x88:
    case 0x89:
    case 0xe2:
    case 0xe3:
        if ((VAR3 & 0x80) && (VAR8->VAR9 & VAR10))
        {
            if ((VAR8->VAR11->VAR12 & VAR13) && VAR8->VAR14 & VAR15)
            {
                switch (VAR4)
                {
                case 1:
                    VAR6 = FUN6(VAR2);
                    break;
                case 2:
                    VAR6 = FUN7(VAR2);
                    break;
                case 4:
                    VAR6 = FUN8(VAR2);
                    break;
                default:
                case 8:
                    VAR6 = FUN9(VAR2);
                    break;
                }
            }
            else
            {
                if (VAR3 & 1)
                {
                    switch (VAR4)
                    {
                    case 1:
                        VAR6 = FUN10(VAR2);
                        break;
                    case 2:
                        VAR6 = FUN11(VAR2);
                        break;
                    case 4:
                        VAR6 = FUN12(VAR2);
                        break;
                    default:
                    case 8:
                        VAR6 = FUN13(VAR2);
                        break;
                    }
                }
                else
                {
                    switch (VAR4)
                    {
                    case 1:
                        VAR6 = FUN14(VAR2);
                        break;
                    case 2:
                        VAR6 = FUN15(VAR2);
                        break;
                    case 4:
                        VAR6 = FUN16(VAR2);
                        break;
                    default:
                    case 8:
                        VAR6 = FUN17(VAR2);
                        break;
                    }
                }
            }
        }
        else
        {
            if (VAR3 & 1)
            {
                switch (VAR4)
                {
                case 1:
                    VAR6 = FUN18(VAR2);
                    break;
                case 2:
                    VAR6 = FUN19(VAR2);
                    break;
                case 4:
                    VAR6 = FUN20(VAR2);
                    break;
                default:
                case 8:
                    VAR6 = FUN21(VAR2);
                    break;
                }
            }
            else
            {
                switch (VAR4)
                {
                case 1:
                    VAR6 = FUN22(VAR2);
                    break;
                case 2:
                    VAR6 = FUN23(VAR2);
                    break;
                case 4:
                    VAR6 = FUN24(VAR2);
                    break;
                default:
                case 8:
                    VAR6 = FUN25(VAR2);
                    break;
                }
            }
        }
        break;
    case 0x14:
    case 0x15:
    case 0x1c:
    case 0x1d:
    {
        switch (VAR4)
        {
        case 1:
            VAR6 = FUN26(VAR2);
            break;
        case 2:
            VAR6 = FUN27(VAR2);
            break;
        case 4:
            VAR6 = FUN28(VAR2);
            break;
        default:
        case 8:
            VAR6 = FUN29(VAR2);
            break;
        }
        break;
    }
    case 0x24:
    case 0x2c:
        FUN2(VAR20);
        return 0;
    case 0x04:
    case 0x0c:
    {
        switch (VAR4)
        {
        case 1:
            VAR6 = FUN30(VAR2);
            break;
        case 2:
            VAR6 = FUN31(VAR2);
            break;
        case 4:
            VAR6 = FUN32(VAR2);
            break;
        default:
        case 8:
            VAR6 = FUN33(VAR2);
            break;
        }
        break;
    }
    case 0x4a:
        break;
    case 0x45:
        VAR6 = VAR8->VAR21;
        break;
    case 0x50:
    {
        int VAR22 = (VAR2 >> 3) & 0xf;
        if (VAR22 == 0)
        {
            VAR6 = FUN34(VAR8->VAR23.VAR24);
        }
        else
        {
            VAR6 = VAR8->VAR25[VAR22];
        }
        break;
    }
    case 0x51:
    {
        VAR6 = FUN35(VAR8->VAR23.VAR26, VAR8->VAR23.VAR24, 8 * 1024);
        break;
    }
    case 0x52:
    {
        VAR6 = FUN35(VAR8->VAR23.VAR26, VAR8->VAR23.VAR24, 64 * 1024);
        break;
    }
    case 0x55:
    {
        int VAR22 = (VAR2 >> 3) & 0x3f;
        VAR6 = VAR8->VAR27[VAR22].VAR28;
        break;
    }
    case 0x56:
    {
        int VAR22 = (VAR2 >> 3) & 0x3f;
        VAR6 = VAR8->VAR27[VAR22].VAR29;
        break;
    }
    case 0x58:
    {
        int VAR22 = (VAR2 >> 3) & 0xf;
        if (VAR22 == 0)
        {
            VAR6 = FUN34(VAR8->VAR30.VAR24);
        }
        else
        {
            VAR6 = VAR8->VAR31[VAR22];
        }
        break;
    }
    case 0x59:
    {
        VAR6 = FUN35(VAR8->VAR30.VAR26, VAR8->VAR30.VAR24, 8 * 1024);
        break;
    }
    case 0x5a:
    {
        VAR6 = FUN35(VAR8->VAR30.VAR26, VAR8->VAR30.VAR24, 64 * 1024);
        break;
    }
    case 0x5d:
    {
        int VAR22 = (VAR2 >> 3) & 0x3f;
        VAR6 = VAR8->VAR32[VAR22].VAR28;
        break;
    }
    case 0x5e:
    {
        int VAR22 = (VAR2 >> 3) & 0x3f;
        VAR6 = VAR8->VAR32[VAR22].VAR29;
        break;
    }
    case 0x46:
    case 0x47:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x66:
    case 0x67:
    case 0x6e:
    case 0x6f:
    case 0x76:
    case 0x7e:
        break;
    case 0x5b:
    case 0x48:
    case 0x49:
    case 0x7f:
        break;
    case 0x54:
    case 0x57:
    case 0x5c:
    case 0x5f:
    case 0x77:
    default:
        FUN36(VAR2, 0, 0, 1, VAR4);
        VAR6 = 0;
        break;
    }
    switch (VAR3)
    {
    case 0x0c:
    case 0x18:
    case 0x19:
    case 0x1c:
    case 0x1d:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
        switch (VAR4)
        {
        case 2:
            VAR6 = FUN37(VAR6);
            break;
        case 4:
            VAR6 = FUN38(VAR6);
            break;
        case 8:
            VAR6 = FUN39(VAR6);
            break;
        default:
            break;
        }
    default:
        break;
    }
    if (VAR5)
    {
        switch (VAR4)
        {
        case 1:
            VAR6 = (VAR33)VAR6;
            break;
        case 2:
            VAR6 = (VAR34)VAR6;
            break;
        case 4:
            VAR6 = (VAR35)VAR6;
            break;
        default:
            break;
        }
    }
    FUN5("", VAR7, VAR3, VAR4, VAR6);
    return VAR6;
}