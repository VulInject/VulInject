static int FUN1(u64 VAR1[], int VAR2,
unsigned int VAR3[], unsigned long VAR4[], struct VAR5 *VAR6[])
{
unsigned long VAR7 = 0;
unsigned long VAR8 = VAR9 | VAR10;
unsigned int VAR11, VAR12, VAR13, VAR14;
unsigned int VAR15, VAR16;
int VAR17, VAR18, VAR19, VAR20;
unsigned int VAR21 = 0;
unsigned int VAR22[2];
unsigned char VAR23[4];
unsigned char VAR24[16];
int VAR25;

if (VAR2 > 6)
return -1;


VAR22[0] = VAR22[1] = 0;
memset(VAR23, 0, sizeof(VAR23));
memset(VAR24, 0, sizeof(VAR24));
for (VAR17 = 0; VAR17 < VAR2; ++VAR17) {
VAR11 = (VAR1[VAR17] >> VAR26) & VAR27;
if (VAR11) {
if (VAR11 > 6)
return -1;
if (VAR21 & (1 << (VAR11 - 1)))
return -1;
VAR21 |= 1 << (VAR11 - 1);

if (VAR11 <= 4)
++VAR22[(VAR11 - 1) >> 1];
}
if (VAR1[VAR17] & VAR28) {
VAR12 = (VAR1[VAR17] >> VAR29) & VAR30;
VAR13 = (VAR1[VAR17] >> VAR31) & VAR32;
if (VAR12 > VAR33)
return -1;
if (VAR12 == VAR34)
VAR12 = VAR35;
if (VAR13 >= 4) {
if (VAR12 != VAR36)
return -1;
++VAR12;
VAR13 &= 3;
}
if (!VAR11)
++VAR22[VAR13 & 1];
if (VAR23[VAR13] && VAR23[VAR13] != VAR12)
return -1;
VAR23[VAR13] = VAR12;
VAR24[VAR12] = 1;
}
}
if (VAR22[0] > 2 || VAR22[1] > 2)
return -1;


if (VAR24[VAR35] &
(VAR24[VAR37] | VAR24[VAR38] | VAR24[VAR39])) {
VAR24[VAR34] = 1;	
VAR24[VAR35] = 0;
}

VAR25 = 0;
for (VAR17 = VAR37; VAR17 <= VAR39; ++VAR17) {
if (!VAR24[VAR17])
continue;
if (VAR25++)
return -1;
VAR7 |= (unsigned long)VAR17 << VAR40;
}
VAR25 = 0;
for (; VAR17 <= VAR41; ++VAR17) {
if (!VAR24[VAR17])
continue;
if (VAR25++)
return -1;
VAR7 |= (unsigned long)(VAR17 & 3) << VAR42;
}
if (VAR25 > 1)
return -1;


for (VAR13 = 0; VAR13 < 4; ++VAR13) {
VAR12 = VAR23[VAR13];
if (!VAR12)
continue;
if (VAR12 == VAR35 && VAR24[VAR34]) {

VAR12 = VAR34;
} else if (VAR12 == VAR36 + 1) {

VAR7 |= 1ul << (VAR43 + 3 - VAR13);
}
VAR15 = VAR12 >> 2;
VAR7 |= (unsigned long)VAR15
<< (VAR44 - 2 * VAR13);
}


for (VAR17 = 0; VAR17 < VAR2; ++VAR17) {
VAR11 = (VAR1[VAR17] >> VAR26) & VAR27;
VAR12 = (VAR1[VAR17] >> VAR29) & VAR30;
VAR13 = (VAR1[VAR17] >> VAR31) & VAR32;
VAR14 = VAR1[VAR17] & VAR45;
VAR18 = VAR1[VAR17] & VAR28;
if (!VAR11) {

for (VAR11 = 0; VAR11 < 4; ++VAR11) {
if (VAR21 & (1 << VAR11))
continue;
VAR16 = (VAR11 >> 1) & 1;
if (VAR18) {
if (VAR16 == (VAR13 & 1))
break;
} else if (VAR22[VAR16] < 2) {
++VAR22[VAR16];
break;
}
}
VAR21 |= 1 << VAR11;
} else if (VAR11 <= 4) {

--VAR11;
if ((VAR14 == 8 || VAR14 == 0x10) && VAR18 && (VAR13 & 2))

VAR7 |= 1ul << (VAR46 - VAR11);
} else {

--VAR11;
}
if (VAR18 && VAR12 == VAR41) {
VAR19 = VAR14 & 7;
VAR20 = (VAR1[VAR17] >> VAR47) & VAR48;
VAR7 |= (unsigned long)VAR20 << VAR49[VAR19];
}
if (FUN2(VAR1[VAR17]))
VAR8 |= VAR50;
if (VAR11 <= 3)
VAR7 |= VAR14 << FUN3(VAR11);
VAR3[VAR17] = VAR11;
}


VAR4[0] = 0;
if (VAR21 & 1)
VAR4[0] = VAR51;
if (VAR21 & 0x3e)
VAR4[0] |= VAR52;
VAR4[1] = VAR7;
VAR4[2] = VAR8;
return 0;
}