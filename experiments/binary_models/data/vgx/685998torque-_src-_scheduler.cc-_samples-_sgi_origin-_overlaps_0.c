VAR1 *
FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
char   *VAR6 = "";
VAR2 *VAR7;
VAR1  *VAR8, *VAR9;
VAR4    *VAR10;
char    VAR11[256];
time_t  VAR12, VAR13;
int     VAR14;
int     VAR15;
int     VAR16;



VAR8 = NULL;
VAR12  = 0;
VAR13  = 0;

for (VAR7 = VAR3; VAR7 != NULL; VAR7 = VAR7->VAR17)
{

VAR9 = VAR7->VAR9;



if (!FUN2(VAR5, VAR9, NULL))
continue;


if (VAR9->VAR18 & (VAR19 | VAR20))
continue;


if ((VAR9->VAR18 & VAR21) &&
(!FUN3(VAR5, VAR9, NULL)))
{
continue;
}


if ((VAR9->VAR22 - VAR9->VAR23) >= VAR5->VAR24)
return (NULL);


VAR12 = VAR25;

VAR14 = VAR9->VAR14;

if (VAR14 == 0)
{

FUN4(("",
VAR6, VAR9->VAR26, VAR5->VAR27));
continue; 
}




VAR16 = VAR9->VAR22 - VAR9->VAR23;

VAR15 = VAR16;

for (VAR10 = VAR9->VAR28; VAR10 != NULL; VAR10 = VAR10->VAR17)
{

if (VAR10->VAR29 != '')
continue;


VAR14 --;

VAR15 += VAR10->VAR24;

if (VAR14 < 0)
{
FUN4(("", VAR9->VAR26));
VAR10 = NULL;
break;
}


if ((VAR9->VAR30 != VAR31) && (VAR14 >= VAR9->VAR30))
continue;


if (VAR15 < VAR5->VAR24)
continue;