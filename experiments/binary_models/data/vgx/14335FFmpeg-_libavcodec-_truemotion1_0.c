static int FUN1(VAR1 *VAR2)
{
int VAR3, VAR4;
int VAR5 = 0;
int VAR6;
struct frame_header VAR7;
uint8_t VAR8[128] = { 0 };  
const VAR9 *VAR10;

VAR7.VAR11 = ((VAR2->VAR12[0] >> 5) | (VAR2->VAR12[0] << 3)) & 0x7f;
if (VAR2->VAR12[0] < 0x10)
{
FUN2(VAR2->VAR13, VAR14, "", VAR2->VAR12[0]);
return VAR15;
}

if (VAR7.VAR11 + 1 > VAR2->VAR16) {
FUN2(VAR2->VAR13, VAR14, "");
return VAR15;
}


for (VAR3 = 1; VAR3 < VAR7.VAR11; VAR3++)
VAR8[VAR3 - 1] = VAR2->VAR12[VAR3] ^ VAR2->VAR12[VAR3 + 1];

VAR7.VAR17 = VAR8[0];
VAR7.VAR18 = VAR8[1];
VAR7.VAR19 = VAR8[2];
VAR7.VAR20 = FUN3(&VAR8[3]);
VAR7.VAR21 = FUN3(&VAR8[5]);
VAR7.VAR22 = FUN3(&VAR8[7]);
VAR7.VAR23 = VAR8[9];
VAR7.VAR24 = VAR8[10];
VAR7.VAR25 = VAR8[11];
VAR7.VAR26 = VAR8[12];


if (VAR7.VAR23 >= 2)
{
if (VAR7.VAR24 > 3)
{
FUN2(VAR2->VAR13, VAR14, "", VAR7.VAR24);
return VAR15;
} else if ((VAR7.VAR24 == 2) || (VAR7.VAR24 == 3)) {
VAR2->VAR25 = VAR7.VAR25;
if (!(VAR2->VAR25 & VAR27))
VAR2->VAR25 |= VAR28;
} else
VAR2->VAR25 = VAR28;
} else 
VAR2->VAR25 = VAR28;

if (VAR2->VAR25 & VAR29) {
FUN4(VAR2->VAR13, "");

return VAR30;
} else {
VAR2->VAR31 = VAR7.VAR21;
VAR2->VAR32 = VAR7.VAR20;
if (VAR7.VAR24 < 2) {
if ((VAR2->VAR31 < 213) && (VAR2->VAR32 >= 176))
{
VAR2->VAR25 |= VAR33;
FUN4(VAR2->VAR13, "");
}
}
}

if (VAR7.VAR17 >= 17) {
FUN2(VAR2->VAR13, VAR14, "", VAR7.VAR17);
return VAR15;
}

if ((VAR7.VAR18 != VAR2->VAR34) ||
(VAR7.VAR19 != VAR2->VAR35))
FUN5(VAR2, VAR7.VAR18);

if ((VAR7.VAR17 & 1) && VAR7.VAR24)
VAR10 = VAR36;
else {
if (VAR7.VAR19 > 0 && VAR7.VAR19 < 4)
VAR10 = VAR37[VAR7.VAR19 - 1];
else {
FUN2(VAR2->VAR13, VAR14, "", VAR7.VAR19);
return VAR15;
}
}

if (VAR38[VAR7.VAR17].VAR39 == VAR40) {
VAR6 = VAR41;
VAR5 = 1;
} else
VAR6 = VAR42; 

VAR2->VAR31 >>= VAR5;
if (VAR2->VAR31 & 1) {
FUN4(VAR2->VAR13, "");
return VAR30;
}

if (VAR2->VAR31 != VAR2->VAR13->VAR43 || VAR2->VAR32 != VAR2->VAR13->VAR44 ||
VAR6 != VAR2->VAR13->VAR45) {
FUN6(VAR2->VAR46);
VAR2->VAR13->VAR47 = (VAR48){ 1 << VAR5, 1 };
VAR2->VAR13->VAR45 = VAR6;

if ((VAR4 = FUN7(VAR2->VAR13, VAR2->VAR31, VAR2->VAR32)) < 0)
return VAR4;

FUN8(VAR2->VAR13, VAR2->VAR13->VAR47);

FUN9(&VAR2->VAR49, &VAR2->VAR50, VAR2->VAR13->VAR43 * sizeof(unsigned int));
if (!VAR2->VAR49)
return FUN10(VAR51);
}


VAR2->VAR52 = ((VAR2->VAR13->VAR43 >> (2 - VAR5)) + 7) >> 3;

if ((VAR7.VAR18 != VAR2->VAR34) || (VAR7.VAR19 != VAR2->VAR35))
{
if (VAR38[VAR7.VAR17].VAR39 == VAR40)
FUN11(VAR2, VAR10);
else
if (VAR2->VAR13->VAR45 == VAR42)
FUN12(VAR2, VAR10);
else
FUN13(VAR2, VAR10);
}


VAR2->VAR53 = VAR2->VAR12 + VAR7.VAR11;
if (VAR2->VAR25 & VAR28) {

VAR2->VAR54 = VAR2->VAR53;
if (VAR2->VAR13->VAR43 * VAR2->VAR13->VAR44 / 2048 + VAR7.VAR11 > VAR2->VAR16)
return VAR15;
} else {

VAR2->VAR54 = VAR2->VAR53 +
(VAR2->VAR52 * (VAR2->VAR13->VAR44 >> 2));
}
VAR2->VAR55 = VAR2->VAR16 - (VAR2->VAR54 - VAR2->VAR12);

VAR2->VAR34 = VAR7.VAR18;
VAR2->VAR35 = VAR7.VAR19;
VAR2->VAR17 = VAR7.VAR17;
VAR2->VAR56 = VAR38[VAR7.VAR17].VAR56;
VAR2->VAR57 = VAR38[VAR7.VAR17].VAR57;
VAR2->VAR58 = VAR38[VAR7.VAR17].VAR58;

if (VAR2->VAR13->VAR59 & VAR60)
FUN2(VAR2->VAR13, VAR61, "",
VAR2->VAR34, VAR2->VAR35, VAR2->VAR17, VAR2->VAR56,
VAR2->VAR57, VAR2->VAR58,
VAR2->VAR25 & VAR28 ? "" : "",
VAR2->VAR25 & VAR27 ? "" : "",
VAR2->VAR25 & VAR29 ? "" : "",
VAR2->VAR25 & VAR33 ? "" : "");

return VAR7.VAR11;
}