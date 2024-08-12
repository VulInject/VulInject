int
FUN1(VAR1 **VAR2, char *VAR3, int VAR4, char **VAR5)
{
int VAR6 = VAR7;
VAR1 *VAR8 = NULL;
VAR9 *VAR10 = NULL;




if (*VAR2 != NULL)
return VAR7;

VAR6 = FUN2(VAR3, &VAR10);
VAR6 = FUN3(VAR3, &VAR10);
if (VAR6 == 0) {
if (VAR4 == VAR11)
VAR8 = FUN4(VAR10->VAR12, VAR10->VAR13, 1);
else
VAR8 = FUN5(VAR10->VAR12, VAR10->VAR13);

if (VAR8 != NULL)
*VAR2 = VAR8;
else {
if (VAR5 != NULL)
*VAR5 = strerror(VAR14);
VAR6 = VAR15;
}

FUN6(VAR10);
} else {

if (VAR5 != NULL)
*VAR5 = FUN7(VAR6);

VAR6 = VAR15;
}
return VAR6;
}