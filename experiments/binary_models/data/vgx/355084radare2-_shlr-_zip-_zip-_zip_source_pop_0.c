struct VAR1 *
FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3;

if (VAR2 == NULL)
return NULL;

VAR3 = VAR2->VAR2;

if (VAR3 == NULL)
FUN2(VAR2);
else {


(void)VAR2->VAR4.FUN3(VAR2, VAR2->VAR5, NULL, 0, VAR6);

free(VAR2);
}

return VAR3;
}