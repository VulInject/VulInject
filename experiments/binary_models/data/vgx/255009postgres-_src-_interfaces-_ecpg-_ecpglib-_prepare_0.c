static int
FUN1(int VAR1,		
const char *VAR2,	
const char *VAR3,	
int VAR4,		
const char *VAR5)	
{
int			VAR6,
VAR7,
VAR8,
VAR9;
VAR10 *VAR11;


if (VAR12 == NULL)
{
VAR12 = (VAR10 *)
FUN2(sizeof(VAR10) * VAR13, VAR1);
if (VAR12 == NULL)
return -1;
}


VAR7 = FUN3(VAR5);


VAR9 = VAR7;			
VAR8 = VAR7;		
for (VAR6 = 0; VAR6 < VAR14; ++VAR6)
{
VAR11 = &VAR12[VAR9];
if (!VAR11->VAR2[0])	
break;
if (VAR11->VAR15 < VAR12[VAR8].VAR15)
VAR8 = VAR9;	
++VAR9;				
}


if (VAR6 >= VAR14)
VAR9 = VAR8;


if (FUN4(VAR1, VAR4, VAR9) < 0)
return -1;


VAR11 = &VAR12[VAR9];
VAR11->VAR1 = VAR1;
VAR11->VAR5 = FUN5(VAR5, VAR1);
VAR11->VAR3 = VAR3;
VAR11->VAR15 = 0;
memcpy(VAR11->VAR2, VAR2, sizeof(VAR11->VAR2));

return VAR9;
}