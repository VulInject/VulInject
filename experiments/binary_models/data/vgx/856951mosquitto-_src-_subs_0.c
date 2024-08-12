static int FUN1(struct VAR1 *VAR2, const char *VAR3, uint8_t VAR4, uint32_t VAR5, int VAR6, struct VAR7 *VAR8)
{
struct VAR9 *VAR10 = NULL;
struct VAR11 **VAR12;
struct VAR11 *VAR13;
int VAR14;
int VAR15;
size_t VAR16;

VAR15 = FUN2(VAR2, VAR4, VAR5, VAR6, &VAR8->VAR12, &VAR10);
if(VAR15 > 0){
return VAR15;
}

if(VAR15 != VAR17){
VAR16 = strlen(VAR3);
VAR13 = FUN3(1, sizeof(struct VAR11) + VAR16 + 1);
if(VAR13 == NULL) return VAR18;
memcpy(VAR13->VAR19, VAR3, VAR16);
VAR13->VAR20 = VAR8;
VAR13->VAR21 = NULL;

for(VAR14=0; VAR14<VAR2->VAR22; VAR14++){
if(!VAR2->VAR12[VAR14]){
VAR2->VAR12[VAR14] = VAR13;
break;
}
}
if(VAR14 == VAR2->VAR22){
VAR12 = FUN4(VAR2->VAR12, sizeof(struct VAR11 *)*(VAR23)(VAR2->VAR22 + 1));
if(!VAR12){
FUN5(VAR8->VAR12, VAR10);
FUN6(VAR10);
FUN6(VAR13);
return VAR18;
}
VAR2->VAR12 = VAR12;
VAR2->VAR22++;
VAR2->VAR12[VAR2->VAR22-1] = VAR13;
}
VAR24.VAR25++;
}

if(VAR2->VAR26 == VAR27 || VAR2->VAR26 == VAR28){
return VAR15;
}else{

return VAR29;
}
}