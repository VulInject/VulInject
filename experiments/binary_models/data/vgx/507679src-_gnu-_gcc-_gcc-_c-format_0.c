FUN1 (void)
{
static tree VAR1, VAR2, VAR3;

if (!VAR2 || !VAR1 || !VAR3)
{
static VAR4 *VAR5, *VAR6, *VAR7, *VAR8;
static VAR9 *VAR10;
unsigned int VAR11;


if ((VAR2 = FUN2 ("")))
{
VAR2 = FUN3 (VAR2);
if (VAR2)
{
if (FUN4 (VAR2) != VAR12)
{
FUN5 ("");
VAR2 = 0;
}
else
VAR2 = FUN6 (VAR2);
}
}


if ((VAR1 = FUN2 ("")))
{
VAR1 = FUN3 (VAR1);
if (VAR1)
{
if (FUN4 (VAR1) != VAR12)
{
FUN5 ("");
VAR1 = 0;
}
else if (FUN4 (FUN6 (VAR1)) != VAR13)
{
FUN5 ("");
VAR1 = 0;
}
else
VAR1 = FUN6 (FUN6 (VAR1));
}
}


if ((VAR3 = FUN2 ("")))
{
VAR3 = FUN3 (VAR3);
if (VAR3)
{
if (FUN4 (VAR3) != VAR12)
{
FUN5 ("");
VAR3 = 0;
}
else
{
VAR3 = FUN7 (VAR3);
FUN8 (VAR3);
if (VAR3 != VAR14
&& VAR3 != VAR15)
{
FUN5 (""
"");
VAR3 = 0;
}
}
}
}




if (!VAR10)
VAR16[VAR17].VAR18 =
VAR16[VAR19].VAR18 =
VAR16[VAR20].VAR18 =
VAR16[VAR21].VAR18 =
VAR10 = (VAR9 *)
FUN9 (VAR22,
sizeof (VAR22),
sizeof (VAR22));
if (VAR3)
{

VAR11 = FUN10 (VAR10, '');
if (VAR3 == VAR14)
VAR10[VAR11].VAR23 = VAR24;
else if (VAR3 == VAR15)
VAR10[VAR11].VAR23 = VAR25;
else
FUN11 ();
}


if (!VAR5)
VAR16[VAR17].VAR26 =
VAR5 = (VAR4 *)
FUN9 (VAR27,
sizeof (VAR27),
sizeof (VAR27));
if (VAR2)
{
VAR11 = FUN12 (VAR5, '');
VAR5[VAR11].VAR28[0].VAR29 = &VAR2;
VAR5[VAR11].VAR30 = 1;
}
if (VAR1)
{
VAR11 = FUN12 (VAR5, '');
VAR5[VAR11].VAR28[0].VAR29 = &VAR1;
VAR5[VAR11].VAR30 = 1;
}


if (!VAR6)
VAR16[VAR19].VAR26 =
VAR6 = (VAR4 *)
FUN9 (VAR31,
sizeof (VAR31),
sizeof (VAR31));
if (VAR2)
{
VAR11 = FUN12 (VAR6, '');
VAR6[VAR11].VAR28[0].VAR29 = &VAR2;
VAR6[VAR11].VAR30 = 1;
}
if (VAR1)
{

VAR11 = FUN12 (VAR6, '');
VAR6[VAR11].VAR28[0].VAR29 = &VAR1;
VAR6[VAR11].VAR30 = 1;
VAR11 = FUN12 (VAR6, '');
VAR6[VAR11].VAR28[0].VAR29 = &VAR1;
VAR6[VAR11].VAR30 = 1;
}


if (!VAR7)
VAR16[VAR20].VAR26 =
VAR7 = (VAR4 *)
FUN9 (VAR32,
sizeof (VAR32),
sizeof (VAR32));
if (VAR2)
{
VAR11 = FUN12 (VAR7, '');
VAR7[VAR11].VAR28[0].VAR29 = &VAR2;
VAR7[VAR11].VAR30 = 1;
}
if (VAR1)
{

VAR11 = FUN12 (VAR7, '');
VAR7[VAR11].VAR28[0].VAR29 = &VAR1;
VAR7[VAR11].VAR30 = 1;
VAR11 = FUN12 (VAR7, '');
VAR7[VAR11].VAR28[0].VAR29 = &VAR1;
VAR7[VAR11].VAR30 = 1;
}


if (!VAR8)
VAR16[VAR21].VAR26 =
VAR8 = (VAR4 *)
FUN9 (VAR33,
sizeof (VAR33),
sizeof (VAR33));
if (VAR2)
{
VAR11 = FUN12 (VAR8, '');
VAR8[VAR11].VAR28[0].VAR29 = &VAR2;
VAR8[VAR11].VAR30 = 1;
}
if (VAR1)
{

VAR11 = FUN12 (VAR8, '');
VAR8[VAR11].VAR28[0].VAR29 = &VAR1;
VAR8[VAR11].VAR30 = 1;
VAR11 = FUN12 (VAR8, '');
VAR8[VAR11].VAR28[0].VAR29 = &VAR1;
VAR8[VAR11].VAR30 = 1;
}
}
}

extern const format_kind_info VAR34[];


VAR35
FUN13 (VAR35 *VAR36, tree FUN14 (VAR37), tree VAR38,
int VAR39, bool *VAR40)
{
tree VAR29 = *VAR36;
function_format_info VAR41;
tree VAR42;


if (VAR34 != NULL && !VAR16)
{
VAR16 = xmalloc ((VAR43 + VAR44)
* sizeof (VAR16[0]));
memcpy (VAR16, VAR45,
sizeof (VAR45));
memcpy (&VAR16[VAR43], VAR34,
VAR44 * sizeof (VAR16[0]));

VAR46 = VAR16;
VAR43 += VAR44;
}

if (!FUN15 (VAR38, &VAR41, 0))
{
*VAR40 = true;
return VAR47;
}

VAR42 = FUN16 (VAR29);
if (VAR42)
{
if (!FUN17 (VAR42, VAR41.VAR48, VAR39,
VAR40))
return VAR47;

if (VAR41.VAR49 != 0)
{
unsigned HOST_WIDE_INT VAR50 = 1;


while (VAR42)
VAR50++, VAR42 = FUN18 (VAR42);

if (VAR50 != VAR41.VAR49)
{
if (!(VAR39 & (int) VAR51))
FUN5 ("");
*VAR40 = true;
return VAR47;
}
}
}

if (VAR41.VAR52 == VAR53 && VAR41.VAR49 != 0)
{
FUN5 ("");
*VAR40 = true;
return VAR47;
}


if (VAR41.VAR52 == VAR54
|| VAR41.VAR52 == VAR55
|| VAR41.VAR52 == VAR17
|| VAR41.VAR52 == VAR19
|| VAR41.VAR52 == VAR20
|| VAR41.VAR52 == VAR21)
{

if (!VAR16)
VAR46 = VAR16 = (VAR56 *)
FUN9 (VAR45, sizeof (VAR45),
sizeof (VAR45));


if (VAR41.VAR52 == VAR54)
FUN19 ();

else if (VAR41.VAR52 == VAR55)
FUN20 ();

else if (VAR41.VAR52 == VAR17
|| VAR41.VAR52 == VAR19
|| VAR41.VAR52 == VAR20
|| VAR41.VAR52 == VAR21)
FUN1 ();
else
FUN11 ();
}

return VAR47;
}