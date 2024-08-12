static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint32_t VAR7 = 0;
    switch (VAR3 & ~0x3)
    {
    case VAR8:
        VAR7 = VAR6->VAR9;
        break;
    case VAR10:
        VAR7 = VAR6->VAR11 | (VAR6->VAR12 << 16);
        break;
    case VAR13:
        VAR7 = VAR6->VAR14;
        break;
    case VAR15:
        VAR7 = VAR6->VAR16 | (VAR6->VAR17 << 16);
        break;
    case VAR18 ... VAR19:
        VAR7 = VAR6->VAR20[((VAR3 & ~0x3) - VAR18) >> 2];
        break;
    case VAR21:
        if (FUN2(VAR6, VAR3 - VAR21))
        {
            VAR7 = FUN3(VAR6, VAR4);
            FUN4("", VAR4, (int)VAR3, VAR7, VAR7);
            return VAR7;
        }
        break;
    case VAR22:
        VAR7 = VAR6->VAR23;
        break;
    case VAR24:
        VAR7 = VAR6->VAR25 | (VAR6->VAR26 << 8) | (VAR6->VAR27 << 16) | (VAR6->VAR28 << 24);
        break;
    case VAR29:
        VAR7 = VAR6->VAR30 | (VAR6->VAR31 << 16);
        break;
    case VAR32:
        VAR7 = VAR6->VAR33 | (VAR6->VAR34 << 16);
        break;
    case VAR35:
        VAR7 = VAR6->VAR36 | (VAR6->VAR37 << 16);
        break;
    case VAR38:
        VAR7 = VAR6->VAR39 | (VAR6->VAR40 << 16);
        break;
    case VAR41:
        VAR7 = VAR6->VAR42;
        break;
    case VAR43:
        VAR7 = VAR6->VAR44;
        break;
    case VAR45:
        VAR7 = VAR6->VAR46;
        break;
    case VAR47:
        VAR7 = VAR6->VAR48;
        break;
    case VAR49:
        VAR7 = (VAR50)VAR6->VAR51;
        break;
    case VAR49 + 4:
        VAR7 = (VAR50)(VAR6->VAR51 >> 32);
        break;
    case VAR52:
        VAR7 = (VAR53 << 16) | FUN5(VAR6);
        break;
    default:
        FUN6(VAR54, "" VAR55 ""
                                 "",
                      VAR4, VAR3);
        break;
    }
    VAR7 >>= (VAR3 & 0x3) * 8;
    VAR7 &= (1ULL << (VAR4 * 8)) - 1;
    FUN4("", VAR4, (int)VAR3, VAR7, VAR7);
    return VAR7;
}