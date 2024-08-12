static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint32_t VAR6;
    int VAR7 = 0;
    VAR6 = (VAR2 - VAR8) >> 2;
    FUN2("" VAR9 "", VAR2, VAR3, VAR6);
    switch (VAR6)
    {
    case VAR10:
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
        VAR5->VAR33[VAR6] = VAR3;
        break;
    case VAR34:
        if (!(VAR5->VAR33[VAR6] & 0x04) && (VAR3 & 0x04))
        {
            VAR7 = 1;
        }
        VAR5->VAR33[VAR6] = VAR3;
        if (VAR7)
        {
            FUN3();
        }
        break;
    case VAR35:
        VAR5->VAR33[VAR35] = VAR3;
        VAR5->VAR33[VAR36] |= VAR3;
        break;
    case VAR37:
        VAR5->VAR33[VAR37] = VAR3;
        VAR5->VAR33[VAR36] &= ~VAR3;
        break;
    case VAR36:
    case VAR38:
        FUN2("", VAR6);
        break;
    default:
        FUN2("", VAR6);
        break;
    }
}