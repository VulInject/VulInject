static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7;
    int VAR8 = 0;
    VAR7 = (VAR2 - VAR9) >> 2;
    FUN2("" VAR10 "", VAR2, VAR3, VAR7);
    switch (VAR7)
    {
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
    case VAR22:
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
        VAR6->VAR34[VAR7] = VAR3;
        break;
    case VAR35:
        if (!(VAR6->VAR34[VAR7] & 0x04) && (VAR3 & 0x04))
        {
            VAR8 = 1;
        }
        VAR6->VAR34[VAR7] = VAR3;
        if (VAR8)
        {
            FUN3();
        }
        break;
    case VAR36:
        VAR6->VAR34[VAR36] = VAR3;
        VAR6->VAR34[VAR37] |= VAR3;
        break;
    case VAR38:
        VAR6->VAR34[VAR38] = VAR3;
        VAR6->VAR34[VAR37] &= ~VAR3;
        break;
    case VAR37:
    case VAR39:
        FUN2("", VAR7);
        break;
    default:
        FUN2("", VAR7);
        break;
    }
}