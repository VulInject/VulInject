static int				
FUN1(int         VAR1,		
int         VAR2,		
int         VAR3,		
VAR4 *VAR5,		
int         VAR6)		
{
cups_sc_command_t	VAR7;	
cups_sc_status_t	VAR8;		
char			VAR9[2048];	
int			VAR10;	


(void)VAR3;
(void)VAR5;

VAR10 = sizeof(VAR9);

if (FUN2(&VAR7, &VAR8, VAR9, &VAR10, 1.0))
return (-1);

switch (VAR7)
{
case VAR11 :
if (FUN3(VAR1, VAR2))
VAR8 = VAR12;
else if (FUN4(VAR2))
VAR8 = VAR12;
else
VAR8 = VAR13;

VAR10 = 0;
break;

case VAR14 :
VAR8  = VAR13;
VAR9[0] = VAR6;
VAR10 = 1;
break;

case VAR15 :
memset(VAR9, 0, sizeof(VAR9));

if (FUN5(VAR2, VAR9, sizeof(VAR9) - 1,
NULL, 0, NULL, NULL, 0))
{
VAR8  = VAR16;
VAR10 = 0;
}
else
{
VAR8  = VAR13;
VAR10 = strlen(VAR9);
}
break;

default :
VAR8  = VAR16;
VAR10 = 0;
break;
}

return (FUN6(VAR7, VAR8, VAR9, VAR10, 1.0));
}