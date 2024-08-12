static VAR1 *FUN1(
const char *VAR2,  
VAR1 *VAR3,     
VAR1 *VAR4,    
VAR1 *VAR5,    
AIWCReturnType VAR6, 
bool VAR7, 
bool VAR8   
) {
if (!FUN2(VAR3)) {
FUN3(VAR9, "", VAR2);
return 0;
}
if (!FUN4(VAR4)) {
FUN3(VAR9, "", VAR2);
return 0;
}
if (!FUN5(VAR5) && !FUN6(VAR5)) {
FUN3(VAR9, "", VAR2);
return 0;
}
VAR1 *VAR10 = 0;
if (VAR6 == VAR11)
VAR10 = FUN7();
bool VAR12 = false;
if (VAR10 || VAR6!=VAR11) {
JsvIterator VAR13;
FUN8(&VAR13, VAR3, VAR14);
while (FUN9(&VAR13) && !VAR12) {
VAR1 *VAR15 = FUN10(&VAR13);
if (FUN11(VAR15)) {
JsVarInt VAR16 = FUN12(VAR15);
VAR1 *VAR17, *VAR18[3], *VAR19;
VAR17 = FUN13(&VAR13);
VAR18[0] = VAR17;
VAR18[1] = FUN14(VAR16); 
VAR18[2] = VAR3;
FUN15(&VAR13); 
VAR19 = FUN16(VAR4, 0, VAR5, false, 3, VAR18);
FUN17(VAR18[1]);
if (VAR19) {
bool VAR20;
if (VAR7)
VAR20 = (FUN18(VAR19) == VAR8);
if (VAR6 == VAR11) {
if (VAR7) { 
if (VAR20) {
FUN19(VAR10, VAR17);
}
} else { 
VAR1 *VAR2 = FUN14(VAR16);
if (VAR2) { 
FUN20(VAR2, VAR19);
FUN21(VAR10, VAR2);
FUN17(VAR2);
}
}
} else if (VAR7) {
if (VAR6 == VAR21 ||
VAR6 == VAR22) {
if (VAR20) {
VAR10 = (VAR6 == VAR21) ?
FUN22(VAR17) :
FUN14(FUN12(VAR15));
VAR12 = true;
}
} else if (!VAR20) 
VAR12 = true;
}
FUN17(VAR19);
}
FUN17(VAR17);
} else {

FUN15(&VAR13);
}
FUN17(VAR15);
}
FUN23(&VAR13);
}

if (VAR6 == VAR23 && VAR7) {
VAR10 = FUN24(VAR12 != VAR8);
}
return VAR10;
}