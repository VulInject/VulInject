static void FUN1(const unsigned int VAR1,
VAR2 *VAR3,
const VAR4 *VAR5,
const unsigned int VAR6)
{
unsigned int VAR7 = 0;	
unsigned int VAR8 = 0;		
unsigned int VAR9 = 0;	
unsigned int VAR10;		
unsigned int VAR11 = 0;		
unsigned int VAR12 = 0;		
unsigned int VAR13;		
unsigned int VAR14;		
unsigned int VAR15;		
unsigned int VAR16 = 0;	
unsigned int VAR17 = 0;		
unsigned int VAR18 = 0;		
int VAR19;
unsigned int VAR20 = 1;	
unsigned int VAR21;		

VAR21 = VAR5->VAR22;
for (VAR19 = 0; VAR19 < VAR23; VAR19++) {
if (VAR5->VAR24[VAR19].VAR25
|| VAR5->VAR24[VAR19].VAR26) {
VAR9 = VAR27;
break;
}
}
VAR8 = VAR5->VAR28;
VAR10 = VAR5->VAR29 + 1;


VAR13 = VAR5->VAR30;
VAR13 = 0;

VAR11 = FUN2(VAR1) < 1249000000;

if (VAR5->VAR31)
VAR16 = 1;


if ((VAR32 != VAR33) &&
(!VAR5->VAR31)) {
VAR14 = 0;
} else {
VAR14 = VAR5->VAR14;
}

VAR12 = VAR5->VAR12 ? 1 : 0;


VAR15 = VAR5->VAR34;
VAR3->VAR35 = 0xDEADBEEF;
FUN3("", VAR3->VAR35);

VAR15 = 0;

VAR17 = VAR5->VAR36;
VAR18 = VAR5->VAR37 ? 1 : 0;
VAR3->VAR38 = (0
| ((VAR7 & 0x1) << 31)
| ((VAR8 & 0x1) << 30)
| ((VAR20 & 0x1) << 29)
| ((VAR21 & 0x3) << 26)
| ((VAR9 & 0x3) << 21)
| ((VAR10 & 0xf) << 12)
| ((VAR11 & 1) << 11)
| (VAR12 << 10)
| (VAR18 << 9)
| (VAR6 << 8)
| ((VAR13 & 0x1) << 6)
| ((VAR14 & 0x1) << 5)
| ((VAR15 & 0x1) << 4)
| ((VAR16 & 0x1) << 2)
| ((VAR17 & 0x1) << 0)
);
FUN3("", VAR3->VAR38);
}