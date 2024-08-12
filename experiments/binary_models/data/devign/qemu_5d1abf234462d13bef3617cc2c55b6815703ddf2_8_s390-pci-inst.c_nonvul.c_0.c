int FUN1(VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    VAR7 *VAR8;
    uint64_t VAR9;
    uint64_t VAR10;
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
    VAR9 = VAR6->VAR19[VAR4 + 1];
    VAR8 = FUN5(VAR12);
    if (!VAR8)
    {
        FUN6("");
        FUN7(VAR2, VAR20);
        return 0;
    }
    switch (VAR8->VAR21)
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
    if (VAR13 < 6)
    {
        if ((8 - (VAR9 & 0x7)) < VAR11)
        {
            FUN4(VAR6, VAR29, 4);
            return 0;
        }
        VAR30 *VAR31 = VAR8->VAR32->VAR33[VAR13].VAR34;
        FUN9(VAR31, VAR9, &VAR10, VAR11, VAR35);
    }
    else if (VAR13 == 15)
    {
        if ((4 - (VAR9 & 0x3)) < VAR11)
        {
            FUN4(VAR6, VAR29, 4);
            return 0;
        }
        VAR10 = FUN10(VAR8->VAR32, VAR9, FUN11(VAR8->VAR32), VAR11);
        switch (VAR11)
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
            FUN4(VAR6, VAR29, 4);
            return 0;
        }
    }
    else
    {
        FUN6("");
        FUN7(VAR2, VAR27);
        FUN8(VAR6, VAR4, VAR36);
        return 0;
    }
    VAR6->VAR19[VAR3] = VAR10;
    FUN7(VAR2, VAR37);
    return 0;
}