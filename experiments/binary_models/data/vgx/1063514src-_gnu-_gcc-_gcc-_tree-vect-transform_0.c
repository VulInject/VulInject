static void FUN1 (VAR1, struct VAR2 *);
static void VAR3 
(VAR1, VAR4 *, struct VAR2 *);
static int FUN2 (enum VAR5);




static VAR4
FUN3 (tree VAR6, enum vect_var_kind VAR7, const char *VAR8)
{
const char *VAR9;
tree VAR10;

switch (VAR7)
{
case VAR11:
VAR9 = "";
break;
case VAR12:
VAR9 = "";
break;
case VAR13:
VAR9 = "";
break;
default:
FUN4 ();
}

if (VAR8)
VAR10 = FUN5 (VAR6, FUN6 (VAR9, VAR8, NULL));
else
VAR10 = FUN5 (VAR6, VAR9);

return VAR10;
}