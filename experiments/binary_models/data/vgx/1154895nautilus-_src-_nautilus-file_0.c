FUN1 (VAR1     *VAR2,
VAR3           *VAR4,
NautilusDateType  VAR5)
{
time_t VAR6;


if (VAR2->VAR7->VAR8)
{
return VAR9;
}


if (!VAR2->VAR7->VAR10)
{
return VAR11;
}

switch (VAR5)
{
case VAR12:
{
VAR6 = VAR2->VAR7->VAR13;
}
break;

case VAR14:
{
VAR6 = VAR2->VAR7->VAR15;
}
break;

case VAR16:
{
VAR6 = VAR2->VAR7->VAR17;
}
break;

case VAR18:
{
VAR6 = VAR2->VAR7->VAR19;
}
break;

case VAR20:
{
VAR6 = VAR2->VAR7->VAR21;
}
break;

default:
{
FUN2 ();
}
break;
}

*VAR4 = VAR6;


if (VAR6 == 0)
{
return VAR9;
}
return VAR22;
}