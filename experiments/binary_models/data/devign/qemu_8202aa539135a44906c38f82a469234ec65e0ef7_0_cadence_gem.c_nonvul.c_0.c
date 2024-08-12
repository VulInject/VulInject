static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    uint32_t VAR7;
    FUN2("", (unsigned)VAR2, (unsigned)VAR3);
    VAR2 >>= 2;
    VAR3 &= ~(VAR6->VAR8[VAR2]);
    VAR7 = VAR6->VAR9[VAR2] & (VAR6->VAR8[VAR2] | VAR6->VAR10[VAR2]);
    VAR6->VAR9[VAR2] = (VAR3 & ~VAR6->VAR10[VAR2]) | VAR7;
    VAR6->VAR9[VAR2] &= ~(VAR6->VAR10[VAR2] & VAR3);
    switch (VAR2)
    {
    case VAR11:
        if (VAR3 & VAR12)
        {
            FUN3(VAR6);
        }
        if (VAR3 & VAR13)
        {
            FUN4(VAR6);
        }
        if (!(VAR3 & VAR14))
        {
            VAR6->VAR15 = VAR6->VAR9[VAR16];
        }
        if (FUN5(FUN6(VAR6->VAR17)))
        {
            FUN7(FUN6(VAR6->VAR17));
        }
        break;
    case VAR18:
        FUN8(VAR6);
        break;
    case VAR19:
        VAR6->VAR20 = VAR3;
        break;
    case VAR16:
        VAR6->VAR15 = VAR3;
        break;
    case VAR21:
        FUN8(VAR6);
        break;
    case VAR22:
        VAR6->VAR9[VAR23] &= ~VAR3;
        FUN8(VAR6);
        break;
    case VAR24:
        VAR6->VAR9[VAR23] |= VAR3;
        FUN8(VAR6);
        break;
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
        VAR6->VAR29[(VAR2 - VAR25) / 2] = false;
        break;
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
        VAR6->VAR29[(VAR2 - VAR30) / 2] = true;
        break;
    case VAR34:
        if (VAR3 & VAR35)
        {
            uint32_t VAR36, VAR37;
            VAR36 = (VAR3 & VAR38) >> VAR39;
            if (VAR36 == VAR40)
            {
                VAR37 = (VAR3 & VAR41) >> VAR42;
                FUN9(VAR6, VAR37, VAR3);
            }
        }
        break;
    }
    FUN2("", VAR6->VAR9[VAR2]);
}