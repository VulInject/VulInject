VAR1 *FUN1(char *VAR2, char *VAR3)
{
int VAR4;
VAR1 *VAR5 = malloc(sizeof(VAR1));

if(VAR5 == NULL)
FUN2();

VAR4 = FUN3(VAR5, VAR2, VAR6|VAR7);

if(VAR4) {
char VAR8[1024]; 

FUN4(VAR4, VAR5, VAR8, 1024);
FUN5("",
VAR2, VAR3, VAR8);
}

return VAR5;
}