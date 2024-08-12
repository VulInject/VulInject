static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    switch (VAR3)
    {
    case VAR6:
        return VAR5->VAR7;
    case VAR8:
        return VAR5->VAR9;
    case VAR10:
        return VAR5->VAR11;
    case VAR12:
        return VAR5->VAR13;
    case VAR14:
        return VAR5->VAR15;
    case VAR16:
        return VAR5->VAR17;
    case VAR18:
        return VAR5->VAR19;
    case VAR20:
        return VAR5->VAR21;
    case VAR22:
        return VAR5->VAR23;
    case VAR24:
        return VAR5->VAR25;
    case VAR26:
        return VAR5->VAR27 + ((FUN2(VAR28) - VAR5->VAR29) << 15) / (1000 * ((VAR5->VAR7 & 0xffff) + 1));
    case VAR30:
        return VAR5->VAR31 + ((FUN2(VAR28) - VAR5->VAR29) << 15) / (1000 * ((VAR5->VAR7 & 0xffff) + 1));
    case VAR32:
        return VAR5->VAR33;
    case VAR34:
        if (VAR5->VAR9 & (1 << 12))
            return VAR5->VAR35 + (FUN2(VAR28) - VAR5->VAR36) / 10;
        else
            return VAR5->VAR35;
    default:
        FUN3("" VAR37 "", VAR38, VAR3);
        break;
    }
    return 0;
}