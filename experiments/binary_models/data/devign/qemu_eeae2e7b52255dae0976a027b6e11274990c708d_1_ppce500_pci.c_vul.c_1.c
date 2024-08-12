static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    unsigned long VAR6;
    VAR6 = VAR2 & 0xfe0;
    FUN2("" VAR7 "", VAR8, VAR3, VAR6, VAR2);
    switch (VAR6)
    {
    case VAR9:
    case VAR10:
    case VAR11:
    case VAR12:
        switch (VAR2 & 0xC)
        {
        case VAR13:
            VAR5->VAR14[(VAR2 >> 5) & 0x7].VAR15 = VAR3;
            break;
        case VAR16:
            VAR5->VAR14[(VAR2 >> 5) & 0x7].VAR17 = VAR3;
            break;
        case VAR18:
            VAR5->VAR14[(VAR2 >> 5) & 0x7].VAR19 = VAR3;
            break;
        case VAR20:
            VAR5->VAR14[(VAR2 >> 5) & 0x7].VAR21 = VAR3;
            break;
        default:
            break;
        };
        break;
    case VAR22:
    case VAR23:
    case VAR24:
        switch (VAR2 & 0xC)
        {
        case VAR25:
            VAR5->VAR26[(VAR2 >> 5) & 0x3].VAR27 = VAR3;
            break;
        case VAR28:
            VAR5->VAR26[(VAR2 >> 5) & 0x3].VAR29 = VAR3;
            break;
        case VAR30:
            VAR5->VAR26[(VAR2 >> 5) & 0x3].VAR31 = VAR3;
            break;
        case VAR32:
            VAR5->VAR26[(VAR2 >> 5) & 0x3].VAR33 = VAR3;
            break;
        default:
            break;
        };
        break;
    case VAR34:
        VAR5->VAR35 = VAR3;
        break;
    default:
        break;
    };
}