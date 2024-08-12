static int FUN1(void** VAR1, int VAR2)
{
struct VAR3 *VAR4;
char *VAR5;

VAR5 = (char*)*VAR1;
if (VAR5==0 || VAR5[0]==0) {
FUN2("");
return VAR6;
}

if (VAR2 == 1) {
VAR4 = (struct VAR3*)FUN3(sizeof(struct VAR3));
if (!VAR4) {
VAR7;
return VAR8;
}
memset( VAR4, 0, sizeof(struct VAR3));
VAR4->VAR9.VAR10 = VAR5;
VAR4->VAR9.VAR11 = strlen(VAR5);
if (strchr(VAR5,VAR12)!=NULL) { 
if (FUN4(&VAR4->VAR9, &VAR4->VAR13)<0)
{
FUN2("",
VAR4->VAR9.VAR11, VAR4->VAR9.VAR10);
FUN5(VAR4);
return VAR14;
}
}
else {
if(FUN6(VAR5,VAR4)<0)
{
FUN2("");
FUN5(VAR4);
return VAR14;
}
}
*VAR1 = (void*)VAR4;
} else if (VAR2 == 2) {

if (VAR15.VAR10==0) {
FUN5(VAR5);
*VAR1 = 0;
} else {
return FUN7(VAR1, 2);
}
}
return 0;
}