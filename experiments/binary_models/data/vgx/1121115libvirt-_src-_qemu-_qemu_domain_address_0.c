static VAR1
FUN1(VAR2 *VAR3,
virDomainPCIConnectFlags VAR4,
virDomainPCIConnectFlags VAR5)
{
virDomainPCIConnectFlags VAR6 = (VAR7 |
VAR8);

switch ((VAR9)VAR3->VAR10) {
case VAR11: {
VAR12 *VAR13 = VAR3->VAR14.VAR15;

switch ((VAR16)VAR13->VAR10) {
case VAR17:
return FUN2(VAR13->VAR18);

case VAR19:
return VAR6;

case VAR20:
switch ((VAR21) VAR13->VAR18) {
case VAR22:

return VAR6;

case VAR23:
case VAR24:
return VAR4;

case VAR25:
case VAR26:
case VAR27:
case VAR28:
case VAR29:
case VAR30:
case VAR31:
case VAR32:
case VAR33:
return VAR6;

case VAR34: 
case VAR35: 
case VAR36:
case VAR37:
return 0;
}
break;

case VAR38:
return VAR6;

case VAR39:
switch ((VAR40) VAR13->VAR18) {
case VAR41:
case VAR42:
return 0;

case VAR43:
case VAR44:
return VAR5;


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
return VAR6;

case VAR55:
return 0;
}
break;

case VAR56:
switch ((VAR57) VAR13->VAR18) {
case VAR58:

return VAR6;

case VAR59:
case VAR60:
case VAR61:
return VAR5;

case VAR62:
return 0;
}
break;

case VAR63:
case VAR64:
case VAR65:
case VAR66:
case VAR67:
return 0;
}
}
break;

case VAR68:
switch ((VAR69) VAR3->VAR14.VAR70->VAR71) {
case VAR72:
case VAR73:
case VAR74:

switch (VAR3->VAR14.VAR70->VAR18) {
case VAR75:

return VAR6;
case VAR76:
case VAR77:
case VAR78:
return VAR5;
case VAR79:
break;
}
break;

case VAR80:

return VAR5;

case VAR81:
case VAR82:
case VAR83:
case VAR84:
return 0;
}

return 0;

case VAR85: {
VAR86 *VAR87 = VAR3->VAR14.VAR87;


if (VAR87->VAR10 == VAR88 ||
VAR87->VAR18 == VAR89) {
return 0;
}

if (VAR87->VAR18 == VAR90 ||
VAR87->VAR18 == VAR91)
return VAR5;

if (VAR87->VAR18 == VAR92)
return VAR6;

if (VAR87->VAR18 == VAR93)
return VAR4;


if (VAR87->VAR18 == VAR94)
return VAR4;

return VAR6;
}

case VAR95:
switch (VAR3->VAR14.VAR96->VAR18) {
case VAR97:
case VAR98:
case VAR99:
case VAR100:
return VAR6;

case VAR101:
case VAR102:
case VAR103:
case VAR104:
case VAR105:
return 0;
}
break;

case VAR106:
switch ((VAR107) VAR3->VAR14.VAR108->VAR109) {
case VAR110:

switch ((VAR111) VAR3->VAR14.VAR108->VAR18) {
case VAR112:

return VAR6;
case VAR113:
case VAR114:
case VAR115:
return VAR5;
case VAR116:
break;
}
return 0;

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
return 0;
}
break;

case VAR127: {
VAR128 *VAR129 = VAR3->VAR14.VAR129;
FUN3(VAR130) VAR131 = NULL;
VAR132 *VAR133 = &VAR129->VAR134.VAR135.VAR136.VAR137.VAR138;

if (!FUN4(VAR129) &&
(VAR129->VAR139 != VAR140 ||
(VAR129->VAR134.VAR135.VAR10 != VAR141 &&
VAR129->VAR134.VAR135.VAR10 != VAR142))) {
return 0;
}

if (VAR6 == VAR4) {

return VAR6;
}

if (FUN5(VAR129->VAR143)) {

return VAR4;
}


if (VAR129->VAR134.VAR135.VAR10 == VAR144)
return VAR4;


if (VAR129->VAR134.VAR135.VAR10 == VAR142) {
switch ((VAR145) VAR129->VAR134.VAR135.VAR136.VAR146.VAR18) {
case VAR147:

return VAR6;
case VAR148:
case VAR149:
case VAR150:
return VAR5;
case VAR151:
break;
}
return 0;
}

if (!(VAR131 = FUN6(VAR133))) {

return VAR4;
}

if (FUN7(VAR131))
return VAR4;

return VAR6;
}

case VAR152:
switch (VAR3->VAR14.VAR153->VAR18) {
case VAR154:

return VAR6;
case VAR155:
case VAR156:
return VAR5;

case VAR157:
case VAR158:
case VAR159:
return 0;
}
break;

case VAR160:
switch ((VAR161) VAR3->VAR14.VAR162->VAR18) {
case VAR163:

return VAR6;
case VAR164:
case VAR165:
return VAR5;

case VAR166:
return 0;
}
break;

case VAR167:

switch ((VAR168) VAR3->VAR14.VAR169->VAR18) {
case VAR170:
return VAR6;

case VAR171:
case VAR172:
case VAR173:
case VAR174:
return 0;
}
break;

case VAR175:
switch ((VAR176)VAR3->VAR14.VAR177->VAR10) {
case VAR178:
return VAR5;

case VAR179:
case VAR180:
case VAR181:
case VAR182:
case VAR183:
case VAR184:
case VAR185:
return VAR6;

case VAR186:
return VAR4;

case VAR187:
case VAR188:
case VAR189:
case VAR190:
case VAR191:
return 0;
}
break;

case VAR192:
return VAR6;

case VAR193:
switch ((VAR194) VAR3->VAR14.VAR195->VAR109) {
case VAR196:
switch ((VAR197) VAR3->VAR14.VAR195->VAR18) {
case VAR198:

return VAR6;
case VAR199:
case VAR200:
case VAR201:
return VAR5;
case VAR202:
break;
}
return 0;

case VAR203:
case VAR204:
case VAR205:
case VAR206:
case VAR207:
case VAR208:
return 0;
}
break;

case VAR209:
switch ((VAR210)VAR3->VAR14.VAR211->VAR212) {
case VAR213:
return VAR6;

case VAR214:
case VAR215:
case VAR216:
case VAR217:
case VAR218:
case VAR219:
case VAR220:
case VAR221:
return 0;
}
break;

case VAR222:
switch (VAR3->VAR14.VAR223->VAR18) {
case VAR224:
return VAR5 | VAR225;

case VAR226:
case VAR227:
case VAR228:

return 0;
}
break;

case VAR229:
switch ((VAR230) VAR3->VAR14.VAR231->VAR18) {
case VAR232:

return VAR6;
case VAR233:
case VAR234:
return VAR5;

case VAR235:
case VAR236:
return 0;
}
break;

case VAR237:
switch (VAR3->VAR14.VAR238->VAR18) {
case VAR239:
case VAR240:
return VAR5;

case VAR241:
case VAR242:
case VAR243:
case VAR244:
case VAR245:
return 0;
}
break;

case VAR246:
switch (VAR3->VAR14.VAR247->VAR18) {
case VAR248:
return VAR6;
case VAR249:
return 0;
}
break;

case VAR250:
switch ((VAR251) VAR3->VAR14.VAR252->VAR18) {
case VAR253:
return VAR6 | VAR225;

case VAR254:
case VAR255:
case VAR256:
case VAR257:
case VAR258:
case VAR259:
return 0;
}
break;


case VAR260:
case VAR261:
case VAR262:
case VAR263:
case VAR264:

case VAR265:
case VAR266:
case VAR267:
case VAR268:
case VAR269:
return 0;
}


return 0;
}