FUN1 (const VAR1 *VAR2, size_t VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
const VAR1 *VAR8 = VAR2 + VAR3;

VAR4 *VAR9;
size_t VAR10;
size_t VAR11;

if (VAR5 != NULL)
{
VAR9 = VAR5;
VAR10 = *VAR7;
}
else
{
VAR9 = NULL;
VAR10 = 0;
}
VAR11 = 0;


while (VAR2 < VAR8)
{
ucs4_t VAR12;
int VAR13;


VAR12 = *VAR2++;



VAR13 = FUN2 (VAR9 + VAR11, VAR12, VAR10 - VAR11);
if (VAR13 == -1)
{
if (!(VAR9 == VAR5 || VAR9 == NULL))
free (VAR9);
VAR14 = VAR15;
return NULL;
}
if (VAR13 == -2)
{
VAR4 *VAR16;

VAR10 = (VAR10 > 0 ? 2 * VAR10 : 12);
if (VAR11 + 2 > VAR10)
VAR10 = VAR11 + 2;
if (VAR9 == VAR5 || VAR9 == NULL)
VAR16 = (VAR4 *) malloc (VAR10 * sizeof (VAR4));
else
VAR16 =
(VAR4 *) realloc (VAR9, VAR10 * sizeof (VAR4));

if (VAR16 == NULL)
{
if (!(VAR9 == VAR5 || VAR9 == NULL))
free (VAR9);
VAR14 = VAR17;
return NULL;
}
if (VAR9 == VAR5 && VAR11 > 0)
memcpy ((char *) VAR16, (char *) VAR9,
VAR11 * sizeof (VAR4));
VAR9 = VAR16;
VAR13 = FUN2 (VAR9 + VAR11, VAR12, VAR10 - VAR11);
if (VAR13 < 0)
FUN3 ();
}
VAR11 += VAR13;
}

if (VAR11 == 0)
{
if (VAR9 == NULL)
{

VAR9 = (VAR4 *) malloc (1);
if (VAR9 == NULL)
{
VAR14 = VAR17;
return NULL;
}
}
}
else if (VAR9 != VAR5 && VAR11 < VAR10)
{

VAR4 *VAR16;

VAR16 = (VAR4 *) realloc (VAR9, VAR11 * sizeof (VAR4));
if (VAR16 != NULL)
VAR9 = VAR16;
}

*VAR7 = VAR11;
return VAR9;
}