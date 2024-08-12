static int FUN1(VAR1 *VAR2, char *VAR3, char* VAR4,
char *VAR5)
{
str VAR6;
str VAR7;
int VAR8 = 0;

if(VAR2==NULL || VAR3==NULL || VAR4==NULL || VAR5==NULL) {
FUN2("");
return VAR9;
}

if (FUN3(&VAR6, VAR2, (VAR10*)VAR3) < 0) {
FUN2("");
return -1;
}

if (FUN3(&VAR7, VAR2, (VAR10*)VAR4) < 0) {
FUN2("");
return -1;
}

if(FUN4(VAR2, (VAR11)VAR5, &VAR8)!=0)
{
FUN2("");
return -1;
}
return FUN5(VAR2, &VAR6, &VAR7, VAR8);
}