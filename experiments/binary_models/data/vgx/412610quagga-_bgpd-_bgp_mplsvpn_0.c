FUN1 (struct VAR1 *VAR1, struct VAR2 *VAR2, 
struct VAR3 *VAR4)
{
VAR5 *VAR6;
VAR5 *VAR7;
struct prefix VAR8;
int VAR9 = 0;
int VAR10;
u_int16_t VAR11;
struct rd_as VAR12;
struct rd_ip VAR13;
struct prefix_rd VAR14;
VAR5 *VAR15;


if (VAR1->VAR16 != VAR17)
return 0;


VAR14.VAR18 = VAR19;
VAR14.VAR10 = 64;

VAR6 = VAR4->VAR20;
VAR7 = VAR6 + VAR4->VAR21;

for (; VAR6 < VAR7; VAR6 += VAR9)
{

memset (&VAR8, 0, sizeof (struct VAR22));


VAR10 = *VAR6++;
VAR8.VAR18 = FUN2 (VAR4->VAR23);
VAR9 = FUN3 (VAR10);


if (VAR10 < VAR24*8)
{
FUN4 (VAR1->VAR25, 
""
"",
VAR1->VAR26, VAR10);
return -1;
}
if ((VAR6 + VAR9) > VAR7)
{
FUN4 (VAR1->VAR25,
""
"",
VAR1->VAR26, 
VAR10, (VAR27)(VAR7-VAR6));
return -1;
}


if ((VAR9 - VAR24) > (VAR28) sizeof(VAR8.VAR29))
{
FUN4 (VAR1->VAR25,
""
"",
VAR1->VAR26,
VAR10 - VAR24*8, sizeof(VAR8.VAR29));
return -1;
}


if ((VAR9 - VAR24) > FUN5 (&VAR8))
{
FUN4 (VAR1->VAR25,
""
"",
VAR1->VAR26,
VAR10 - VAR24*8, 
VAR8.VAR18, FUN5 (&VAR8));
return -1;
}


VAR15 = VAR6;


memcpy (&VAR14.VAR30, VAR6 + 3, 8);


VAR11 = FUN6 (VAR6 + 3);

switch (VAR11)
{
case VAR31:
FUN7 (VAR6 + 5, &VAR12);
break;

case VAR32:
FUN8 (VAR6 + 5, &VAR12);
break;

case VAR33:
FUN9 (VAR6 + 5, &VAR13);
break;

default:
FUN10 ("", VAR11);
break;  
}

VAR8.VAR10 = VAR10 - VAR24*8;
memcpy (&VAR8.VAR29.VAR22, VAR6 + VAR24, 
VAR9 - VAR24);

if (VAR2)
FUN11 (VAR1, &VAR8, VAR2, VAR4->VAR23, VAR34,
VAR35, VAR36, &VAR14, VAR15, 0);
else
FUN12 (VAR1, &VAR8, VAR2, VAR4->VAR23, VAR34,
VAR35, VAR36, &VAR14, VAR15);
}

if (VAR6 != VAR7)
{
FUN4 (VAR1->VAR25,
""
"",
VAR1->VAR26, VAR7 - VAR6);
return -1;
}

return 0;
}