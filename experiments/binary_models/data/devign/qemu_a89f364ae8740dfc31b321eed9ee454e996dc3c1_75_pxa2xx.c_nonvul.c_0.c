static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    switch (VAR3)
    {
    case VAR7:
        return VAR6->VAR8;
    case VAR9:
        return VAR6->VAR10;
    case VAR11:
        return VAR6->VAR12;
    case VAR13:
        return VAR6->VAR14;
    case VAR15:
        return VAR6->VAR16;
    case VAR17:
        return VAR6->VAR18;
    case VAR19:
        return VAR6->VAR20;
    case VAR21:
        return VAR6->VAR22;
    case VAR23:
        return VAR6->VAR24;
    case VAR25:
        return VAR6->VAR26;
    case VAR27:
        return VAR6->VAR28 + ((FUN2(VAR29) - VAR6->VAR30) << 15) / (1000 * ((VAR6->VAR8 & 0xffff) + 1));
    case VAR31:
        return VAR6->VAR32 + ((FUN2(VAR29) - VAR6->VAR30) << 15) / (1000 * ((VAR6->VAR8 & 0xffff) + 1));
    case VAR33:
        return VAR6->VAR34;
    case VAR35:
        if (VAR6->VAR10 & (1 << 12))
            return VAR6->VAR36 + (FUN2(VAR29) - VAR6->VAR37) / 10;
        else
            return VAR6->VAR36;
    default:
        FUN3("" VAR38 "", VAR39, VAR3);
        break;
    }
    return 0;
}