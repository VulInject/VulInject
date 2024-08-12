FUN1 (const char *VAR1,
register unsigned long int VAR2,
bfd_vma VAR3,
struct VAR4 *VAR5,
const struct VAR6 *VAR7)
{
int VAR8, VAR9;
unsigned int VAR10, VAR11, VAR12;

VAR10 = 0;

for (; *VAR1 != ''; VAR1++)
{
switch (*VAR1)
{
case '':
case '':
case '':
case '':
case '':
(*VAR5->VAR13) (VAR5->VAR14, "", *VAR1);
break;

case '':

VAR1++;
switch (*VAR1)
{
case '':

(*VAR5->VAR13) (VAR5->VAR14,
"");
return;

case '':
VAR10 = (VAR2 >> VAR15) & VAR16;
(*VAR5->VAR13) (VAR5->VAR14, "", VAR10);
break;

case '':
VAR11 = (VAR2 >> VAR17) & VAR18;
(*VAR5->VAR13) (VAR5->VAR14, "", VAR11 - VAR10 + 1);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR19) & VAR20);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR21) & VAR22);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR23) & VAR24);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR25) & VAR26);
break;

case '': 
VAR9 = ((VAR2 >> VAR27) & VAR28);
if (VAR9 & 0x10) { 
VAR9 |= ~VAR28;
}
(*VAR5->VAR13) (VAR5->VAR14, "", VAR9);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR29) & VAR30);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR31) & VAR32);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR33) & VAR34);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR35) & VAR36);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR37) & VAR38);
break;

case '': 
VAR9 = ((VAR2 >> VAR39) & VAR40);
if (VAR9 & 0x200) { 
VAR9 |= ~VAR40;
}
VAR5->VAR41 = (VAR9 << 2) + VAR3 + VAR42;
(*VAR5->VAR43) (VAR5->VAR41, VAR5);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "");
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
((VAR2 >> VAR44) & VAR45)+1);
break;

case '': 
VAR9 = ((VAR2 >> VAR46) & VAR47);
if (VAR9 & 0x200) { 
VAR9 |= ~VAR47;
}
(*VAR5->VAR13) (VAR5->VAR14, "", VAR9);
break;

case '': 
VAR9 = ((VAR2 >> VAR46) & VAR47);
if (VAR9 & 0x200) { 
VAR9 |= ~VAR47;
}
(*VAR5->VAR13) (VAR5->VAR14, "", VAR9 << 1);
break;

case '': 
VAR9 = ((VAR2 >> VAR46) & VAR47);
if (VAR9 & 0x200) { 
VAR9 |= ~VAR47;
}
(*VAR5->VAR13) (VAR5->VAR14, "", VAR9 << 2);
break;

case '': 
VAR9 = ((VAR2 >> VAR46) & VAR47);
if (VAR9 & 0x200) { 
VAR9 |= ~VAR47;
}
(*VAR5->VAR13) (VAR5->VAR14, "", VAR9 << 3);
break;

case '':
case '':
VAR12 = (VAR2 >> VAR48) & VAR49;
(*VAR5->VAR13) (VAR5->VAR14, "", VAR12 + 1);
break;

case '':
{
const struct VAR50 *VAR51;
unsigned int VAR52, VAR53;

VAR52 = (VAR2 >> VAR54) & VAR55;
VAR53 = (VAR2 >> VAR56) & VAR57;


VAR51 = FUN2(VAR58,
VAR59, VAR52, VAR53);
if (VAR51 != NULL)
(*VAR5->VAR13) (VAR5->VAR14, "", VAR51->VAR60);
else
(*VAR5->VAR13) (VAR5->VAR14, "", VAR52, VAR53);
break;
}

case '':
VAR10 = ((VAR2 >> VAR15) & VAR16) + 32;
(*VAR5->VAR13) (VAR5->VAR14, "", VAR10);
break;

case '':
VAR11 = ((VAR2 >> VAR17) & VAR18) + 32;
(*VAR5->VAR13) (VAR5->VAR14, "", VAR11 - VAR10 + 1);
break;

case '':
VAR12 = ((VAR2 >> VAR48) & VAR49) + 32;
(*VAR5->VAR13) (VAR5->VAR14, "", VAR12 + 1);
break;

case '':
switch (*(VAR1+1)) {
case '':
VAR1++;
VAR9 = VAR2 & ((1 << 18) - 1);
if (VAR9 & 0x20000) {
VAR9 |= ~0x1ffff;
}
break;
case '':
VAR1++;
VAR9 = VAR2 & ((1 << 19) - 1);
if (VAR9 & 0x40000) {
VAR9 |= ~0x3ffff;
}
break;
default:
VAR9 = (VAR2 >> VAR61) & VAR62;
if (VAR9 & 0x8000) {
VAR9 |= ~0xffff;
}
}

(*VAR5->VAR13) (VAR5->VAR14, "", VAR9);
break;

case '':

VAR9 = (VAR2 >> VAR63) & VAR64;
if (VAR9 & 0x2000000) {
VAR9 |= ~0x3FFFFFF;
}
VAR5->VAR41 = (VAR9 << 2) + VAR3 + VAR42;
(*VAR5->VAR43) (VAR5->VAR41, VAR5);
break;

case '': 
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR65[(VAR2 >> VAR27) &
VAR28]);
break;

