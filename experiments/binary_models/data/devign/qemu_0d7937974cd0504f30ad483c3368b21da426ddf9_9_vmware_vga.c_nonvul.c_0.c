static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    uint32_t VAR4;
    struct VAR5 *VAR6 = VAR2;
    switch (VAR6->VAR7)
    {
    case VAR8:
        return VAR6->VAR9;
    case VAR10:
        return VAR6->VAR11;
    case VAR12:
        return VAR6->VAR13;
    case VAR14:
        return VAR6->VAR15;
    case VAR16:
        return VAR17;
    case VAR18:
        return VAR19;
    case VAR20:
        return VAR6->VAR21;
    case VAR22:
        return (VAR6->VAR21 + 7) & ~7;
    case VAR23:
        return 0x0;
    case VAR24:
        return VAR6->VAR25;
    case VAR26:
        return VAR6->VAR27;
    case VAR28:
        return VAR6->VAR29;
    case VAR30:
        return ((VAR6->VAR21 + 7) >> 3) * VAR6->VAR31;
    case VAR32:
    {
        struct VAR33 *VAR34 = FUN2(VAR6, struct VAR33, VAR35);
        return FUN3(&VAR34->VAR36, 1);
    }
    case VAR37:
        return 0x0;
    case VAR38:
        return VAR6->VAR39.VAR40;
    case VAR41:
        return VAR6->VAR42;
    case VAR43:
        VAR4 = VAR44;
        VAR4 |= VAR45;
        VAR4 |= VAR46;
        if (FUN4(VAR6->VAR39.VAR47))
        {
            VAR4 |= VAR48 | VAR49 | VAR50;
        }
        return VAR4;
    case VAR51:
    {
        struct VAR33 *VAR34 = FUN2(VAR6, struct VAR33, VAR35);
        return FUN3(&VAR34->VAR36, 2);
    }
    case VAR52:
        return VAR6->VAR53;
    case VAR54:
        return VAR6->VAR55;
    case VAR56:
    case VAR57:
        return VAR6->VAR58;
    case VAR59:
        return VAR6->VAR60;
    case VAR61:
        return VAR6->VAR62.VAR63;
    case VAR64:
        return VAR6->VAR62.VAR65;
    case VAR66:
        return VAR6->VAR62.VAR65;
    case VAR67:
        return VAR6->VAR62.VAR68;
    case VAR69:
        return (VAR6->VAR21 + 7) & ~7;
    case VAR70:
        return VAR6->VAR71;
    case VAR72:
    case VAR73:
    case VAR74:
    case VAR75 ... VAR76:
        return 0;
    default:
        if (VAR6->VAR7 >= VAR77 && VAR6->VAR7 < VAR77 + VAR6->VAR71)
        {
            return VAR6->VAR78[VAR6->VAR7 - VAR77];
        }
        FUN5("", VAR79, VAR6->VAR7);
    }
    return 0;
}