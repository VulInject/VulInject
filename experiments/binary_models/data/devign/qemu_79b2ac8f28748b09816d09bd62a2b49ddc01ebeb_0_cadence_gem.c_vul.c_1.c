static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    uint32_t VAR7;
    int VAR8;
    FUN2("", (unsigned)VAR2, (unsigned)VAR3);
    VAR2 >>= 2;
    VAR3 &= ~(VAR6->VAR9[VAR2]);
    VAR7 = VAR6->VAR10[VAR2] & (VAR6->VAR9[VAR2] | VAR6->VAR11[VAR2]);
    VAR6->VAR10[VAR2] = (VAR3 & ~VAR6->VAR11[VAR2]) | VAR7;
    VAR6->VAR10[VAR2] &= ~(VAR6->VAR11[VAR2] & VAR3);
    switch (VAR2)
    {
    case VAR12:
        if (VAR3 & VAR13)
        {
            for (VAR8 = 0; VAR8 < VAR6->VAR14; ++VAR8)
            {
                FUN3(VAR6, VAR8);
            }
        }
        if (VAR3 & VAR15)
        {
            FUN4(VAR6);
        }
        if (!(VAR3 & VAR16))
        {
            for (VAR8 = 0; VAR8 < VAR6->VAR14; VAR8++)
            {
                VAR6->VAR17[VAR8] = VAR6->VAR10[VAR18];
            }
        }
        if (FUN5(FUN6(VAR6->VAR19)))
        {
            FUN7(FUN6(VAR6->VAR19));
        }
        break;
    case VAR20:
        FUN8(VAR6);
        break;
    case VAR21:
        VAR6->VAR22[0] = VAR3;
        break;
    case VAR23 ... VAR24:
        VAR6->VAR22[VAR2 - VAR23 + 1] = VAR3;
        break;
    case VAR18:
        VAR6->VAR17[0] = VAR3;
        break;
    case VAR25 ... VAR26:
        VAR6->VAR17[VAR2 - VAR25 + 1] = VAR3;
        break;
    case VAR27:
        FUN8(VAR6);
        break;
    case VAR28:
        VAR6->VAR10[VAR29] &= ~VAR3;
        FUN8(VAR6);
        break;
    case VAR30 ... VAR31:
        VAR6->VAR10[VAR32 + VAR2 - VAR30] &= ~VAR3;
        FUN8(VAR6);
        break;
    case VAR33 ... VAR34:
        VAR6->VAR10[VAR35 + VAR2 - VAR33] &= ~VAR3;
        FUN8(VAR6);
        break;
    case VAR36:
        VAR6->VAR10[VAR29] |= VAR3;
        FUN8(VAR6);
        break;
    case VAR37 ... VAR38:
        VAR6->VAR10[VAR32 + VAR2 - VAR37] |= VAR3;
        FUN8(VAR6);
        break;
    case VAR39 ... VAR40:
        VAR6->VAR10[VAR35 + VAR2 - VAR39] |= VAR3;
        FUN8(VAR6);
        break;
    case VAR41:
    case VAR42:
    case VAR43:
    case VAR44:
        VAR6->VAR45[(VAR2 - VAR41) / 2] = false;
        break;
    case VAR46:
    case VAR47:
    case VAR48:
    case VAR49:
        VAR6->VAR45[(VAR2 - VAR46) / 2] = true;
        break;
    case VAR50:
        if (VAR3 & VAR51)
        {
            uint32_t VAR52, VAR53;
            VAR52 = (VAR3 & VAR54) >> VAR55;
            if (VAR52 == VAR56 || VAR52 == 0)
            {
                VAR53 = (VAR3 & VAR57) >> VAR58;
                FUN9(VAR6, VAR53, VAR3);
            }
        }
        break;
    }
    FUN2("", VAR6->VAR10[VAR2]);
}