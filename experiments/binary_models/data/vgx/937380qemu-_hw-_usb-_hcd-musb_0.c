static void FUN1(void *VAR1, hwaddr VAR2, uint32_t VAR3)
{
VAR4 *VAR5 = (VAR4 *) VAR1;
int VAR6;

switch (VAR2) {
case VAR7:
VAR5->VAR8 = VAR3 & 0x7f;
break;
case VAR9:
VAR5->VAR10 = (VAR3 & 0xef) | (VAR5->VAR10 & 0x10);

if ((VAR3 & VAR11) && VAR5->VAR12.VAR13) {
FUN2(VAR5->VAR12.VAR13);

if ((VAR3 & VAR14) &&
VAR5->VAR12.VAR13->VAR15 == VAR16)
VAR5->VAR10 |= VAR17;	

}
if (VAR3 & VAR18) {


}
if (VAR3 & VAR19) {

}
break;
case VAR20:
break;
case VAR21:
VAR5->VAR22 = VAR3 & 0xff;
break;
case VAR23:
VAR5->VAR24 = VAR3 & 0xf;
break;
case VAR25:
break;

case VAR26 ... (VAR26 + 0xf):
FUN3(VAR5, VAR5->VAR24, VAR2 & 0xf, VAR3);
break;

case VAR27:
VAR5->VAR28 = !!(VAR3 & VAR29);
FUN4(VAR5,
!!VAR5->VAR12.VAR13,
!!(VAR5->VAR30 & VAR29));


VAR5->VAR30 &= ~VAR29;
VAR5->VAR30 |= VAR3 & VAR29;
break;

case VAR31:
case VAR32:
case VAR33:

break;

case (VAR33 | 1):
case (VAR27 | 1):
break;

case VAR34 ... (VAR34 + 0x7f):
VAR6 = (VAR2 >> 3) & 0xf;
FUN5(VAR5, VAR6, VAR2 & 0x7, VAR3);
break;

case VAR35 ... (VAR35 + 0xff):
VAR6 = (VAR2 >> 4) & 0xf;
FUN3(VAR5, VAR6, VAR2 & 0xf, VAR3);
break;

case VAR36 ... (VAR36 + 0x3f):
VAR6 = ((VAR2 - VAR36) >> 2) & 0xf;
FUN6(VAR5->VAR6 + VAR6, VAR3 & 0xff);
break;

default:
FUN7("", (int) VAR2);
break;
};
}