static VAR1 FUN1(void * VAR2, char * * VAR3)
{
VAR4 * VAR5 = (VAR4 *)VAR2;

if (VAR5->VAR6 == NULL)
{
*VAR3 = FUN2("");
return VAR7;
}
else
{
FUN3(VAR5->VAR6);
if (VAR5->VAR6[0] == 0)
{
*VAR3 = FUN2("");
return VAR7;
}
}
return VAR8;
}