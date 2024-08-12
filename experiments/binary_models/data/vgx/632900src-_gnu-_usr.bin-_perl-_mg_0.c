int
FUN1(pTHX_ VAR1 *VAR2, VAR3 *VAR4)
{
VAR5;

if (VAR6) {
VAR7 * const VAR8 = FUN2(VAR6);
if (VAR8) {
const SSize_t VAR9 = (VAR10)VAR4->VAR11;

const I32 VAR12 = VAR4->VAR13
+ (VAR9 == '' ? 1 : 0);
SSize_t VAR14;
SSize_t VAR15;
if (VAR12 < 0)
return 0;
if (VAR12 <= (VAR16)FUN3(VAR8) &&
(VAR14 = FUN4(VAR8)[VAR12].VAR17) != -1 &&
(VAR15 = FUN4(VAR8)[VAR12].VAR18) != -1)
{
SSize_t VAR19;

if (VAR9 == '')                
VAR19 = VAR15;
else if (VAR9 == '')           
VAR19 = VAR14;
else {                        
FUN5(VAR8,VAR12,VAR2);
return 0;
}

if (FUN6(VAR8)) {
const char * const VAR20 = FUN7(VAR8);
if (VAR20)
VAR19 = FUN8(VAR8) +
FUN9((VAR21*)VAR20,
(VAR21*)(VAR20-FUN10(VAR8)+VAR19));
}

FUN11(VAR2, VAR19);
return 0;
}
}
}
FUN12(VAR2);
return 0;
}