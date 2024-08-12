static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6;
    uint32_t VAR7;
    VAR7 = (VAR3 & 0xfff) >> 2;
    switch (VAR7)
    {
    case VAR8:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR10:
    case VAR11:
    case VAR12:
    case VAR13:
    case VAR14:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR15:
    case VAR16:
        VAR6 = 0xc000ffee;
        break;
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
    case VAR21:
        VAR6 = VAR5->VAR9[VAR7];
        break;
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
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR54:
        VAR6 = FUN2(VAR55);
        break;
    case VAR56:
    case VAR57:
    case VAR58:
    case VAR59:
    case VAR60:
    case VAR61:
    case VAR62:
    case VAR63:
    case VAR64:
    case VAR65:
    case VAR66:
    case VAR67:
    case VAR68:
    case VAR69:
    case VAR70:
    case VAR71:
    case VAR72:
    case VAR73:
    case VAR74:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR75:
    case VAR76:
    case VAR77:
    case VAR78:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR79:
    case VAR80:
    case VAR81:
    case VAR82:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR83:
    case VAR84:
    case VAR85:
    case VAR86:
    case VAR87:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR88:
    case VAR89:
    case VAR90:
    case VAR91:
    case VAR92:
    case VAR93:
    case VAR94:
    case VAR95:
    case VAR96:
    case VAR97:
    case VAR98:
    case VAR99:
    case VAR100:
    case VAR101:
    case VAR102:
    case VAR103:
    case VAR104:
    case VAR105:
    case VAR106:
    case VAR107:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR108:
    case VAR109:
    case VAR110:
    case VAR111:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR112:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR113:
    case VAR114:
    case VAR115:
    case VAR116:
    case VAR117:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR118:
        VAR6 = VAR5->VAR119->VAR120;
        break;
    case VAR121:
        VAR6 = FUN3(VAR5->VAR119, 0);
        break;
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
    case VAR133:
    case VAR134:
    case VAR135:
    case VAR136:
    case VAR137:
    case VAR138:
    case VAR139:
    case VAR140:
    case VAR141:
    case VAR142:
    case VAR143:
    case VAR144:
    case VAR145:
    case VAR146:
    case VAR147:
    case VAR148:
    case VAR149:
    case VAR150:
    case VAR151:
    case VAR152:
    case VAR153:
    case VAR154:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    case VAR155:
        VAR6 = VAR5->VAR9[VAR7];
        FUN4("", VAR6);
        break;
    case VAR156:
        VAR6 = VAR5->VAR9[VAR7];
        FUN4("", VAR6);
        break;
    case VAR157:
        VAR6 = VAR5->VAR9[VAR7];
        FUN4("", VAR6);
        break;
    case VAR158:
        VAR6 = VAR5->VAR9[VAR7];
        FUN4("", VAR6);
        break;
    case VAR159:
    case VAR160:
    case VAR161:
    case VAR162:
    case VAR163:
    case VAR164:
        VAR6 = VAR5->VAR9[VAR7];
        break;
    default:
        VAR6 = VAR5->VAR9[VAR7];
        FUN4("", (int)VAR3);
        break;
    }
    if (!(VAR5->VAR9[VAR122] & 1))
        VAR6 = FUN5(VAR6);
    return VAR6;
}