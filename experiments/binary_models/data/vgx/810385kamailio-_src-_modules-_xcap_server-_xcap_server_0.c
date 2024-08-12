int FUN1(VAR1 *VAR2, int VAR3)
{
char *VAR4;
char *VAR5;
char *VAR6;
char *VAR7;
char *VAR8;

if(VAR2==NULL || VAR2->VAR9 <=10)
return 0;

if(VAR3==0) {
VAR4 = "";
VAR5  = "";
} else {
VAR4 = "";
VAR5  = "";
}

VAR7 = VAR2->VAR10;
VAR8 = VAR2->VAR10 + VAR2->VAR9 - 10;
while((VAR6 = FUN2(VAR7, VAR8, VAR4))!=NULL) {
memcpy(VAR6, VAR5, 7);
VAR7 = VAR6 + 7;
}
return 0;
}