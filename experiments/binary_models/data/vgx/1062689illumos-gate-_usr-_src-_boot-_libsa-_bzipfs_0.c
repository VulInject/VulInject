static int
FUN1(struct VAR1 *VAR2)
{
struct VAR3	*VAR4 = (struct VAR3 *)VAR2->VAR5;
struct VAR3	*VAR6;




VAR6 = malloc(sizeof (struct VAR3));
if (VAR6 == NULL)
return (-1);
FUN2(VAR6, sizeof (struct VAR3));
VAR6->VAR7 = VAR4->VAR7;


if (FUN3(&(VAR6->VAR8), 0, 1) != VAR9) {
free(VAR6);
return (-1);
}


if (FUN4(VAR4->VAR7, 0, VAR10) == -1) {
FUN5(&(VAR6->VAR8));
free(VAR6);
return (-1);
}


FUN5(&(VAR4->VAR8));
free(VAR4);


VAR2->VAR5 = VAR6;

return (0);
}