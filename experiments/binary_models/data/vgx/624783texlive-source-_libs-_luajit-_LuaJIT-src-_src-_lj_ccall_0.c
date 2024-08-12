** FUN1 (VAR1) 2005-2017 Mike VAR2. See Copyright Notice in VAR3.VAR4








\
VAR5->VAR6 = (VAR7 > 8); \
if (VAR5->VAR6) VAR5->VAR8[VAR9++] = (VAR10)VAR11;




\
VAR5->VAR6 = !(VAR7 == 1 || VAR7 == 2 || VAR7 == 4 || VAR7 == 8); \
if (VAR5->VAR6) { \
if (VAR12 < VAR13) \
VAR5->VAR14[VAR12++] = (VAR10)VAR11; \
else \
VAR5->VAR8[VAR9++] = (VAR10)VAR11; \
} else {   \
VAR5->VAR15 = FUN2(VAR16, VAR17); \
}

if (VAR5->VAR15) VAR18 = (VAR19 *)&VAR5->VAR20[0]; \
memcpy(VAR11, VAR18, VAR17->VAR21);


VAR5->VAR6 = 1;   \
if (VAR12 < VAR13) \
VAR5->VAR14[VAR12++] = (VAR10)VAR11; \
else \
VAR5->VAR8[VAR9++] = (VAR10)VAR11;


\
VAR5->VAR6 = (VAR7 > 8); \
if (VAR5->VAR6) { \
if (VAR12 < VAR13) \
VAR5->VAR14[VAR12++] = (VAR10)VAR11; \
else \
VAR5->VAR8[VAR9++] = (VAR10)VAR11; \
}


if (!VAR5->VAR6) \
*(VAR22 *)VAR11 = *(VAR22 *)VAR18;  

VAR12 = VAR13;  

VAR23 = 1;  

if (!VAR23) {   \
if (VAR24 > 1) {   \
if (!VAR25) VAR12 = VAR13;   \
} else if (VAR12 + 1 <= VAR13) { \
VAR11 = &VAR5->VAR14[VAR12]; \
VAR12 += VAR24; \
goto VAR26; \
} \
}



\
VAR5->VAR6 = !(VAR7 == 1 || VAR7 == 2 || VAR7 == 4 || VAR7 == 8); \
if (VAR5->VAR6) VAR5->VAR14[VAR12++] = (VAR10)VAR11;


if (!VAR5->VAR6) \
*(VAR22 *)VAR11 = *(VAR22 *)VAR18;  

\
if (!(VAR7 == 1 || VAR7 == 2 || VAR7 == 4 || VAR7 == 8)) { \
VAR27 = FUN3(FUN4(VAR16, VAR28, VAR7)); \
VAR7 = VAR29;   \
}

\
if (VAR7 != 2*sizeof(float)) { \
VAR27 = FUN3(FUN4(VAR16, VAR28, VAR7)); \
VAR7 = VAR29; \
}


if (VAR23) { \
if (VAR12 < VAR13) { VAR11 = &VAR5->VAR20[VAR12++]; VAR30 = VAR12; goto VAR26; } \
} else { \
if (VAR12 < VAR13) { VAR11 = &VAR5->VAR14[VAR12++]; goto VAR26; } \
}



int VAR31[2]; VAR31[0] = VAR31[1] = 0; \
if (FUN2(VAR16, VAR17, VAR31, 0)) { \
VAR5->VAR6 = 1;   \
VAR5->VAR14[VAR12++] = (VAR10)VAR11; \
} else { \
VAR5->VAR6 = 0;   \
}

int VAR31[2]; VAR31[0] = VAR31[1] = 0; \
FUN2(VAR16, VAR17, VAR31, 0); \
FUN5(VAR5, VAR31, VAR11, VAR17->VAR21);

\
VAR5->VAR6 = 0;

if (VAR17->VAR21 == 2*sizeof(float)) {   \
*(VAR22 *)VAR11 = VAR5->VAR20[0].VAR32[0]; \
} else {   \
((VAR22 *)VAR11)[0] = VAR5->VAR20[0].VAR32[0]; \
((VAR22 *)VAR11)[1] = VAR5->VAR20[1].VAR32[0]; \
}

