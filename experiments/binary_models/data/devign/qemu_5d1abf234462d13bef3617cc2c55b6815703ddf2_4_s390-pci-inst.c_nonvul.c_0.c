int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    uint64_t VAR7, VAR8;
    VAR9 *VAR10;
    uint8_t VAR11;
    uint32_t VAR12;
    uint8_t VAR13;
    FUN2(FUN3(VAR2));
    if (VAR6->VAR14.VAR15 & VAR16)
    {
        FUN4(VAR6, VAR17, 4);
        return 0;
    }
    if (VAR4 & 0x1)
    {
        FUN4(VAR6, VAR18, 4);
        return 0;
    }
    VAR12 = VAR6->VAR19[VAR4] >> 32;
    VAR13 = (VAR6->VAR19[VAR4] >> 16) & 0xf;
    VAR11 = VAR6->VAR19[VAR4] & 0xf;
    VAR7 = VAR6->VAR19[VAR4 + 1];
    VAR10 = FUN5(VAR12);
    if (!VAR10)
    {
        FUN6("");
        FUN7(VAR2, VAR20);
        return 0;
    }
    switch (VAR10->VAR21)
    {
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
        FUN7(VAR2, VAR20);
        return 0;
    case VAR26:
        FUN7(VAR2, VAR27);
        FUN8(VAR6, VAR4, VAR28);
        return 0;
    default:
        break;
    }
    VAR8 = VAR6->VAR19[VAR3];
    if (VAR13 < 6)
    {
        if ((8 - (VAR7 & 0x7)) < VAR11)
        {
            FUN4(VAR6, VAR29, 4);
            return 0;
        }
        VAR30 *VAR31;
        if (FUN9(VAR10, VAR7, VAR13))
        {
            VAR7 = VAR7 - VAR10->VAR32.VAR33;
            VAR31 = &VAR10->VAR34->VAR35;
            FUN10(VAR10, VAR7, &VAR8, VAR11);
        }
        else
        {
            VAR31 = VAR10->VAR34->VAR36[VAR13].VAR37;
        }
        FUN11(VAR31, VAR7, VAR8, VAR11, VAR38);
    }
    else if (VAR13 == 15)
    {
        if ((4 - (VAR7 & 0x3)) < VAR11)
        {
            FUN4(VAR6, VAR29, 4);
            return 0;
        }
        switch (VAR11)
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
            FUN4(VAR6, VAR29, 4);
            return 0;
        }
        FUN15(VAR10->VAR34, VAR7, FUN16(VAR10->VAR34), VAR8, VAR11);
    }
    else
    {
        FUN6("");
        FUN7(VAR2, VAR27);
        FUN8(VAR6, VAR4, VAR39);
        return 0;
    }
    FUN7(VAR2, VAR40);
    return 0;
}