static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint32_t VAR6;
    if (!(VAR5->VAR7[VAR8] & 1))
        VAR3 = FUN2(VAR3);
    VAR6 = (VAR2 & 0xfff) >> 2;
    switch (VAR6)
    {
    case VAR9:
        VAR5->VAR7[VAR9] = VAR3;
        break;
    case VAR10:
        break;
    case VAR11:
        VAR5->VAR7[VAR11] = VAR3 & 0x00007fff;
        VAR5->VAR7[VAR12] = VAR3 & 0x000007ff;
        FUN3(VAR5);
        break;
    case VAR13:
        VAR5->VAR7[VAR13] = VAR3 & 0x00007fff;
        VAR5->VAR7[VAR14] = VAR3 & 0x000007ff;
        break;
    case VAR15:
        VAR5->VAR7[VAR15] = VAR3 & 0x00007fff;
        VAR5->VAR7[VAR16] = VAR3 & 0x000007ff;
        break;
    case VAR17:
        VAR5->VAR7[VAR17] = VAR3 & 0x00007fff;
        VAR5->VAR7[VAR18] = VAR3 & 0x000007ff;
        break;
    case VAR19:
        VAR5->VAR7[VAR19] = VAR3 & 0x00007fff;
        VAR5->VAR7[VAR20] = VAR3 & 0x000007ff;
        break;
    case VAR21:
        VAR5->VAR7[VAR21] = VAR3 & 0x00007fff;
        VAR5->VAR7[VAR22] = VAR3 & 0x000007ff;
        break;
    case VAR23:
        VAR5->VAR7[VAR6] = VAR3 & 0x0000007f;
        FUN3(VAR5);
        break;
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
        VAR5->VAR7[VAR6] = VAR3 & 0x0000007f;
        break;
    case VAR29:
        VAR5->VAR7[VAR6] = VAR3 & 0x00007fff;
        FUN4(VAR5);
        break;
    case VAR12:
    case VAR14:
    case VAR16:
    case VAR18:
    case VAR20:
    case VAR22:
        VAR5->VAR7[VAR6] = VAR3 & 0x000007ff;
        break;
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
        break;
    case VAR35:
    case VAR36:
        break;
    case VAR37:
    case VAR38:
    case VAR39:
    case VAR40:
    case VAR41:
    case VAR42:
    case VAR43:
    case VAR44:
    case VAR45:
    case VAR46:
    case VAR47:
    case VAR48:
    case VAR49:
    case VAR50:
    case VAR51:
    case VAR52:
    case VAR53:
    case VAR54:
    case VAR55:
    case VAR56:
    case VAR57:
    case VAR58:
    case VAR59:
        VAR5->VAR7[VAR6] = VAR3;
        break;
    case VAR60:
    case VAR61:
    case VAR62:
    case VAR63:
    case VAR64:
        FUN5("", VAR6 << 2);
        break;
    case VAR65:
    case VAR66:
    case VAR67:
    case VAR68:
    case VAR69:
        break;
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
    case VAR88:
    case VAR89:
        FUN5("", VAR6 << 2);
        break;
    case VAR90:
    case VAR91:
    case VAR92:
    case VAR93:
        FUN5("", VAR6 << 2);
        break;
    case VAR94:
        FUN5("", VAR6 << 2);
        break;
    case VAR95:
    case VAR96:
    case VAR97:
    case VAR98:
    case VAR99:
        FUN5("", VAR6 << 2);
        break;
    case VAR8:
    case VAR100:
        VAR5->VAR7[VAR6] = VAR3 & 0x0401fc0f;
        break;
    case VAR101:
    case VAR102:
    case VAR103:
    case VAR104:
    case VAR105:
    case VAR106:
    case VAR107:
    case VAR108:
    case VAR109:
    case VAR110:
    case VAR111:
    case VAR112:
    case VAR113:
    case VAR114:
    case VAR115:
    case VAR116:
    case VAR117:
    case VAR118:
    case VAR119:
    case VAR120:
    case VAR121:
    case VAR122:
    case VAR123:
    case VAR124:
    case VAR125:
    case VAR126:
    case VAR127:
    case VAR128:
    case VAR129:
    case VAR130:
    case VAR131:
    case VAR132:
        break;
    case VAR133:
        VAR5->VAR134->VAR135 = VAR3 & 0x80fffffc;
        break;
    case VAR136:
        FUN6(VAR5->VAR134, 0, VAR3);
        break;
    case VAR137:
        VAR5->VAR7[VAR6] = ~(~(VAR5->VAR7[VAR6]) | ~(VAR3 & 0xfffffffe));
        VAR5->VAR7[VAR6] |= !!(VAR5->VAR7[VAR6] & 0xfffffffe);
        FUN5("", VAR3);
        break;
    case VAR138:
        VAR5->VAR7[VAR6] = VAR3 & 0x3c3ffffe;
        FUN5("", VAR3);
        break;
    case VAR139:
        VAR5->VAR7[VAR6] = VAR3 & 0x03fffffe;
        FUN5("", VAR3);
        break;
    case VAR140:
        VAR5->VAR7[VAR6] = VAR3 & 0x0000003f;
        FUN5("", VAR3);
        break;
    case VAR141:
    case VAR142:
    case VAR143:
    case VAR144:
    case VAR145:
    case VAR146:
        break;
    case VAR147:
    case VAR148:
    case VAR149:
    case VAR150:
        VAR5->VAR7[VAR6] = VAR3;
        break;
    default:
        FUN5("", (int)VAR2);
        break;
    }
}