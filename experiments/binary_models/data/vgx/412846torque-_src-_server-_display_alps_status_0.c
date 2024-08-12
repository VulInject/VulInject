int FUN1(

struct VAR1       *VAR2,
struct VAR3 *VAR4,
int                  *VAR5,
VAR6           *VAR7)

{
struct VAR1 *VAR8;
VAR9  *VAR10 = NULL;
int             VAR11 = VAR12;

while ((VAR8 = FUN2(VAR2->VAR13, &VAR10, NULL)) != NULL)
{
VAR11 = FUN3(VAR8, VAR4, VAR5, VAR7);
VAR8->FUN4(VAR14, NULL, VAR15);

if (VAR11 != VAR12)
break;
}