static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    switch (VAR2)
    {
    case VAR7:
        VAR6->VAR8 = VAR3;
        break;
    case VAR9:
        VAR6->VAR10 = ((VAR3 >> VAR11) & 1) * 2;
        break;
    case VAR12:
        if (VAR3 & VAR13)
        {
            FUN2(VAR6, 1);
        }
        if (VAR3 & VAR14)
        {
            FUN2(VAR6, 0);
        }
        if (VAR3 & (VAR13 | VAR14) && VAR6->VAR15 & VAR6->VAR16)
        {
            FUN3(VAR6->VAR17);
        }
        break;
    case VAR18:
        VAR6->VAR15 &= VAR3;
        break;
    case VAR19:
        VAR6->VAR16 = VAR3;
        if (VAR6->VAR15 & VAR6->VAR16)
        {
            FUN3(VAR6->VAR17);
        }
        break;
    case VAR20 ... VAR21:
        VAR6->VAR22[(VAR2 - VAR20) / 4] = VAR3;
        break;
    case VAR23 ... VAR24:
        VAR6->VAR25[(VAR2 - VAR23) / 4] = VAR6->VAR26[(VAR2 - VAR23) / 4] = VAR3;
        break;
    case VAR27 ... VAR28:
        VAR6->VAR29[(VAR2 - VAR27) / 4] = VAR3;
        break;
    }
}