int VAR31[2]; VAR31[0] = VAR31[1] = 0; \
if (!FUN2(VAR16, VAR33, VAR31, 0)) { \
VAR5->VAR9 = VAR9; VAR5->VAR12 = VAR12; VAR5->VAR30 = VAR30; \
if (FUN6(VAR5, VAR16, VAR33, VAR31, VAR34, VAR35)) goto VAR36; \
VAR9 = VAR5->VAR9; VAR12 = VAR5->VAR12; VAR30 = VAR5->VAR30; \
continue; \
}  

VAR23 = 2;  

if (VAR23) {   \
int VAR37 = FUN7(VAR33->VAR38) ? 1 : VAR24; \
if (VAR30 + VAR37 <= VAR39) { \
VAR11 = &VAR5->VAR20[VAR30]; \
VAR30 += VAR37; \
goto VAR26; \
} \
} else {   \
\
if (VAR24 <= 2 && VAR12 + VAR24 <= VAR13) { \
VAR11 = &VAR5->VAR14[VAR12]; \
VAR12 += VAR24; \
goto VAR26; \
} \
}




\
VAR5->VAR6 = !(VAR7 <= 4); \
if (VAR5->VAR6) VAR5->VAR14[VAR12++] = (VAR10)VAR11;

VAR5->VAR6 = 1;   \
VAR5->VAR14[VAR12++] = (VAR10)VAR11;

FUN8(VAR11); 







VAR5->VAR6 = !FUN2(VAR16, VAR17, VAR40); \
if (VAR5->VAR6) VAR5->VAR14[VAR12++] = (VAR10)VAR11;

if (FUN2(VAR16, VAR17, VAR40) > 1) VAR18 = (VAR19 *)&VAR5->VAR20[0]; \
memcpy(VAR11, VAR18, VAR17->VAR21);

if (!(VAR40->VAR38 & VAR41)) VAR5->VAR6 = 0;  

if (!(VAR40->VAR38 & VAR41)) memcpy(VAR11, &VAR5->VAR20[0], VAR17->VAR21);

VAR23 = (FUN2(VAR16, VAR33, VAR40) > 1);


VAR23 = 1;  