case '': 
{
const struct VAR50 *VAR51;
unsigned int VAR52, VAR53;

VAR52 = (VAR2 >> VAR27) & VAR28;
VAR53 = (VAR2 >> VAR56) & VAR57;


VAR51 = FUN2(VAR58,
VAR59, VAR52, VAR53);
if (VAR51 != NULL)
(*VAR5->VAR13) (VAR5->VAR14, "", VAR51->VAR60);
else
(*VAR5->VAR13) (VAR5->VAR14, "", VAR52, VAR53);
break;
}

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR66[(VAR2 >> VAR67) & VAR68]);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR66[(VAR2 >> VAR69) & VAR70]);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR66[(VAR2 >> VAR71) & VAR72]);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR73[(VAR2 >> VAR74)
& VAR75]);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR73[(VAR2 >> VAR76)
& VAR77]);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR78[(VAR2 >> VAR79) & VAR80]);
break;

default:

(*VAR5->VAR13) (VAR5->VAR14,
"",
*VAR1);
return;
}
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR81) & VAR82);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR83) & VAR84);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR85) & VAR86);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR87) & VAR88);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR89) & VAR90);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR91) & VAR92);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR93) & VAR94);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR95) & VAR96);
break;

case '': 
VAR9 = ((VAR2 >> VAR97) & VAR98);
if (VAR9 & 0x20) 
VAR9 |= ~VAR98;
(*VAR5->VAR13) (VAR5->VAR14, "", VAR9);
break;

case '': 
VAR9 = ((VAR2 >> VAR99) & VAR100);
if (VAR9 & 0x40) 
VAR9 |= ~VAR100;
(*VAR5->VAR13) (VAR5->VAR14, "", VAR9);
break;

case ''':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR101) & VAR102);
break;

case '': 
VAR9 = ((VAR2 >> VAR46) & VAR47);
if (VAR9 & 0x200) 
VAR9 |= ~VAR47;
(*VAR5->VAR13) (VAR5->VAR14, "", VAR9);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR103) & VAR104);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR105) & VAR106);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR107) & VAR108);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR109) & VAR110);
break;

case '':

(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR54) & VAR55);
break;

case '':
case '':
case '':
case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR78[(VAR2 >> VAR89) & VAR90]);
break;

case '':
case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR78[(VAR2 >> VAR27) & VAR28]);
break;

case '':
case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR111) & VAR112);
break;

case '': 
case '':
VAR9 = (VAR2 >> VAR63) & VAR113;

if (VAR9 & 0x8000)
VAR9 |= ~0xffff;
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR9);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(unsigned int) ((VAR2 >> VAR114)
& VAR115));
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(unsigned int) ((VAR2 >> VAR116)
& VAR117));
break;

case '':
VAR5->VAR41 = (((VAR3 + 4) & ~(VAR118) 0x0fffffff)
| (((VAR2 >> VAR119) & VAR64) << 2));

if (VAR5->VAR120 == VAR121
&& strcmp (VAR7->VAR60, "") == 0)
VAR5->VAR41 |= 1;
(*VAR5->VAR43) (VAR5->VAR41, VAR5);
break;

case '':

VAR9 = (VAR2 >> VAR63) & VAR113;
if (VAR9 & 0x8000)
VAR9 |= ~0xffff;
VAR5->VAR41 = (VAR9 << 2) + VAR3 + VAR42;
(*VAR5->VAR43) (VAR5->VAR41, VAR5);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR78[(VAR2 >> VAR54) & VAR55]);
break;

case '':
{

unsigned int VAR122 = (VAR2 >> VAR54) & VAR55;
if (VAR122 == ((VAR2 >> VAR27) & VAR28))
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR78[VAR122]);
else
{

if (VAR122 == 0)
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR78[(VAR2 >> VAR27) & VAR28]);
else if (((VAR2 >> VAR27) & VAR28) == 0)
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR78[VAR122]);
else 
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR78[VAR122],
VAR78[(VAR2 >> VAR27) & VAR28]);
}
}
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "", VAR78[0]);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR15) & VAR16);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR123) & VAR124);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR125) & VAR126);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR127) & VAR128);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",

(VAR2 >> VAR129) & VAR130);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR131) & VAR132);
break;

case '':
case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR133[(VAR2 >> VAR69) & VAR70]);
break;

case '':
case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR133[(VAR2 >> VAR71) & VAR72]);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR133[(VAR2 >> VAR67) & VAR68]);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR133[(VAR2 >> VAR134) & VAR135]);
break;

case '':

(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR27) & VAR28);
break;

case '':

VAR8 = (VAR2 >> VAR136) & VAR137;
if (VAR8 == VAR138)
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR65[(VAR2 >> VAR54) & VAR55]);
else
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR54) & VAR55);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
VAR139[(VAR2 >> VAR54) & VAR55]);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14,
((VAR7->VAR140 & (VAR141 | VAR142)) != 0
? "" : ""),
(VAR2 >> VAR143) & VAR144);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR145) & VAR146);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR147) & VAR148);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR149) & VAR150);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR151) & VAR152);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR56) & VAR57);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR153) & VAR154);
break;

case '':
{
unsigned int VAR155 = (VAR2 >> VAR156) & VAR157;

if ((VAR155 & 0x10) == 0)
{
int VAR158;

VAR155 &= 0x0f;
for (VAR158 = 0; VAR158 < 3; VAR158++, VAR155 >>= 1)
if ((VAR155 & 1) == 0)
break;
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR71) & VAR72,
VAR155 >> 1);
}
else if ((VAR155 & 0x08) == 0)
{
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR71) & VAR72);
}
else
{
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR71) & VAR72);
}
}
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR67) & VAR68);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR69) & VAR70);
break;

case '':
(*VAR5->VAR13) (VAR5->VAR14, "",
(VAR2 >> VAR71) & VAR72);
break;

default:

(*VAR5->VAR13) (VAR5->VAR14,
"",
*VAR1);
return;
}
}
}