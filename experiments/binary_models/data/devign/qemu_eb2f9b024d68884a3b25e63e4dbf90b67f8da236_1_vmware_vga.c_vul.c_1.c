static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    uint32_t VAR4;
    struct VAR5 *VAR6 = VAR2;
    VAR7 *VAR8 = FUN2(VAR6->VAR9.VAR10);
    uint32_t VAR11;
    switch (VAR6->VAR12)
    {
    case VAR13:
        VAR11 = VAR6->VAR14;
        break;
    case VAR15:
        VAR11 = VAR6->VAR16;
        break;
    case VAR17:
        VAR11 = FUN3(VAR8);
        break;
    case VAR18:
        VAR11 = FUN4(VAR8);
        break;
    case VAR19:
        VAR11 = VAR20;
        break;
    case VAR21:
        VAR11 = VAR22;
        break;
    case VAR23:
        VAR11 = VAR6->VAR24;
        break;
    case VAR25:
        VAR11 = (VAR6->VAR24 + 7) & ~7;
        break;
    case VAR26:
        VAR11 = 0x0;
        break;
    case VAR27:
        VAR11 = VAR8->VAR28.VAR29;
        break;
    case VAR30:
        VAR11 = VAR8->VAR28.VAR31;
        break;
    case VAR32:
        VAR11 = VAR8->VAR28.VAR33;
        break;
    case VAR34:
        VAR11 = VAR6->VAR35 * VAR6->VAR36;
        break;
    case VAR37:
    {
        struct VAR38 *VAR39 = FUN5(VAR6, struct VAR38, VAR40);
        VAR11 = FUN6(&VAR39->VAR41, 1);
        break;
    }
    case VAR42:
        VAR11 = 0x0;
        break;
    case VAR43:
        VAR11 = VAR6->VAR9.VAR44;
        break;
    case VAR45:
        VAR11 = VAR6->VAR9.VAR44;
        break;
    case VAR46:
        VAR4 = VAR47;
        VAR4 |= VAR48;
        VAR4 |= VAR49;
        if (FUN7(VAR6->VAR9.VAR10))
        {
            VAR4 |= VAR50 | VAR51 | VAR52;
        }
        VAR11 = VAR4;
        break;
    case VAR53:
    {
        struct VAR38 *VAR39 = FUN5(VAR6, struct VAR38, VAR40);
        VAR11 = FUN6(&VAR39->VAR41, 2);
        break;
    }
    case VAR54:
        VAR11 = VAR6->VAR55;
        break;
    case VAR56:
        VAR11 = VAR6->VAR57;
        break;
    case VAR58:
    case VAR59:
        VAR11 = VAR6->VAR60;
        break;
    case VAR61:
        VAR11 = VAR6->VAR62;
        break;
    case VAR63:
        VAR11 = VAR6->VAR64.VAR65;
        break;
    case VAR66:
        VAR11 = VAR6->VAR64.VAR67;
        break;
    case VAR68:
        VAR11 = VAR6->VAR64.VAR67;
        break;
    case VAR69:
        VAR11 = VAR6->VAR64.VAR70;
        break;
    case VAR71:
        VAR11 = (VAR6->VAR24 + 7) & ~7;
        break;
    case VAR72:
        VAR11 = VAR6->VAR73;
        break;
    case VAR74:
    case VAR75:
    case VAR76:
    case VAR77 ... VAR78:
        VAR11 = 0;
        break;
    default:
        if (VAR6->VAR12 >= VAR79 && VAR6->VAR12 < VAR79 + VAR6->VAR73)
        {
            VAR11 = VAR6->VAR80[VAR6->VAR12 - VAR79];
            break;
        }
        FUN8("", VAR81, VAR6->VAR12);
        VAR11 = 0;
        break;
    }
    if (VAR6->VAR12 >= VAR79)
    {
        FUN9(VAR6->VAR12, VAR11);
    }
    else if (VAR6->VAR12 >= VAR77)
    {
        FUN10(VAR6->VAR12, VAR11);
    }
    else
    {
        FUN11(VAR6->VAR12, VAR11);
    }
    return VAR11;
}