if (VAR23 && !(VAR40->VAR38 & VAR41)) { \
if ((VAR33->VAR38 & VAR42) > VAR43) { \
if (VAR30 + (VAR24 >> 1) <= VAR39) { \
VAR11 = &VAR5->VAR20[VAR30]; \
VAR30 += (VAR24 >> 1); \
goto VAR26; \
} \
} else { \
if (VAR7 > 1 && VAR44 != VAR30) VAR44 = 0; \
if (VAR44) { \
if (2*VAR30+VAR24 <= 2*VAR39+1) { \
VAR11 = (void *)&VAR5->VAR20[VAR44-1].VAR45[1]; \
VAR30 += (VAR24 >> 1); \
if ((VAR24 & 1)) VAR44 = 0; else VAR44 = VAR30-1; \
goto VAR26; \
} \
} else { \
if (2*VAR30+VAR24 <= 2*VAR39) { \
VAR11 = (void *)&VAR5->VAR20[VAR30]; \
VAR30 += (VAR24 >> 1); \
if ((VAR24 & 1)) VAR44 = ++VAR30; else VAR44 = 0; \
goto VAR26; \
} \
} \
} \
VAR44 = 0;   \
} else {



VAR46 \
if ((VAR33->VAR38 & VAR42) > VAR43) { \
if (VAR12 < VAR13) \
VAR12 = (VAR12 + 1u) & ~1u;   \
} \
if (VAR12 < VAR13) { \
VAR11 = &VAR5->VAR14[VAR12]; \
if (VAR12 + VAR24 > VAR13) { \
VAR9 += VAR12 + VAR24 - VAR13;   \
if (VAR9 > VAR47) goto VAR36;   \
VAR12 = VAR13; \
} else { \
VAR12 += VAR24; \
} \
goto VAR26; \
} VAR48

if ((VAR40->VAR38 & VAR41)) VAR18 = (VAR19 *)&VAR5->VAR14[0];



VAR5->VAR6 = !FUN2(VAR16, VAR17); \
if (VAR5->VAR6) VAR5->VAR49 = VAR11;

unsigned int VAR50 = FUN2(VAR16, VAR17); \
if ((VAR50 & 4)) {  \
CTSize VAR51 = (VAR50 >> 8) - 1; \
do { ((VAR52 *)VAR11)[VAR51] = VAR5->VAR20[VAR51].VAR53; } while (VAR51--); \
} else { \
if (VAR50 > 1) VAR18 = (VAR19 *)&VAR5->VAR20[0]; \
memcpy(VAR11, VAR18, VAR17->VAR21); \
}

\
VAR5->VAR6 = 0;

if (VAR17->VAR21 == 2*sizeof(float)) {   \
((float *)VAR11)[0] = VAR5->VAR20[0].VAR45; \
((float *)VAR11)[1] = VAR5->VAR20[1].VAR45; \
} else {   \
((double *)VAR11)[0] = VAR5->VAR20[0].VAR33; \
((double *)VAR11)[1] = VAR5->VAR20[1].VAR33; \
}

unsigned int VAR50 = FUN2(VAR16, VAR33); \
if (VAR50 == 0) {   \
VAR27 = FUN3(FUN4(VAR16, VAR28, VAR7)); \
VAR7 = VAR29; \
} else if (VAR50 > 1) {   \
VAR23 = (VAR50 & 4) ? 2 : 1; \
}  

\
VAR23 = VAR7 == 2*sizeof(float) ? 2 : 1;

if (VAR54 && VAR55) { \
\
} else if (VAR23) {   \
int VAR37 = FUN7(VAR33->VAR38) ? 1 : VAR24*VAR23; \
if (VAR30 + VAR37 <= VAR39) { \
VAR11 = &VAR5->VAR20[VAR30]; \
VAR30 += VAR37; \
goto VAR26; \
} else { \
VAR30 = VAR39;   \
if (VAR54 && VAR33->VAR21 < 8) goto VAR36; \
} \
} else {   \
if (!VAR54 && (VAR33->VAR38 & VAR42) > VAR43) \
VAR12 = (VAR12 + 1u) & ~1u;   \
if (VAR12 + VAR24 <= VAR13) { \
VAR11 = &VAR5->VAR14[VAR12]; \
VAR12 += VAR24; \
goto VAR26; \
} else { \
VAR12 = VAR13;   \
if (VAR54 && VAR33->VAR21 < 8) goto VAR36; \
} \
}

if (FUN9(VAR17->VAR38) && VAR17->VAR21 == sizeof(float)) \
VAR18 = (VAR19 *)&VAR5->VAR20[0].VAR45;




VAR5->VAR6 = 1;   \
VAR5->VAR14[VAR12++] = (VAR10)VAR11;

\
VAR5->VAR6 = 0;

memcpy(VAR11, VAR18, VAR17->VAR21);  

VAR27 = FUN3(FUN4(VAR16, VAR28, VAR7)); \
VAR7 = VAR29;  



if (VAR23) {   \
if (VAR30 + 1 <= VAR39) { \
VAR11 = &VAR5->VAR20[VAR30]; \
VAR30 += 1; \
VAR33 = FUN10(VAR16, VAR56);   \
goto VAR26; \
} \
} else {   \
if (VAR24 > 1) { \
FUN11(VAR24 == 2 || VAR24 == 4);   \
if (FUN12(VAR33->VAR38)) \
VAR12 = (VAR12 + 1u) & ~1u;   \
else if (VAR12 + VAR24 > VAR13) \
VAR12 = VAR13;   \
} \
if (VAR12 + VAR24 <= VAR13) { \
VAR11 = &VAR5->VAR14[VAR12]; \
VAR12 += VAR24; \
goto VAR26; \
} \
}

if (FUN9(VAR17->VAR38) && VAR17->VAR21 == sizeof(float)) \
VAR17 = FUN10(VAR16, VAR56);  



VAR5->VAR6 = 1;   \
VAR5->VAR14[VAR12++] = (VAR10)VAR11;

\
VAR5->VAR6 = 0;

if (VAR17->VAR21 == 2*sizeof(float)) {   \
((VAR57 *)VAR11)[0] = VAR5->VAR14[0]; \
((VAR57 *)VAR11)[1] = VAR5->VAR14[1]; \
} else {   \
((VAR57 *)VAR11)[0] = VAR5->VAR14[0]; \
((VAR57 *)VAR11)[1] = VAR5->VAR14[1]; \
((VAR57 *)VAR11)[2] = VAR5->VAR14[2]; \
((VAR57 *)VAR11)[3] = VAR5->VAR14[3]; \
}
if (VAR17->VAR21 == 2*sizeof(float)) {   \
((float *)VAR11)[0] = VAR5->VAR20[0].VAR45; \
((float *)VAR11)[1] = VAR5->VAR20[1].VAR45; \
} else {   \
((double *)VAR11)[0] = VAR5->VAR20[0].VAR33; \
((double *)VAR11)[1] = VAR5->VAR20[1].VAR33; \
}





if ((VAR33->VAR38 & VAR42) > VAR43) \
VAR12 = (VAR12 + 1u) & ~1u;   \
if (VAR12 < VAR13) { \
VAR11 = &VAR5->VAR14[VAR12]; \
if (VAR12 + VAR24 > VAR13) { \
VAR9 += VAR12 + VAR24 - VAR13;   \
if (VAR9 > VAR47) goto VAR36;   \
VAR12 = VAR13; \
} else { \
VAR12 += VAR24; \
} \
goto VAR26; \
}

if (VAR23 && VAR30 < VAR39 && !(VAR40->VAR38 & VAR41)) { \
\
VAR11 = VAR24 == 1 ? (void *)&VAR5->VAR20[VAR30].VAR45 : (void *)&VAR5->VAR20[VAR30].VAR33; \
VAR30++; VAR12 += VAR24; \
goto VAR26; \
} else {   \
VAR30 = VAR39; \
VAR58 \
}


if (FUN9(VAR17->VAR38) && VAR17->VAR21 == sizeof(float)) \
VAR18 = (VAR19 *)&VAR5->VAR20[0].VAR45;



VAR5->VAR6 = !(VAR7 <= 16); \
if (VAR5->VAR6) VAR5->VAR14[VAR12++] = (VAR10)VAR11;

FUN13(VAR5, VAR17, VAR11, VAR18, FUN2(VAR16, VAR17, VAR40));

\
VAR5->VAR6 = 0;


if (VAR17->VAR21 == 2*sizeof(float)) {   \
((VAR57 *)VAR11)[0] = VAR5->VAR14[0]; \
} else {   \
((VAR57 *)VAR11)[0] = VAR5->VAR14[0]; \
((VAR57 *)VAR11)[1] = VAR5->VAR14[1]; \
}




if (FUN9(VAR17->VAR38) && VAR17->VAR21 == sizeof(float)) \
VAR18 = (VAR19 *)VAR5->VAR14 + FUN14(0, 4);


if (VAR17->VAR21 == 2*sizeof(float)) {   \
((float *)VAR11)[0] = VAR5->VAR20[0].VAR45; \
((float *)VAR11)[1] = VAR5->VAR20[1].VAR45; \
} else {   \
((double *)VAR11)[0] = VAR5->VAR20[0].VAR33; \
((double *)VAR11)[1] = VAR5->VAR20[1].VAR33; \
}

if (VAR7 == 2*sizeof(float)) { \
VAR23 = 2; \
if (VAR12 < VAR13) \
VAR7 *= 2; \
}

if (FUN9(VAR17->VAR38) && VAR17->VAR21 == sizeof(float)) \
VAR18 = (VAR19 *)&VAR5->VAR20[0].VAR45;




if (VAR12 < VAR13) { \
VAR11 = &VAR5->VAR14[VAR12]; \
if (VAR12 + VAR24 > VAR13) { \
VAR9 += VAR12 + VAR24 - VAR13;   \
if (VAR9 > VAR47) goto VAR36;   \
VAR12 = VAR13; \
} else { \
VAR12 += VAR24; \
} \
goto VAR26; \
}


memcpy(VAR11, VAR18, VAR17->VAR21);  





static int FUN2(VAR59 *VAR16, VAR60 *VAR40)
{
CTSize VAR7 = VAR40->VAR21;
if (!(VAR7 == sizeof(float) || VAR7 == sizeof(double))) return 0;
if ((VAR40->VAR38 & VAR61)) return 0;
while (VAR40->VAR62) {
VAR40 = FUN10(VAR16, VAR40->VAR62);
if (FUN15(VAR40->VAR38)) {
VAR60 *VAR63 = FUN16(VAR16, VAR40);
if (FUN9(VAR63->VAR38)) {
if (VAR63->VAR21 == VAR7)
return (VAR7 >> 2);  
} else if (FUN17(VAR63->VAR38)) {
if (VAR63->VAR21)
return FUN2(VAR16, VAR63);
} else {
break;
}
} else if (FUN18(VAR40->VAR38)) {
break;
} else if (FUN19(VAR40->VAR38, VAR64)) {
VAR60 *VAR63 = FUN16(VAR16, VAR40);
if (VAR63->VAR21)
return FUN2(VAR16, VAR63);
}
}
return 0;
}