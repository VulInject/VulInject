extern str VAR1;


VAR2* FUN1(VAR3* VAR4)
{
VAR2 *VAR5 = NULL;

VAR5 = (VAR2*)FUN2(sizeof(VAR2));
if(VAR5==NULL)
{
FUN3("");
return NULL;
}
memset(VAR5, 0, sizeof(VAR2));

VAR5->VAR4.VAR6 = (char*)FUN2((1+VAR4->VAR7)*sizeof(char));
if(VAR5->VAR4.VAR6==NULL)
{
FUN4(VAR5);
FUN3("");
return NULL;
}
memset(VAR5->VAR4.VAR6, 0,1+VAR4->VAR7 );
memcpy(VAR5->VAR4.VAR6, VAR4->VAR6, VAR4->VAR7);
VAR5->VAR4.VAR7 = VAR4->VAR7;

VAR5->VAR8 = (VAR9*)FUN2(VAR10*sizeof(VAR9));
if(VAR5->VAR8 == NULL)
{
FUN4(VAR5->VAR4.VAR6);
FUN4(VAR5);
FUN3("");
return NULL;
}
memset(VAR5->VAR8, 0, VAR10*sizeof(VAR9));

return VAR5;
}