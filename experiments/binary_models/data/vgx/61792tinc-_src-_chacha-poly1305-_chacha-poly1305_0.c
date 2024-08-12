bool FUN1(VAR1 *VAR2, uint64_t VAR3, const void *VAR4, size_t VAR5, void *VAR6, VAR7 *VAR8) {
uint8_t VAR9[8];
const uint8_t VAR10[8] = { 1, 0, 0, 0, 0, 0, 0, 0 };      
uint8_t VAR11[VAR12], VAR13[VAR14];
const VAR15 *VAR16 = VAR4;


memset(VAR13, 0, sizeof(VAR13));
FUN2(VAR9, VAR3);
FUN3(&VAR2->VAR17, VAR9, NULL);
FUN4(&VAR2->VAR17, VAR13, VAR13, sizeof(VAR13));


FUN3(&VAR2->VAR17, VAR9, VAR10);


VAR5 -= VAR12;
const VAR15 *VAR18 = VAR16 + VAR5;

FUN5(VAR11, VAR16, VAR5, VAR13);

if(memcmp(VAR11, VAR18, VAR12)) {
return false;
}

FUN4(&VAR2->VAR17, VAR16, VAR6, VAR5);

if(VAR8) {
*VAR8 = VAR5;
}

return true;
}