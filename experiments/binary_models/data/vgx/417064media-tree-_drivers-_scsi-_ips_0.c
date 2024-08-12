static int
FUN1(VAR1 * VAR2)
{
uint32_t VAR3;
uint32_t VAR4;
uint32_t VAR5;
uint32_t VAR6;
int VAR7;

FUN2("", 1);


for (VAR7 = 0; VAR7 < 45; VAR7++) {
VAR5 = FUN3(VAR2->VAR8 + VAR9);

if (VAR5 & VAR10)
break;


FUN4(VAR11);
}

if (VAR7 >= 45) {

FUN5(VAR12, VAR2->VAR13,
"");

return (0);
}

VAR3 = FUN3(VAR2->VAR8 + VAR14);

if (VAR3 == 0x4F00) {	
FUN5(VAR12, VAR2->VAR13,
"");


VAR5 = (VAR15) VAR10;
FUN6(VAR5, VAR2->VAR8 + VAR9);

for (VAR7 = 0; VAR7 < 120; VAR7++) {	
VAR3 = FUN3(VAR2->VAR8 + VAR14);
if (VAR3 != 0x4F00)
break;

FUN4(VAR11);
}

if (VAR7 >= 120) {
FUN5(VAR12, VAR2->VAR13,
"");
return (0);
}

}


VAR5 = (VAR15) VAR10;
FUN6(VAR5, VAR2->VAR8 + VAR9);

if (VAR3 < (VAR16 << 8)) {
FUN5(VAR12, VAR2->VAR13,
"", VAR3);

return (0);
}


for (VAR7 = 0; VAR7 < 240; VAR7++) {
VAR5 = FUN3(VAR2->VAR8 + VAR9);

if (VAR5 & VAR17)
break;


FUN4(VAR11);
}

if (VAR7 >= 240) {

FUN5(VAR12, VAR2->VAR13,
"");

return (0);
}

VAR4 = FUN3(VAR2->VAR8 + VAR18);


VAR5 = (VAR15) VAR17;
FUN6(VAR5, VAR2->VAR8 + VAR9);


VAR6 = FUN3(VAR2->VAR8 + VAR19);
VAR6 &= ~0x8;
FUN6(VAR6, VAR2->VAR8 + VAR19);




if (VAR3 == 0xEF10) {
if ((VAR4 == 0x000F) || (VAR4 == 0x0009))
VAR2->VAR20 = 1;
}

return (1);
}