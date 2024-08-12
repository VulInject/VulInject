void FUN1(target_ulong VAR1, target_ulong VAR2, int VAR3, int VAR4)
{
    FUN2("", VAR1, VAR3, VAR4, VAR2);
    VAR3 &= 0xff;
    if ((VAR3 < 0x80 && (VAR5->VAR6 & VAR7) == 0) || ((VAR5->VAR8->VAR9 & VAR10) && VAR3 >= 0x30 && VAR3 < 0x80 && !(VAR5->VAR11 & VAR12)))
        FUN3(VAR13);
    FUN4(VAR1, VAR4 - 1);
    switch (VAR3)
    {
    case 0x0c:
    case 0x18:
    case 0x19:
    case 0x1c:
    case 0x1d:
    case 0x88:
    case 0x89:
        switch (VAR4)
        {
        case 2:
            VAR2 = FUN5(VAR2);
            break;
        case 4:
            VAR2 = FUN6(VAR2);
            break;
        case 8:
            VAR2 = FUN7(VAR2);
            break;
        default:
            break;
        }
    default:
        break;
    }
    switch (VAR3)
    {
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
        if ((VAR3 & 0x80) && (VAR5->VAR6 & VAR7))
        {
            if ((VAR5->VAR8->VAR9 & VAR10) && VAR5->VAR11 & VAR12)
            {
                switch (VAR4)
                {
                case 1:
                    FUN8(VAR1, VAR2);
                    break;
                case 2:
                    FUN9(VAR1, VAR2);
                    break;
                case 4:
                    FUN10(VAR1, VAR2);
                    break;
                case 8:
                default:
                    FUN11(VAR1, VAR2);
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
                        FUN12(VAR1, VAR2);
                        break;
                    case 2:
                        FUN13(VAR1, VAR2);
                        break;
                    case 4:
                        FUN14(VAR1, VAR2);
                        break;
                    case 8:
                    default:
                        FUN15(VAR1, VAR2);
                        break;
                    }
                }
                else
                {
                    switch (VAR4)
                    {
                    case 1:
                        FUN16(VAR1, VAR2);
                        break;
                    case 2:
                        FUN17(VAR1, VAR2);
                        break;
                    case 4:
                        FUN18(VAR1, VAR2);
                        break;
                    case 8:
                    default:
                        FUN19(VAR1, VAR2);
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
                    FUN20(VAR1, VAR2);
                    break;
                case 2:
                    FUN21(VAR1, VAR2);
                    break;
                case 4:
                    FUN22(VAR1, VAR2);
                    break;
                case 8:
                default:
                    FUN23(VAR1, VAR2);
                    break;
                }
            }
            else
            {
                switch (VAR4)
                {
                case 1:
                    FUN24(VAR1, VAR2);
                    break;
                case 2:
                    FUN25(VAR1, VAR2);
                    break;
                case 4:
                    FUN26(VAR1, VAR2);
                    break;
                case 8:
                default:
                    FUN27(VAR1, VAR2);
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
            FUN28(VAR1, VAR2);
            break;
        case 2:
            FUN29(VAR1, VAR2);
            break;
        case 4:
            FUN30(VAR1, VAR2);
            break;
        case 8:
        default:
            FUN31(VAR1, VAR2);
            break;
        }
    }
        return;
    case 0x24:
    case 0x2c:
        FUN3(VAR14);
        return;
    case 0x04:
    case 0x0c:
    {
        switch (VAR4)
        {
        case 1:
            FUN32(VAR1, VAR2);
            break;
        case 2:
            FUN33(VAR1, VAR2);
            break;
        case 4:
            FUN34(VAR1, VAR2);
            break;
        default:
        case 8:
            FUN35(VAR1, VAR2);
            break;
        }
        break;
    }
    case 0x4a:
        return;
    case 0x45:
    {
        uint64_t VAR15;
        VAR15 = VAR5->VAR16;
        VAR5->VAR16 = VAR2 & (VAR17 | VAR18);
        if (VAR15 != VAR5->VAR16)
        {
            FUN36("" VAR19 "" VAR19 "", VAR15, VAR5->VAR16);
            FUN37(VAR5);
            FUN38(VAR5, 1);
        }
        return;
    }
    case 0x50:
    {
        int VAR20 = (VAR1 >> 3) & 0xf;
        uint64_t VAR15;
        VAR15 = VAR5->VAR21[VAR20];
        switch (VAR20)
        {
        case 0:
            return;
        case 1:
        case 2:
            return;
        case 3:
            if ((VAR2 & 1) == 0)
                VAR2 = 0;
            VAR5->VAR22.VAR23 = VAR2;
            break;
        case 4:
            return;
        case 5:
            FUN36("" VAR19 "" VAR19 "", VAR5->VAR22.VAR24, VAR2);
            VAR5->VAR22.VAR24 = VAR2;
            break;
        case 6:
            VAR5->VAR22.VAR25 = VAR2;
            break;
        case 7:
        case 8:
            return;
        default:
            break;
        }
        if (VAR15 != VAR5->VAR21[VAR20])
        {
            FUN36("" VAR19 "" VAR19 "", VAR20, VAR15, VAR5->VAR21[VAR20]);
        }
        FUN37(VAR5);
        return;
    }
    case 0x54:
        FUN39(VAR5->VAR26, VAR5->VAR22.VAR25, VAR2, "", VAR5);
        return;
    case 0x55:
    {
        unsigned int VAR27 = (VAR1 >> 3) & 0x3f;
        FUN40(&VAR5->VAR26[VAR27], VAR5->VAR22.VAR25, VAR2, VAR5);
        FUN36("", VAR27);
        FUN37(VAR5);
        return;
    }
    case 0x57:
        FUN41(VAR5->VAR26, VAR1, "", VAR5);
        return;
    case 0x58:
    {
        int VAR20 = (VAR1 >> 3) & 0xf;
        uint64_t VAR15;
        VAR15 = VAR5->VAR28[VAR20];
        switch (VAR20)
        {
        case 0:
        case 4:
            return;
        case 3:
            if ((VAR2 & 1) == 0)
            {
                VAR2 = 0;
                VAR5->VAR29.VAR30 = 0;
            }
            VAR5->VAR29.VAR23 = VAR2;
            break;
        case 1:
            VAR5->VAR29.VAR31 = VAR2;
            break;
        case 2:
            VAR5->VAR29.VAR32 = VAR2;
            break;
        case 5:
            FUN36("" VAR19 "" VAR19 "", VAR5->VAR29.VAR24, VAR2);
            VAR5->VAR29.VAR24 = VAR2;
            break;
        case 6:
            VAR5->VAR29.VAR25 = VAR2;
            break;
        case 7:
        case 8:
        default:
            VAR5->VAR28[VAR20] = VAR2;
            break;
        }
        if (VAR15 != VAR5->VAR28[VAR20])
        {
            FUN36("" VAR19 "" VAR19 "", VAR20, VAR15, VAR5->VAR28[VAR20]);
        }
        FUN37(VAR5);
        return;
    }
    case 0x5c:
        FUN39(VAR5->VAR33, VAR5->VAR29.VAR25, VAR2, "", VAR5);
        return;
    case 0x5d:
    {
        unsigned int VAR27 = (VAR1 >> 3) & 0x3f;
        FUN40(&VAR5->VAR33[VAR27], VAR5->VAR29.VAR25, VAR2, VAR5);
        FUN36("", VAR27);
        FUN37(VAR5);
        return;
    }
    case 0x5f:
        FUN41(VAR5->VAR33, VAR1, "", VAR5);
        return;
    case 0x49:
        return;
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
        return;
    case 0x51:
    case 0x52:
    case 0x56:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5e:
    case 0x48:
    case 0x7f:
    case 0x82:
    case 0x83:
    case 0x8a:
    case 0x8b:
    default:
        FUN42(VAR1, 1, 0, 1, VAR4);
        return;
    }
}