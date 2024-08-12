struct VAR1* 
FUN1(struct VAR2* VAR3, VAR4* VAR5, size_t VAR6, 
uint16_t VAR7, struct VAR8* VAR9, time_t VAR10)
{

while(1) {
struct VAR1* VAR11 = FUN2(VAR3, VAR5, 
VAR6, VAR7, 0);
if(VAR11) {

struct VAR12* VAR13 = (struct VAR12*)
VAR11->VAR14.VAR15;
if(VAR10 <= VAR13->VAR16) {

struct VAR1* VAR17 =
FUN3(VAR11, VAR9);
FUN4(&VAR11->VAR14.VAR18);
return VAR17;
}
FUN4(&VAR11->VAR14.VAR18);
}

if(FUN5(VAR5))
break;
FUN6(&VAR5, &VAR6);
}
return NULL;
}