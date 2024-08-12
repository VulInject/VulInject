FUN1 (void *VAR1, VAR2 *VAR3)
{
return FUN2 (VAR1, VAR3, 1);
}



void *
FUN2 (void *VAR1, VAR2 *VAR4, size_t VAR5)
{
size_t VAR6 = *VAR4;

if (! VAR1)
{
if (! VAR6)
{

enum { VAR7 = 64 * sizeof (VAR2) / 4 };

VAR6 = VAR7 / VAR5;
VAR6 += !VAR6;
}
}
else
{

if (FUN3 (&VAR6, VAR6, (VAR6 >> 1) + 1))
FUN4 ();
}

VAR1 = FUN5 (VAR1, VAR6, VAR5);
*VAR4 = VAR6;
return VAR1;
}