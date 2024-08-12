static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7;
    uint32_t VAR8;
    int VAR9, VAR10;
    VAR3 &= 0xff;
    VAR8 = (VAR2 & 3) >> 1;
    VAR10 = (VAR2 & VAR11) >> 2;
    VAR7 = &VAR5->VAR12[VAR10];
    switch (VAR8)
    {
    case 0:
        FUN2("", FUN3(VAR7), VAR7->VAR13, VAR3 & 0xff);
        VAR9 = 0;
        switch (VAR7->VAR13)
        {
        case 0:
            VAR9 = VAR3 & 7;
            VAR3 &= 0x38;
            switch (VAR3)
            {
            case 8:
                VAR9 |= 0x8;
                break;
            case 0x28:
                FUN4(VAR7);
                break;
            case 0x38:
                if (VAR7->VAR14)
                    FUN5(VAR7);
                else if (VAR7->VAR15)
                    FUN4(VAR7);
                break;
            default:
                break;
            }
            break;
        case 1 ... 3:
        case 6 ... 8:
        case 10 ... 11:
        case 14 ... 15:
            VAR7->VAR16[VAR7->VAR13] = VAR3;
            break;
        case 4:
        case 5:
        case 12:
        case 13:
            VAR7->VAR16[VAR7->VAR13] = VAR3;
            FUN6(VAR7);
            break;
        case 9:
            switch (VAR3 & 0xc0)
            {
            case 0:
            default:
                break;
            case 0x40:
                FUN7(&VAR5->VAR12[1]);
                return;
            case 0x80:
                FUN7(&VAR5->VAR12[0]);
                return;
            case 0xc0:
                FUN8(VAR5);
                return;
            }
            break;
        default:
            break;
        }
        if (VAR7->VAR13 == 0)
            VAR7->VAR13 = VAR9;
        else
            VAR7->VAR13 = 0;
        break;
    case 1:
        FUN2("", FUN3(VAR7), VAR3);
        if (VAR7->VAR16[5] & 8)
        {
            VAR7->VAR17 = VAR3;
            if (VAR7->VAR18)
                FUN9(VAR7->VAR18, &VAR7->VAR17, 1);
            else if (VAR7->VAR19 == VAR20)
            {
                FUN10(VAR7, VAR3);
            }
            VAR7->VAR21[0] |= 4;
            VAR7->VAR21[1] |= 1;
            FUN11(VAR7);
        }
        break;
    default:
        break;
    }
}