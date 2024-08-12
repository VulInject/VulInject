static const VAR1 *FUN1(TCGOpcode VAR2)
{
    static const TCGTargetOpDef VAR3 = {.VAR4 = {""}};
    static const TCGTargetOpDef VAR5 = {.VAR4 = {"", ""}};
    static const TCGTargetOpDef VAR6 = {.VAR4 = {"", ""}};
    static const TCGTargetOpDef VAR7 = {.VAR4 = {"", ""}};
    static const TCGTargetOpDef VAR8 = {.VAR4 = {"", ""}};
    static const TCGTargetOpDef VAR9 = {.VAR4 = {"", ""}};
    static const TCGTargetOpDef VAR10 = {.VAR4 = {"", ""}};
    static const TCGTargetOpDef VAR11 = {.VAR4 = {"", "", ""}};
    static const TCGTargetOpDef VAR12 = {.VAR4 = {"", "", ""}};
    static const TCGTargetOpDef VAR13 = {.VAR4 = {"", "", ""}};
    static const TCGTargetOpDef VAR14 = {.VAR4 = {"", "", ""}};
    static const TCGTargetOpDef VAR15 = {.VAR4 = {"", "", ""}};
    static const TCGTargetOpDef VAR16 = {.VAR4 = {"", "", ""}};
    static const TCGTargetOpDef VAR17 = {.VAR4 = {"", "", "", "", "", ""}};
    static const TCGTargetOpDef VAR18 = {.VAR4 = {"", "", "", "", "", ""}};
    static const TCGTargetOpDef VAR19 = {.VAR4 = {"", "", "", "", "", ""}};
    switch (VAR2)
    {
    case VAR20:
        return &VAR3;
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
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
    case VAR38:
    case VAR39:
        return &VAR5;
    case VAR40:
    case VAR41:
        return &VAR11;
    case VAR42:
    case VAR43:
        return &VAR12;
    case VAR44:
        return (VAR45 & VAR46 ? &VAR12 : &VAR13);
    case VAR47:
        return (VAR45 & VAR46 ? &VAR14 : &VAR13);
    case VAR48:
    case VAR49:
        return &VAR15;
    case VAR50:
    case VAR51:
        return &VAR16;
    case VAR52:
    case VAR53:
        return &VAR12;
    case VAR54:
    case VAR55:
    case VAR56:
        return &VAR12;
    case VAR57:
    case VAR58:
    case VAR59:
        return &VAR11;
    case VAR60:
    case VAR61:
    case VAR62:
    case VAR63:
        return &VAR11;
    case VAR64:
        return (VAR45 & VAR65 ? &VAR8 : &VAR10);
    case VAR66:
        return (VAR45 & VAR65 ? &VAR9 : &VAR10);
    case VAR67:
    case VAR68:
    case VAR69:
    case VAR70:
    case VAR71:
    case VAR72:
    case VAR73:
    case VAR74:
    case VAR75:
    case VAR76:
    case VAR77:
    case VAR78:
    case VAR79:
    case VAR80:
    case VAR81:
    case VAR82:
    case VAR83:
    case VAR84:
    case VAR85:
    case VAR86:
    case VAR87:
        return &VAR5;
    case VAR88:
        return &VAR11;
    case VAR89:
    case VAR90:
        return &VAR6;
    case VAR91:
    case VAR92:
        return &VAR7;
    case VAR93:
    case VAR94:
    {
        static const TCGTargetOpDef VAR95 = {.VAR4 = {"", "", ""}};
        return &VAR95;
    }
    case VAR96:
    case VAR97:
    {
        static const TCGTargetOpDef VAR98 = {.VAR4 = {"", "", ""}};
        static const TCGTargetOpDef VAR99 = {.VAR4 = {"", "", ""}};
        return (VAR45 & VAR65 ? &VAR99 : &VAR98);
    }
    case VAR100:
    case VAR101:
    {
        static const TCGTargetOpDef VAR102 = {.VAR4 = {"", "", "", "", ""}};
        static const TCGTargetOpDef VAR103 = {.VAR4 = {"", "", "", "", ""}};
        return (VAR45 & VAR65 ? &VAR103 : &VAR102);
    }
    case VAR104:
    case VAR105:
    case VAR106:
    case VAR107:
    {
        static const TCGTargetOpDef VAR108 = {.VAR4 = {"", "", "", "", ""}};
        return &VAR108;
    }
    case VAR109:
    {
        static const TCGTargetOpDef VAR110 = {.VAR4 = {"", "", "", ""}};
        return &VAR110;
    }
    case VAR111:
    case VAR112:
        return (VAR45 & VAR65 ? &VAR18 : &VAR17);
    case VAR113:
    case VAR114:
        return (VAR45 & VAR65 ? &VAR19 : &VAR17);
    default:
        break;
    }
    return NULL;
}