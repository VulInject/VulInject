FUN1("")



typedef struct
{
int VAR1;
long VAR2;
long VAR3;
}
VAR4;


static void *
FUN2(VAR5 *VAR6)
{
VAR4 *VAR7 = FUN3(VAR4, 1);

if (VAR7)
{
FUN4((FUN5(""), VAR7));
VAR7->VAR1 = FUN6(*VAR6, int);
VAR7->VAR2 = FUN6(*VAR6, long);
VAR7->VAR3 = FUN6(*VAR6, long);
}
return (void *)VAR7;
}