static VAR1 FUN1(void *VAR2,
hwaddr VAR3, unsigned VAR4)
{
VAR5 *VAR6 = VAR2;
VAR7 *VAR8 = FUN2(VAR6);
uint32_t VAR9;
uint32_t VAR10 = VAR3 >> 2;

switch (VAR10) {


case VAR11:

VAR9 = VAR6->VAR12[VAR10];
break;


case VAR13:
case VAR14:
case VAR15:
case VAR16:
case VAR17:

VAR9 = VAR6->VAR12[VAR10];
break;


case VAR18:
case VAR19:

VAR9 = 0xc000ffee;
break;


case VAR20:
case VAR21:
case VAR22:
case VAR23:
case VAR24:

VAR9 = VAR6->VAR12[VAR10];
break;

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
case VAR54:
case VAR55:
case VAR56:
VAR9 = VAR6->VAR12[VAR10];
break;
case VAR57:

VAR9 = FUN3(VAR58);
break;


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
case VAR75:
case VAR76:
case VAR77:
VAR9 = VAR6->VAR12[VAR10];
break;


case VAR78:
case VAR79:
case VAR80:
case VAR81:
VAR9 = VAR6->VAR12[VAR10];
break;


case VAR82:
case VAR83:
case VAR84:
case VAR85:

VAR9 = VAR6->VAR12[VAR10];
break;


case VAR86:
case VAR87:
case VAR88:
case VAR89:
case VAR90:
VAR9 = VAR6->VAR12[VAR10];
break;


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
case VAR108:
case VAR109:
case VAR110:
VAR9 = VAR6->VAR12[VAR10];
break;


case VAR111:
case VAR112:
case VAR113:
case VAR114:
VAR9 = VAR6->VAR12[VAR10];
break;


case VAR115:
VAR9 = VAR6->VAR12[VAR10];
break;


case VAR116:
case VAR117:
case VAR118:
case VAR119:
case VAR120:
VAR9 = VAR6->VAR12[VAR10];
break;


case VAR121:
VAR9 = VAR8->VAR122;
break;
case VAR123:
if (!(VAR8->VAR122 & (1 << 31))) {
VAR9 = 0xffffffff;
} else {
VAR9 = FUN4(VAR8->VAR124, VAR8->VAR122, 4);
}
if (!(VAR6->VAR12[VAR125] & 1) && (VAR8->VAR122 & 0x00fff800)) {
VAR9 = FUN5(VAR9);
}
break;

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
case VAR155:
case VAR156:
case VAR157:
VAR9 = VAR6->VAR12[VAR10];
break;


case VAR158:
VAR9 = VAR6->VAR12[VAR10];
FUN6("", VAR4, VAR9);
break;
case VAR159:
VAR9 = VAR6->VAR12[VAR10];
FUN6("", VAR4, VAR9);
break;
case VAR160:
VAR9 = VAR6->VAR12[VAR10];
FUN6("", VAR4, VAR9);
break;
case VAR161:
VAR9 = VAR6->VAR12[VAR10];
FUN6("", VAR4, VAR9);
break;


case VAR162:
case VAR163:
case VAR164:
case VAR165:
case VAR166:
case VAR167:
VAR9 = VAR6->VAR12[VAR10];
break;

default:
VAR9 = VAR6->VAR12[VAR10];
FUN7(VAR168,
""
"",
VAR10 << 2, VAR4, VAR4 << 1, VAR9);
break;
}

if (!(VAR6->VAR12[VAR25] & 0x00001000)) {
VAR9 = FUN5(VAR9);
}
FUN8(VAR3, VAR9);

return VAR9;
}