void FUN1(void *VAR1)
{
VAR2 *VAR3;
static char VAR4[VAR5+1];
receive_info_t VAR6;
int VAR7;
pv_value_t VAR8;

VAR3 = (VAR2 *)VAR1;

FUN2("", VAR3, VAR3->VAR7);
if(VAR3->VAR7 > VAR5) {
FUN3("", VAR3->VAR7);
return;
}

memcpy(VAR4, VAR3->VAR4, VAR3->VAR7);
VAR7 = VAR3->VAR7;
memcpy(&VAR6, &VAR3->VAR9, sizeof(VAR10));
VAR6.VAR11 |= VAR12;

if(VAR13!=NULL) {
if(VAR3->VAR14.VAR7>0) {
memset(&VAR8, 0, sizeof(VAR15));
VAR8.VAR16 |= VAR17;
VAR8.VAR18 = VAR3->VAR14;
if(FUN4(NULL, VAR13, 0, &VAR8)!=0) {
FUN3("");
return;
}
} else {
if(FUN4(NULL, VAR13, 0, NULL)!=0) {
FUN3("");
return;
}
}
}

VAR19 = 1;
FUN5(VAR4, VAR7, &VAR6);
VAR19 = 0;
}