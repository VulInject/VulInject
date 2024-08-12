FUN1 (VAR1 *VAR2, ULONG VAR3)
{
USHORT VAR4 = 0;

FUN2(VAR2);

if (VAR3 > 0xffffL && VAR2->VAR5 < 12) {
FUN3("");
return 0;
}

switch (VAR2->VAR5) {
case 0:
VAR4 = FUN4(VAR2->VAR6,  (VAR7) VAR3);
break;
case 2:
VAR4 = FUN5(VAR2->VAR6,  (VAR7) VAR3);
break;
case 4:
VAR4 = FUN6(VAR2->VAR6,  (VAR7) VAR3);
break;
case 6:
VAR4 = FUN7(VAR2->VAR6,  (VAR7) VAR3);
break;
case 12:
VAR4 = FUN8(VAR2->VAR6, (VAR8) VAR3);
break;
default:
FUN3("", VAR2->VAR5);
break;
}

return VAR4;
}



static unsigned char VAR9[2] = {0x00, 0x00};
static unsigned char VAR10[2] = {0xff, 0xff};
static unsigned char VAR11[4] = {0x00, 0x00, 0x00, 0x00};
static unsigned char VAR12[4] = {0x7f, 0xff, 0xff, 0xff};





static void
FUN9 (VAR13 *VAR14, uint16_t VAR15, VAR16 *VAR17)
{
VAR18 *VAR19;
uint16_t      VAR4, VAR20;

FUN2(VAR14);

if (!VAR17 || !(VAR17->VAR21 & VAR22)) {
for (VAR4 = 0; VAR4 < VAR15; VAR4++) {
VAR14[VAR4] = VAR4;
}

return;
}

memset(VAR14, 0, VAR15*sizeof(VAR13));

VAR19 = VAR17->VAR23;
if (!VAR19)
return;
switch (VAR19->VAR5) {
case 0:
{
VAR24   *VAR25; 

VAR25 = VAR19->VAR26.VAR27;
for (VAR4 = 1, VAR20 = 0; VAR20 < VAR19->VAR28; VAR20++) {
VAR14[VAR4] = VAR25[VAR20];
VAR4++;
}
}
break;
case 1:
{
VAR29 *VAR30;
card16      VAR31, VAR32;

VAR30 = VAR19->VAR26.VAR33;
for (VAR4 = 1, VAR20 = 0; VAR20 < VAR19->VAR28; VAR20++) {
VAR31   = VAR30[VAR20].VAR34;
VAR32 = VAR30[VAR20].VAR35 + 1; 
while (VAR32-- > 0 && VAR4 <= VAR15) {
VAR14[VAR4] = VAR31;
VAR4++;
VAR31++;
}
}
}
break;
case 2:
{
VAR36 *VAR30;
card16      VAR31, VAR32;

VAR30 = VAR19->VAR26.VAR37;
if (VAR19->VAR28 == 1 && VAR30[0].VAR34 == 1) {

for (VAR4 = 0; VAR4 < VAR15; VAR4++) {
VAR14[VAR4] = VAR4;
}
} else {

for (VAR4 = 1, VAR20 = 0; VAR20 < VAR19->VAR28; VAR20++) {
VAR31   = VAR30[VAR20].VAR34;
VAR32 = VAR30[VAR20].VAR35 + 1;
while (VAR32-- > 0 && VAR4 <= VAR15) {
VAR14[VAR4] = VAR31;
VAR4++;
VAR31++;
}
}
}
}
break;
default:
FUN3("", VAR19->VAR5);
break;
}

return;
}