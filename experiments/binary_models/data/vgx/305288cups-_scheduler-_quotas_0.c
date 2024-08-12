VAR1 *				
FUN1(
VAR2 *VAR3,			
const char      *VAR4)		
{
VAR1	*VAR5,			
VAR6;			
char		*VAR7;			


if (!VAR3 || !VAR4)
return (NULL);

FUN2(VAR6.VAR4, VAR4, sizeof(VAR6.VAR4));
if ((VAR7 = strchr(VAR6.VAR4, '')) != NULL)
*VAR7 = '';			

if ((VAR5 = (VAR1 *)FUN3(VAR3->VAR8, &VAR6)) != NULL)
return (VAR5);
else
return (FUN4(VAR3, VAR4));
}