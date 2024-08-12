VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{

VAR4 *VAR8 = VAR5;
VAR2 *VAR9;
VAR10 *VAR11;
unsigned char VAR12 = 0;
unsigned char VAR13 = 0;
unsigned char VAR14 = 0;

VAR5 = VAR5->VAR15; 
while (VAR5 && VAR3->VAR16)
{
VAR9 = FUN2(VAR3->VAR16,VAR5->VAR17);
if (!VAR9)
{
VAR14 = 1;
break;
}
VAR5 = VAR5->VAR15;
VAR3 = VAR9;
}

if (VAR3->VAR16 && VAR14)
{
return VAR18;
}


if (!VAR3->VAR19)
{
return VAR20;
}

for (VAR11 = VAR3->VAR19; VAR11; VAR11 = VAR11->VAR15)
{
unsigned char VAR21;

if (VAR11->VAR22 == VAR23 && VAR12)
continue;
if (VAR11->VAR22 == VAR24 && VAR13)
continue;

VAR21 = FUN3(VAR11,VAR8,VAR7);
if (VAR11->VAR22 == VAR23)
{
VAR12 = VAR21;
}
else
{
VAR13 = VAR21;
}
}


if (VAR12 && !VAR13)
{
return VAR20;
}

return VAR18;
}