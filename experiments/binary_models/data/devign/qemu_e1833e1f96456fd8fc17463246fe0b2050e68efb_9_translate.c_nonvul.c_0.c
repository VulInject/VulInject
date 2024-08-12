static inline void FUN1(VAR1 *VAR2, int VAR3)
{
    target_ulong VAR4 = 0;
    target_ulong VAR5;
    uint32_t VAR6 = FUN2(VAR2->VAR7);
    uint32_t VAR8 = FUN3(VAR2->VAR7);
    uint32_t VAR9;
    if ((VAR6 & 0x4) == 0)
        FUN4();
    switch (VAR3)
    {
    case VAR10:
        VAR5 = (VAR11)((VAR12)(FUN5(VAR2->VAR7)));
        if (FUN6(FUN7(VAR2->VAR7) == 0))
        {
            VAR4 = VAR2->VAR13 + VAR5 - 4;
        }
        else
        {
            VAR4 = VAR5;
        }
        if (!VAR2->VAR14)
            VAR4 = (VAR15)VAR4;
        break;
    case VAR16:
        FUN8();
        break;
    default:
    case VAR17:
        FUN9();
        break;
    }
    if (FUN10(VAR2->VAR7))
        FUN11(VAR2, VAR2->VAR13);
    if (VAR6 & 0x10)
    {
        switch (VAR6 & 0x6)
        {
        case 0:
            if (VAR2->VAR14)
                FUN12();
            else
                FUN13();
            break;
        case 2:
            if (VAR2->VAR14)
                FUN14();
            else
                FUN15();
            break;
        default:
        case 4:
        case 6:
            if (VAR3 == VAR10)
            {
                FUN16(VAR2, 0, VAR4);
            }
            else
            {
                if (VAR2->VAR14)
                    FUN17();
                else
                    FUN18();
                FUN19();
            }
            goto VAR18;
        }
    }
    else
    {
        VAR9 = 1 << (3 - (VAR8 & 0x03));
        FUN20(VAR8 >> 2);
        if (VAR6 & 0x8)
        {
            switch (VAR6 & 0x6)
            {
            case 0:
                if (VAR2->VAR14)
                    FUN21(VAR9);
                else
                    FUN22(VAR9);
                break;
            case 2:
                if (VAR2->VAR14)
                    FUN23(VAR9);
                else
                    FUN24(VAR9);
                break;
            default:
            case 4:
            case 6:
                FUN25(VAR9);
                break;
            }
        }
        else
        {
            switch (VAR6 & 0x6)
            {
            case 0:
                if (VAR2->VAR14)
                    FUN26(VAR9);
                else
                    FUN27(VAR9);
                break;
            case 2:
                if (VAR2->VAR14)
                    FUN28(VAR9);
                else
                    FUN29(VAR9);
                break;
            default:
            case 4:
            case 6:
                FUN30(VAR9);
                break;
            }
        }
    }
    if (VAR3 == VAR10)
    {
        int VAR19 = FUN31();
        FUN32(VAR19);
        FUN16(VAR2, 0, VAR4);
        FUN33(VAR19);
        FUN16(VAR2, 1, VAR2->VAR13);
    }
    else
    {
        if (VAR2->VAR14)
            FUN34(VAR2->VAR13 >> 32, VAR2->VAR13);
        else
            FUN35(VAR2->VAR13);
        FUN19();
    VAR18:
        if (VAR2->VAR20)
            FUN36();
        FUN37();
    }
    VAR2->VAR21 = VAR22;
}