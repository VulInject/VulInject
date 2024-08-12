int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    uint64_t VAR7, VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    uint8_t VAR13;
    uint32_t VAR14;
    uint8_t VAR15;
    FUN2(FUN3(VAR2));
    if (VAR6->VAR16.VAR17 & VAR18)
    {
        FUN4(VAR6, VAR19, 4);
        return 0;
    }
    if (VAR4 & 0x1)
    {
        FUN4(VAR6, VAR20, 4);
        return 0;
    }
    VAR14 = VAR6->VAR21[VAR4] >> 32;
    VAR15 = (VAR6->VAR21[VAR4] >> 16) & 0xf;
    VAR13 = VAR6->VAR21[VAR4] & 0xf;
    VAR7 = VAR6->VAR21[VAR4 + 1];
    VAR10 = FUN5(VAR14);
    if (!VAR10)
    {
        FUN6("");
        FUN7(VAR2, VAR22);
        return 0;
    }
    switch (VAR10->VAR23)
    {
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
        FUN7(VAR2, VAR22);
        return 0;
    case VAR28:
        FUN7(VAR2, VAR29);
        FUN8(VAR6, VAR4, VAR30);
        return 0;
    default:
        break;
    }
    VAR8 = VAR6->VAR21[VAR3];
    if (VAR15 < 6)
    {
        if ((8 - (VAR7 & 0x7)) < VAR13)
        {
            FUN4(VAR6, VAR31, 4);
            return 0;
        }
        if (FUN9(VAR10, VAR7, VAR15))
        {
            VAR7 = VAR7 - VAR10->VAR32.VAR33;
            VAR12 = &VAR10->VAR34->VAR35;
            FUN10(VAR10, VAR7, &VAR8, VAR13);
        }
        else
        {
            VAR12 = VAR10->VAR34->VAR36[VAR15].VAR37;
        }
        FUN11(VAR12, VAR7, VAR8, VAR13, VAR38);
    }
    else if (VAR15 == 15)
    {
        if ((4 - (VAR7 & 0x3)) < VAR13)
        {
            FUN4(VAR6, VAR31, 4);
            return 0;
        }
        switch (VAR13)
        {
        case 1:
            break;
        case 2:
            VAR8 = FUN12(VAR8);
            break;
        case 4:
            VAR8 = FUN13(VAR8);
            break;
        case 8:
            VAR8 = FUN14(VAR8);
            break;
        default:
            FUN4(VAR6, VAR31, 4);
            return 0;
        }
        FUN15(VAR10->VAR34, VAR7, FUN16(VAR10->VAR34), VAR8, VAR13);
    }
    else
    {
        FUN6("");
        FUN7(VAR2, VAR29);
        FUN8(VAR6, VAR4, VAR39);
        return 0;
    }
    FUN7(VAR2, VAR40);
    return 0;
}