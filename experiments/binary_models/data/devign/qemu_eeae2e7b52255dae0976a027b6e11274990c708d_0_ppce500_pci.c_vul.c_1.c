static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    unsigned long VAR6;
    uint32_t VAR7 = 0;
    VAR6 = VAR3 & 0xfe0;
    switch (VAR6)
    {
    case VAR8:
    case VAR9:
    case VAR10:
    case VAR11:
        switch (VAR3 & 0xC)
        {
        case VAR12:
            VAR7 = VAR5->VAR13[(VAR3 >> 5) & 0x7].VAR14;
            break;
        case VAR15:
            VAR7 = VAR5->VAR13[(VAR3 >> 5) & 0x7].VAR16;
            break;
        case VAR17:
            VAR7 = VAR5->VAR13[(VAR3 >> 5) & 0x7].VAR18;
            break;
        case VAR19:
            VAR7 = VAR5->VAR13[(VAR3 >> 5) & 0x7].VAR20;
            break;
        default:
            break;
        }
        break;
    case VAR21:
    case VAR22:
    case VAR23:
        switch (VAR3 & 0xC)
        {
        case VAR24:
            VAR7 = VAR5->VAR25[(VAR3 >> 5) & 0x3].VAR26;
            break;
        case VAR27:
            VAR7 = VAR5->VAR25[(VAR3 >> 5) & 0x3].VAR28;
            break;
        case VAR29:
            VAR7 = VAR5->VAR25[(VAR3 >> 5) & 0x3].VAR30;
            break;
        case VAR31:
            VAR7 = VAR5->VAR25[(VAR3 >> 5) & 0x3].VAR32;
            break;
        default:
            break;
        };
        break;
    case VAR33:
        VAR7 = VAR5->VAR34;
        break;
    default:
        break;
    }
    FUN2("" VAR35 "", VAR36, VAR6, VAR3, VAR7);
    return VAR7;
}