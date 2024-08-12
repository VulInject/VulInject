static VAR1 FUN1(struct curltime VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = &VAR6->VAR9.VAR10;
struct VAR11 *VAR12 = &VAR6->VAR9.VAR13;
struct VAR14 *VAR15;
struct VAR16 *VAR17 = NULL;


for(VAR15 = VAR12->VAR18; VAR15;) {
struct VAR14 *VAR19 = VAR15->VAR20;
timediff_t VAR21;
VAR17 = (struct VAR16 *)VAR15->VAR22;
VAR21 = FUN2(VAR17->VAR23, VAR2);
if(VAR21 <= 0)

FUN3(VAR12, VAR15, NULL);
else

break;
VAR15 = VAR19;
}
VAR15 = VAR12->VAR18;
if(!VAR15) {

VAR8->VAR24 = 0;
VAR8->VAR25 = 0;
}
else {

memcpy(VAR8, &VAR17->VAR23, sizeof(*VAR8));


VAR4->VAR26 = FUN4(*VAR8, VAR4->VAR26,
&VAR6->VAR9.VAR27);
}
return VAR28;
}