FSTATUS FUN1 (VAR1 *VAR2, VAR3 *VAR4, boolean VAR5, int VAR6)

{	uint32_t VAR7 = 0;
uint32_t VAR8,VAR9,VAR10;
int VAR11 = -1;
int VAR12[VAR13] = {0};
uint64 VAR14[2];
boolean VAR15 = VAR16;


for (VAR9=0; VAR9 < VAR4->VAR17 && VAR9 < VAR13; VAR9++) {
if (!FUN2(VAR2, VAR4,VAR9))
continue;
VAR15 = VAR16;
for (VAR8 = 0; (VAR8 < VAR2->VAR18 && VAR2->VAR18 <= VAR19); VAR8++) {
FUN3(&VAR14[0], &VAR14[1], VAR2->VAR20[VAR8].VAR20, NULL, VAR16);



if (FUN4(&VAR4->VAR21[VAR9], VAR14[0], VAR14[1]))
continue;
else if (VAR4->VAR21[VAR9].VAR22.VAR23){

boolean VAR24=VAR25;
for (VAR10=0; VAR10 < VAR4->VAR17 && VAR10 < VAR13; VAR10++) {
if (VAR9==VAR10) continue;
if (FUN4(&VAR4->VAR21[VAR10], VAR14[0], VAR14[1])) {
VAR24=VAR16;
break;
}
}
if (VAR24) {
VAR15=VAR25;
break;
}
}
else {
VAR15=VAR25;
break;
}
}
if (VAR15) {
VAR12[VAR9] = 1;
VAR7++;
if (VAR11 == -1) VAR11 = VAR9; 
}
}

if (VAR6 && VAR7 > 1) { 
return VAR26;
}

if (VAR7 == 0) {
return VAR27;
}


for (; VAR11 < VAR4->VAR17 && VAR11 < VAR13 && VAR7 > 0; ++VAR11) {
if (VAR12[VAR11] != 0) {

if (!FUN5(VAR2, VAR4, VAR11)) {
return VAR28;
}
--VAR7;
}
}
return VAR29;
}