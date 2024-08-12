static int FUN1(VAR1* VAR2, void* VAR3, int VAR4, int VAR5)
{
VAR6* VAR7 = VAR3;
unsigned char* VAR8 = 0;
VAR9* VAR10;

switch (VAR2->VAR11)
{
case VAR12:
VAR10 = VAR2->VAR13.VAR14;
break;

case VAR15:
VAR10 = VAR2->VAR13.VAR16;
break;

case VAR17:
VAR10 = VAR2->VAR13.VAR18;
break;

default:
return 1;
}

if ((FUN2(&VAR8, VAR10)) < 0)
{
FUN3(VAR19, "",
FUN4(VAR2->VAR11), FUN5(FUN6(), NULL));
return 1;
}

FUN7(VAR7, VAR5);

if (VAR7->VAR20 <= 0)
{
FUN8(VAR8);
return 0;
}

VAR7->VAR21[VAR7->VAR5] = (char*)VAR8;
VAR7->VAR5++;

if (VAR7->VAR5 >= VAR7->VAR22)
{
return 0;
}

return 1;
}