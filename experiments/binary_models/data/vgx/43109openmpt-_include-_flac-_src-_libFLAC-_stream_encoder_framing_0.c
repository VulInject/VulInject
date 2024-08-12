VAR1 FUN1(VAR2 *VAR3, const FLAC__int32 VAR4[], const uint32_t VAR5, const uint32_t VAR6, const uint32_t VAR7[], const uint32_t VAR8[], const uint32_t VAR9, const FLAC__bool VAR10)
{
const uint32_t VAR11 = VAR10? VAR12 : VAR13;
const uint32_t VAR14 = VAR10? VAR15 : VAR16;

if(VAR9 == 0) {
uint32_t VAR17;

if(VAR8[0] == 0) {
if(!FUN2(VAR3, VAR7[0], VAR11))
return false;
if(!FUN3(VAR3, VAR4, VAR5, VAR7[0]))
return false;
}
else {
FUN4(VAR7[0] == 0);
if(!FUN2(VAR3, VAR14, VAR11))
return false;
if(!FUN2(VAR3, VAR8[0], VAR18))
return false;
for(VAR17 = 0; VAR17 < VAR5; VAR17++) {
if(!FUN5(VAR3, VAR4[VAR17], VAR8[0]))
return false;
}
}
return true;
}
else {
uint32_t VAR17, VAR19, VAR20 = 0, VAR21 = 0;
uint32_t VAR22;
const uint32_t VAR23 = (VAR5+VAR6) >> VAR9;
for(VAR17 = 0; VAR17 < (1u<<VAR9); VAR17++) {
VAR22 = VAR23;
if(VAR17 == 0)
VAR22 -= VAR6;
VAR20 += VAR22;
if(VAR8[VAR17] == 0) {
if(!FUN2(VAR3, VAR7[VAR17], VAR11))
return false;
if(!FUN3(VAR3, VAR4+VAR21, VAR20-VAR21, VAR7[VAR17]))
return false;
}
else {
if(!FUN2(VAR3, VAR14, VAR11))
return false;
if(!FUN2(VAR3, VAR8[VAR17], VAR18))
return false;
for(VAR19 = VAR21; VAR19 < VAR20; VAR19++) {
if(!FUN5(VAR3, VAR4[VAR19], VAR8[VAR17]))
return false;
}
}
VAR21 = VAR20;
}
return true;
}
}