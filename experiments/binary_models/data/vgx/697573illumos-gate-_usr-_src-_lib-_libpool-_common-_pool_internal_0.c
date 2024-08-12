int
FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
VAR5 *VAR6[] = { NULL, NULL };
pool_value_t VAR7 = VAR8;
VAR9 **VAR10 = NULL;
uint_t VAR11;

VAR6[0] = &VAR7;

FUN2(VAR6[0], VAR12);
if (FUN3(VAR6[0], "") != VAR13)
return (VAR14);

if ((VAR10 = FUN4(FUN5(FUN6(VAR2)), VAR2,
&VAR11, VAR6)) != NULL) {
*VAR4 = VAR11;
free(VAR10);
} else
*VAR4 = 0;
return (VAR13);
}