static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7 = VAR3;
    int64_t VAR8 = FUN2(VAR9);
    uint32_t VAR10 = 0;
    FUN3("" VAR11 "", VAR7, VAR2);
    switch (VAR2)
    {
    case VAR12:
        VAR6->VAR13 = VAR7;
        return;
    case VAR14:
        VAR6->VAR15 = VAR7;
        return;
    case VAR16:
        VAR6->VAR17 = VAR7;
        return;
    case VAR18:
        VAR6->VAR19 = VAR7;
        return;
    case VAR20:
        VAR6->VAR21 &= VAR7;
        return;
    case VAR22:
        VAR6->VAR23 = VAR7;
        if (VAR6->VAR23 & VAR24)
        {
            VAR10 = 0;
            break;
        }
        return;
    case VAR25:
        VAR6->VAR26 = VAR7;
        return;
    case VAR27:
        VAR6->VAR28 = VAR7;
        return;
    case VAR29:
        VAR6->VAR30 = VAR7;
        return;
    case VAR31:
        VAR10 = FUN4(VAR6, VAR8) - VAR6->VAR32;
        VAR6->VAR33 = VAR7;
        VAR7 = VAR10;
        break;
    case VAR34:
        VAR10 = VAR7;
        break;
    case VAR35:
        VAR6->VAR36 = VAR7;
        FUN5(VAR6, VAR8);
        return;
    case VAR37:
        VAR6->VAR38 = VAR7;
        return;
    case VAR39:
        VAR6->VAR40 = VAR7;
        return;
    case VAR41:
        VAR6->VAR42 = VAR7;
        return;
    case VAR43:
        VAR6->VAR44 = VAR7;
        return;
    case VAR45:
        VAR6->VAR46 = VAR7;
        return;
    case VAR47:
        VAR6->VAR48 = VAR7;
        return;
    case VAR49:
        VAR6->VAR50 = VAR7;
        return;
    default:
        FUN6(VAR51, "" VAR11 "", VAR52, VAR2);
        return;
    }
    VAR6->VAR32 = FUN4(VAR6, VAR8) - VAR10;
    FUN5(VAR6, VAR8);
}