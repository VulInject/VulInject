static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    GetByteContext VAR7;
    int VAR8 = VAR6->VAR9;
    int VAR10;
    uint8_t VAR11, VAR12;
    uint8_t VAR13[VAR14];
    VAR15 *VAR16 = VAR3;
    VAR17 *VAR18 = VAR2->VAR19;
    FUN2(&VAR7, VAR6->VAR3, VAR6->VAR9);
    VAR10 = FUN3(VAR2, VAR18->VAR16);
    if (VAR10)
    {
        FUN4(VAR2, VAR20, "");
        return VAR10;
    }
    if (!VAR2->VAR21)
        memset(VAR18->VAR16->VAR3[0], 0, VAR18->VAR16->VAR22[0] * VAR2->VAR23);
    VAR11 = FUN5(&VAR7);
    VAR12 = FUN5(&VAR7);
    VAR12 &= VAR24;
    FUN6(&VAR7, 2);
    FUN7(&VAR7, VAR13, sizeof(VAR13));
    if ((VAR11 & VAR24) == VAR25)
    {
        switch (VAR12)
        {
        case VAR26:
            if (!(VAR13[1] & 0x0F))
                memset(VAR18->VAR16->VAR3[0], VAR13[0] & 0x0F, VAR18->VAR16->VAR22[0] * VAR27);
            break;
        case VAR28:
        case VAR29:
            if (VAR8 - VAR30 < VAR14)
            {
                FUN4(VAR2, VAR20, "");
                return FUN8(VAR31);
            }
            FUN9(VAR18, VAR13, VAR12 == VAR28);
            break;
        case VAR32:
            FUN10(VAR18, VAR13);
            break;
        case VAR33:
        case VAR34:
            if (VAR8 - VAR30 < VAR14)
            {
                FUN4(VAR2, VAR20, "");
                return FUN8(VAR31);
            }
            VAR10 = FUN11(VAR18, VAR13, VAR12 == VAR33);
            if (VAR10)
            {
                FUN4(VAR2, VAR20, "");
                return VAR10;
            }
            break;
        case VAR35:
        case VAR36:
            if (VAR8 - VAR30 < VAR37)
            {
                FUN4(VAR2, VAR20, "");
                return FUN8(VAR31);
            }
            VAR10 = FUN12(VAR2, VAR16, VAR38);
            if (VAR10)
            {
                FUN4(VAR2, VAR20, "");
                return VAR10;
            }
            FUN13(VAR18, VAR13, VAR16, VAR12 == VAR36);
            FUN14(VAR18->VAR16);
            VAR10 = FUN15(VAR18->VAR16, VAR16);
            if (VAR10 < 0)
                return VAR10;
            break;
        default:
            break;
        }
        if (!VAR16->VAR3[0])
        {
            VAR10 = FUN15(VAR16, VAR18->VAR16);
            if (VAR10 < 0)
                return VAR10;
        }
        *VAR4 = 1;
    }
    else
    {
        *VAR4 = 0;
    }
    return VAR6->VAR9;
}