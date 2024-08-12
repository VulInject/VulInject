static void FUN1(void)
{
VAR1 *VAR2;


VAR2 = VAR3;

VAR3->VAR4 = VAR5 - 4;

if(VAR6 < 0)
{
int *VAR7, *VAR8;
int VAR9;
intptr_t VAR10[VAR11];

VAR7 = (int *) (VAR2->VAR12 + VAR5 + 4);
VAR8 = &VAR13[VAR14 + 1];

VAR10[0] = ~VAR6;
for(VAR9 = 1; VAR9 < FUN2(VAR10); VAR9++)
VAR10[VAR9] = VAR7[VAR9];

*VAR8 = VAR2->FUN3(VAR10);
VAR7[0] = ~VAR6;
*VAR8 = VAR2->FUN3((VAR15 *) VAR7);
}
else
{
switch(VAR6)
{
case VAR16:
FUN4();
break;
case VAR17: 
if(VAR14 < 1)
FUN5(VAR18, "");

FUN6(VAR13[(VAR14 - 1)], VAR13[VAR14], VAR19);
break;
default:
FUN5(VAR18, "", VAR6);
break;
}
}

VAR3 = VAR2;
}