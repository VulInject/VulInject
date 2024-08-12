FUN1 (struct VAR1 *VAR1)
{
struct VAR2 *VAR3;
int VAR4;

VAR5->VAR6.VAR7++;
assert (VAR5->VAR8);
VAR5->VAR8 = NULL;


if (VAR5->VAR9 == VAR10)
{
FUN2 ();
return 0;
}

assert (VAR5->VAR9 == VAR11);
assert (VAR5->VAR12 >= 0);

VAR4 = 0;

do
{
int VAR13, VAR14;

VAR3 = VAR5->VAR15;


if (FUN3 (VAR3))
{
FUN4 ();
}

VAR13 = FUN5 (VAR3) - FUN6 (VAR3);
if (!VAR13)
break;

VAR14 = write (VAR5->VAR12, FUN7 (VAR3), VAR13);
VAR5->VAR6.VAR16++;
VAR4++;

if (VAR14 < 0)
{
if (FUN8 (VAR17))
break;

FUN9 ("");
return 0;
}

if (VAR14 != VAR13)
{


FUN10 (VAR3, VAR14);
VAR5->VAR6.VAR18++;
break;
}


FUN11 (VAR3);

if (VAR4 >= VAR19)
{
VAR5->VAR6.VAR20++;
break;
}

if (FUN12 (VAR1))
{
VAR5->VAR6.VAR21++;
break;
}
} while (1);

if (FUN13 ())
FUN14 ();

return 0;
}