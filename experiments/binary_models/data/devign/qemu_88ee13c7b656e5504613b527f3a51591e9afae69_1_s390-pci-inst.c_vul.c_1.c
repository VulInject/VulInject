int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    VAR7 *VAR8;
    uint64_t VAR9;
    uint64_t VAR10;
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
    VAR9 = VAR6->VAR21[VAR4 + 1];
    VAR8 = FUN5(VAR14);
    if (!VAR8)
    {
        FUN6("");
        FUN7(VAR2, VAR22);
        return 0;
    }
    switch (VAR8->VAR23)
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
    if (VAR15 < 6)
    {
        if ((8 - (VAR9 & 0x7)) < VAR13)
        {
            FUN4(VAR6, VAR31, 4);
            return 0;
        }
        VAR12 = VAR8->VAR32->VAR33[VAR15].VAR34;
        FUN9(VAR12, VAR9, &VAR10, VAR13, VAR35);
    }
    else if (VAR15 == 15)
    {
        if ((4 - (VAR9 & 0x3)) < VAR13)
        {
            FUN4(VAR6, VAR31, 4);
            return 0;
        }
        VAR10 = FUN10(VAR8->VAR32, VAR9, FUN11(VAR8->VAR32), VAR13);
        switch (VAR13)
        {
        case 1:
            break;
        case 2:
            VAR10 = FUN12(VAR10);
            break;
        case 4:
            VAR10 = FUN13(VAR10);
            break;
        case 8:
            VAR10 = FUN14(VAR10);
            break;
        default:
            FUN4(VAR6, VAR31, 4);
            return 0;
        }
    }
    else
    {
        FUN6("");
        FUN7(VAR2, VAR29);
        FUN8(VAR6, VAR4, VAR36);
        return 0;
    }
    VAR6->VAR21[VAR3] = VAR10;
    FUN7(VAR2, VAR37);
    return 0;
}