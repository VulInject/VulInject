FUN1 (VAR1 *VAR2, tree FUN2 (VAR3), tree VAR4,
int VAR5, bool *VAR6)
{
tree VAR7 = *VAR2;
function_format_info VAR8;
tree VAR9;


if (VAR10 != NULL && !VAR11)
{
VAR11 = xmalloc ((VAR12 + VAR13)
* sizeof (VAR11[0]));
memcpy (VAR11, VAR14,
sizeof (VAR14));
memcpy (&VAR11[VAR12], VAR10,
VAR13 * sizeof (VAR11[0]));

VAR15 = VAR11;
VAR12 += VAR13;
}

if (!FUN3 (VAR4, &VAR8, 0))
{
*VAR6 = true;
return VAR16;
}

VAR9 = FUN4 (VAR7);
if (VAR9)
{
if (!FUN5 (VAR9, VAR8.VAR17, VAR5,
VAR6))
return VAR16;

if (VAR8.VAR18 != 0)
{
unsigned HOST_WIDE_INT VAR19 = 1;


while (VAR9)
VAR19++, VAR9 = FUN6 (VAR9);

if (VAR19 != VAR8.VAR18)
{
if (!(VAR5 & (int) VAR20))
FUN7 ("");
*VAR6 = true;
return VAR16;
}
}
}

if (VAR8.VAR21 == VAR22 && VAR8.VAR18 != 0)
{
FUN7 ("");
*VAR6 = true;
return VAR16;
}


if (VAR8.VAR21 == VAR23
|| VAR8.VAR21 == VAR24
|| VAR8.VAR21 == VAR25
|| VAR8.VAR21 == VAR26
|| VAR8.VAR21 == VAR27
|| VAR8.VAR21 == VAR28)
{

if (!VAR11)
VAR15 = VAR11 = (VAR29 *)
FUN8 (VAR14, sizeof (VAR14),
sizeof (VAR14));


if (VAR8.VAR21 == VAR23)
FUN9 ();

else if (VAR8.VAR21 == VAR24)
FUN10 ();

else if (VAR8.VAR21 == VAR25
|| VAR8.VAR21 == VAR26
|| VAR8.VAR21 == VAR27
|| VAR8.VAR21 == VAR28)
FUN11 ();
else
FUN12 ();
}

return VAR16;
}