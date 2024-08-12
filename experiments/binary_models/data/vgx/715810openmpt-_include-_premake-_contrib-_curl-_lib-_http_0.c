static bool
FUN1(struct VAR1 *VAR2,
const char *VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6.VAR7;
bool VAR8 = VAR9;

char *VAR10 = strdup(VAR3);
if(NULL == VAR10) {
FUN2(VAR2, "");
return VAR9; 
}
if(VAR11 != FUN3(VAR2, VAR10, strlen(VAR3)+1)) {

free(VAR10);
return VAR9; 
}
VAR3 = VAR10;

while(VAR5) {
if(FUN4(VAR5->VAR2, VAR3)) {
VAR8 = VAR12;
break;
}
VAR5 = VAR5->VAR13;
}

if(!VAR8 && (FUN4("", VAR3)))
VAR8 = VAR12;

free(VAR10);
return VAR8;
}