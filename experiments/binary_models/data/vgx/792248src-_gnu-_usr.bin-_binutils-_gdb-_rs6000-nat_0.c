FUN1 (unsigned int VAR1)
{
int VAR2 = 64; 
int VAR3;
VAR4 *VAR5 = NULL;
int VAR6 = FUN2 ();
int VAR7 = VAR6 ? sizeof (VAR5->VAR8) : sizeof (VAR5->VAR9);
int VAR10;

do
{
VAR10 = VAR2 * VAR7;
VAR5 = (void *) xrealloc (VAR5, VAR10);


FUN3 (36000);

if (VAR6)
VAR3 = FUN4 (VAR11, VAR1, (unsigned long) VAR5, VAR10, NULL);
else
VAR3 = FUN5 (VAR11, VAR1, (int *) VAR5, VAR10, NULL);

if (VAR3 == -1)
{
if (VAR12 == VAR13)
VAR2 *= 2;
else
FUN6 ("");
}
else
{
FUN7 (VAR5);
FUN8 (); 
}
} while (VAR3 == -1);
if (VAR5)
FUN9 (VAR5);
}