static int FUN1(VAR1 *VAR2, VAR3 *VAR4,
uint32_t VAR5, uint32_t VAR6,
uint32_t VAR7)
{
VAR3 **VAR8;		
int       *VAR9;		
VAR10  *VAR11;		
int       *VAR12;		

VAR3  *VAR13   = NULL;
int VAR14;			
int VAR15, VAR16 = 0;
uint32_t VAR17, VAR18 = 0;
int VAR19, VAR20, VAR21 = VAR22;
int VAR23, VAR24, VAR25;
int VAR26, VAR27;
int VAR28 = 0;
bool VAR29;
long VAR30 = 0;
int VAR31 = 0;	

if (VAR2->VAR32) {
time_t     VAR33;
VAR33 = FUN2(NULL);
if (VAR2->VAR34 == 0)
VAR2->VAR34 = VAR33;
VAR30 = VAR33 - VAR2->VAR34;
}

VAR14 = VAR2->VAR35->VAR36;
if (VAR7 > VAR5)
VAR17 = VAR7;
else
VAR17 = VAR5;


VAR8   = xcalloc(VAR37, sizeof(VAR3 *));
VAR9  = xcalloc(VAR37, sizeof(int));
VAR11 = xcalloc(VAR37, sizeof(VAR10));
VAR12 = xcalloc(VAR37, sizeof(int));
if (VAR2->VAR35->VAR38) {
VAR13 = FUN3(VAR2->VAR35->VAR38);
VAR19 = FUN4(VAR13);
if (VAR19 > (int)VAR6) {
FUN5("",
VAR2, VAR19, VAR6);
VAR21 = VAR39;
goto VAR40;
}
}


VAR29 = false;
for (VAR19=0; VAR19<VAR37; VAR19++) {
VAR8[VAR19] = FUN3(VAR41[VAR19].
VAR42);
FUN6(VAR8[VAR19], VAR4);
if (VAR13 &&
!FUN7(VAR13, VAR8[VAR19]))
VAR11[VAR19] = 0;
else {
VAR11[VAR19] = FUN4(VAR8[VAR19]);
VAR29 = true;
}
}
FUN8(VAR4);


for (VAR19=0; VAR19<VAR37; VAR19++) {
char *VAR43 = NULL;
if (VAR11[VAR19])
VAR43 = FUN9(VAR8[VAR19]);
FUN10("",
VAR41[VAR19].VAR44,
VAR11[VAR19], VAR43,
VAR41[VAR19].VAR45);
FUN11(VAR43);
}


if (!VAR29) {
FUN5("",
VAR2);
VAR21 = VAR39;
goto VAR40;
}


for (VAR19 = 0; FUN12(&VAR19); VAR19++) {
VAR15 = FUN13(VAR2, VAR19);
for (VAR20=0; VAR20<VAR37; VAR20++) {
if (FUN14(VAR8[VAR20], VAR19)) {
VAR9[VAR20] += VAR15;
}
}
}



VAR23 = -1;
for (VAR20 = 0; VAR20 < VAR37; VAR20++) {
FUN15("", VAR20,
VAR11[VAR20], VAR9[VAR20]);
if ((VAR9[VAR20]  < VAR14) ||
(VAR11[VAR20] < VAR5))
continue;
if ((VAR23 == -1) ||
(VAR41[VAR20].VAR46 <
VAR41[VAR23].VAR46) ||
((VAR41[VAR20].VAR46 ==
VAR41[VAR23].VAR46) &&
(VAR11[VAR20] < VAR11[VAR23])))
VAR23 = VAR20;
}
if (VAR23 == -1) {
FUN10("",
VAR47, VAR2);
VAR21 = VAR39;
goto VAR40;
}



for (VAR20 = 0; VAR20 < VAR37; VAR20++) {
if ((VAR41[VAR20].VAR46 > 0) ||
(!FUN7(VAR8[VAR20],
VAR8[VAR23]))) {
VAR11[VAR20] = 0;
} else if (VAR13) {

VAR11[VAR20] = FUN4(VAR8[VAR20]);
}
}

if (VAR13) {

for (VAR20 = 0; VAR20 < VAR37; VAR20++) {
if (VAR18 > VAR6)
break;
if (VAR11[VAR20] == 0 ||
FUN16(VAR13,
VAR8[VAR20]) == 0)
continue;


VAR24 = FUN17(VAR8[VAR20]);
if (VAR24 < 0) {
VAR11[VAR20] = 0;
continue;
}
VAR25  = FUN18(VAR8[VAR20]);
for (VAR19=VAR24; VAR19<=VAR25; VAR19++) {
if (!FUN14(VAR8[VAR20], VAR19))
continue;
if (!FUN14(VAR13, VAR19)) {

continue;
}

FUN19(VAR8[VAR20], VAR19);
VAR11[VAR20]--;
VAR15 = FUN13(VAR2, VAR19);
VAR9[VAR20] -= VAR15;

if (FUN14(VAR4, VAR19)) {

continue;
}

VAR12[VAR20] = 1;
FUN20(VAR4, VAR19);
VAR18++;
VAR14 -= VAR15;
VAR16 += FUN21(VAR19);
}
}

for (VAR20=0; VAR20<VAR37; VAR20++) {
if ((VAR18 > VAR6) ||
((VAR18 >= VAR17) && (VAR14 <= 0)))
break;
if (VAR12[VAR20] == 0)
continue;


VAR24 = FUN17(VAR8[VAR20]);
if (VAR24 < 0) {
VAR11[VAR20] = 0;
continue;
}
VAR25  = FUN18(VAR8[VAR20]);
for (VAR19=VAR24; VAR19<=VAR25; VAR19++) {
if (!FUN14(VAR8[VAR20], VAR19))
continue;


if (FUN14(VAR4, VAR19)) {

continue;
}

FUN20(VAR4, VAR19);
VAR18++;
VAR14 -= FUN13(VAR2, VAR19);
VAR16 += FUN21(VAR19);
if ((VAR18 > VAR6) ||
((VAR18 >= VAR17) &&
(VAR14 <= 0)))
break;
}
VAR11[VAR20] = 0; 
}
}




while ((VAR18 <= VAR6) &&
((VAR18 < VAR17) || (VAR14 > 0))) {
VAR27 = VAR26 = 0;
for (VAR20=0; VAR20<VAR37; VAR20++) {
if (VAR11[VAR20] == 0)
continue;

if ((VAR26 == 0) ||
(!VAR12[VAR28] &&
VAR12[VAR20]) ||
(VAR9[VAR20] < VAR27)) {
VAR27 =  VAR9[VAR20];
VAR26 = VAR11[VAR20];
VAR28 = VAR20;
}
}
FUN10(""
"", VAR47, VAR28,
VAR26, VAR27, VAR18);
if (VAR26 == 0)
break;


VAR24 = FUN17(VAR8[VAR28]);
if (VAR24 < 0) {
VAR11[VAR28] = 0;
continue;
}
VAR25  = FUN18(VAR8[VAR28]);
for (VAR19=VAR24; VAR19<=VAR25; VAR19++) {
if (!FUN14(VAR8[VAR28], VAR19))
continue;

if (FUN14(VAR4, VAR19)) {

continue;
}

VAR12[VAR28] = 1;
FUN20(VAR4, VAR19);
VAR18++;
VAR14 -= FUN13(VAR2, VAR19);
VAR16 += FUN21(VAR19);
if ((VAR18 > VAR6) ||
((VAR18 >= VAR17) && (VAR14 <= 0)))
break;
}
VAR11[VAR28] = 0;
VAR31++;
if (VAR2->VAR32 > 0) {
if (VAR30 >= VAR2->VAR48) {
VAR2->VAR49 = true;
FUN22("",
VAR2, VAR30,
VAR31);
} else if (VAR31 > VAR2->VAR32) {

VAR2->VAR49 = false;
FUN22("",
VAR2, VAR30,
VAR2->VAR32,
VAR31,
VAR2->VAR48);
} else {
VAR2->VAR49 = true;
}
}
}
if ((VAR18 <= VAR6) && (VAR14 <= 0) &&
(VAR18 >= VAR5)) {
VAR21 = VAR22;
} else
VAR21 = VAR39;

VAR40:	if (VAR21 == VAR22) {

VAR2->VAR16 = VAR16;
} else if (VAR18 > VAR6)
FUN5("", VAR2);
FUN23(VAR13);
for (VAR19=0; VAR19<VAR37; VAR19++)
FUN23(VAR8[VAR19]);
FUN11(VAR8);
FUN11(VAR9);
FUN11(VAR11);
FUN11(VAR12);

return VAR21;
}