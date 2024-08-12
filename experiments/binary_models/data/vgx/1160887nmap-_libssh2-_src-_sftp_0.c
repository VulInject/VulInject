static int
FUN1(VAR1 *VAR2, const unsigned char *VAR3,
size_t VAR4)
{
struct string_buf VAR5;
uint32_t VAR6 = 0;
VAR5.VAR7 = (unsigned char *)VAR3;
VAR5.VAR8 = VAR5.VAR7;
VAR5.VAR9 = VAR4;

if(FUN2(&VAR5, &VAR6) != 0) {
return VAR10;
}
VAR2->VAR6 = VAR6;

if(VAR2->VAR6 & VAR11) {
if(FUN3(&VAR5, &(VAR2->VAR12)) != 0) {
return VAR10;
}
}

if(VAR2->VAR6 & VAR13) {
uint32_t VAR14 = 0;
uint32_t VAR15 = 0;
if(FUN2(&VAR5, &VAR14) != 0 ||
FUN2(&VAR5, &VAR15) != 0) {
return VAR10;
}
VAR2->VAR14 = VAR14;
VAR2->VAR15 = VAR15;
}

if(VAR2->VAR6 & VAR16) {
uint32_t VAR17;
if(FUN2(&VAR5, &VAR17) != 0) {
return VAR10;
}
VAR2->VAR17 = VAR17;
}

if(VAR2->VAR6 & VAR18) {
uint32_t VAR19;
uint32_t VAR20;
if(FUN2(&VAR5, &VAR19) != 0 ||
FUN2(&VAR5, &VAR20) != 0) {
return VAR10;
}
VAR2->VAR19 = VAR19;
VAR2->VAR20 = VAR20;
}

return (VAR5.VAR8 - VAR5.VAR7);
}