static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    int VAR11;
    uint8_t VAR12, VAR13;
    uint8_t VAR14[VAR15];
    VAR16 *VAR17 = VAR3;
    VAR18 *VAR19 = VAR2->VAR20;
    if (VAR9 < VAR21)
    {
        FUN2(VAR2, VAR22, "");
        return FUN3(VAR23);
    }
    if (VAR9 > VAR24 + VAR15)
    {
        FUN2(VAR2, VAR22, "");
        return FUN3(VAR23);
    }
    if ((VAR11 = FUN4(VAR2, VAR19->VAR17)) < 0)
        return VAR11;
    if (!VAR2->VAR25)
    {
        memset(VAR19->VAR17->VAR3[0], 0, VAR19->VAR17->VAR26[0] * VAR2->VAR27);
        memset(VAR19->VAR17->VAR3[1], 0, VAR28);
    }
    VAR12 = FUN5(&VAR8);
    VAR13 = FUN5(&VAR8);
    VAR13 &= VAR29;
    VAR8 += 2;
    if (VAR9 > VAR24)
        FUN6(&VAR8, VAR14, VAR9 - VAR24);
    if ((VAR12 & VAR29) == VAR30)
    {
        switch (VAR13)
        {
        case VAR31:
            if (!(VAR14[1] & 0x0F))
                memset(VAR19->VAR17->VAR3[0], VAR14[0] & 0x0F, VAR19->VAR17->VAR26[0] * VAR32);
            break;
        case VAR33:
        case VAR34:
            if (VAR9 - VAR24 < VAR15)
            {
                FUN2(VAR2, VAR22, "");
                return FUN3(VAR23);
            }
            FUN7(VAR19, VAR14, VAR13 == VAR33);
            break;
        case VAR35:
            FUN8(VAR19, VAR14);
            break;
        case VAR36:
        case VAR37:
            if (VAR9 - VAR24 < VAR15)
            {
                FUN2(VAR2, VAR22, "");
                return FUN3(VAR23);
            }
            VAR11 = FUN9(VAR19, VAR14, VAR13 == VAR36);
            if (VAR11)
            {
                FUN2(VAR2, VAR22, "");
                return VAR11;
            }
            break;
        case VAR38:
        case VAR39:
            if (VAR9 - VAR24 < VAR40)
            {
                FUN2(VAR2, VAR22, "");
                return FUN3(VAR23);
            }
            if ((VAR11 = FUN10(VAR2, VAR17, VAR41)) < 0)
                return VAR11;
            FUN11(VAR19, VAR14, VAR17, VAR13 == VAR39);
            FUN12(VAR19->VAR17);
            VAR11 = FUN13(VAR19->VAR17, VAR17);
            if (VAR11 < 0)
                return VAR11;
            break;
        default:
            break;
        }
        if (!VAR17->VAR3[0])
        {
            VAR11 = FUN13(VAR17, VAR19->VAR17);
            if (VAR11 < 0)
                return VAR11;
        }
        *VAR4 = 1;
    }
    else
    {
        *VAR4 = 0;
        VAR9 = 0;
    }
    return VAR9;
}