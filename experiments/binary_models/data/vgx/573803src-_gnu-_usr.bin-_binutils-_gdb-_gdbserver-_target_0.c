FUN1 (int VAR1)
{
struct VAR2 *VAR3;

if (VAR1 == 1)
{
VAR3 = (struct VAR2 *) FUN2 (&VAR4,
VAR5);
}
else
{
VAR3 = NULL;


if (VAR6 > 0 && (VAR7 == 0 || VAR7 == -1))
VAR3 = (struct VAR2 *) FUN2 (&VAR4,
VAR6);

if (VAR3 == NULL)
VAR3 = (struct VAR2 *) FUN2 (&VAR4,
VAR7);
}

if (VAR3 == NULL)
VAR8 = (struct VAR2 *) VAR4.VAR9;
else
VAR8 = VAR3;
}