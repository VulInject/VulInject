VAR1 *
FUN1(VAR1 *VAR2)		
{
VAR1 *VAR3;	
VAR1 *VAR4;	
VAR1 *VAR5;		

VAR5 = VAR4 = NULL;


while ((VAR3 = FUN2(&VAR2)) != NULL) {

if (VAR3->VAR6 == VAR7)
FUN3(1, "");


if (VAR5 == NULL)
VAR4 = VAR5 = VAR3;
else {
VAR4->VAR8 = VAR3;
VAR4 = VAR3;
}
VAR4->VAR8 = NULL;
}
return (VAR5);
}