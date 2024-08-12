FUN1 (struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = NULL;
struct VAR4 *VAR5 = NULL;
struct VAR1 **VAR6 = NULL;

switch (VAR1->VAR7)
{
case VAR8:
assert (FUN2 (VAR1->VAR9.VAR10, &VAR1->VAR11->VAR12));
VAR6 = VAR1->VAR11->read;
break;
case VAR13:
assert (FUN2 (VAR1->VAR9.VAR10, &VAR1->VAR11->VAR14));
VAR6 = VAR1->VAR11->write;
break;
case VAR15:
VAR5 = VAR1->VAR11->VAR16;
break;
case VAR17:
VAR3 = &VAR1->VAR11->VAR18;
break;
case VAR19:
VAR3 = &VAR1->VAR11->VAR20;
break;
case VAR21:
VAR5 = VAR1->VAR11->VAR22;
break;
default:
return;
break;
}

if (VAR5)
{
assert(VAR1->VAR23 >= 0);
assert(VAR1 == VAR5->VAR24[VAR1->VAR23]);
FUN3(VAR1->VAR23, VAR5);
}
else if (VAR3)
{
FUN4 (VAR3, VAR1);
}
else if (VAR6)
{
FUN5 (VAR6, VAR1);
}
else
{
assert(!"");
}

FUN6 (VAR1);
}