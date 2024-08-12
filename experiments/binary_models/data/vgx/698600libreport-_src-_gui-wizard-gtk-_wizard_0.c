static struct VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
VAR6 *VAR7;
GtkTreeIter VAR8;
VAR9* VAR10 = FUN2(VAR3);

if (VAR10 == NULL)
return NULL;

if (!FUN3(VAR10, &VAR7, &VAR8))
return NULL;

*VAR5 = NULL;
FUN4(VAR7, &VAR8,
VAR11, VAR5,
-1);
if (!*VAR5) 
return NULL;
struct VAR1 *VAR12 = FUN5(VAR13, *VAR5);
return VAR12;
}