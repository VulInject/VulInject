static int
FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
VAR4 *VAR5;
VAR1 *VAR6 = NULL, *VAR7 = NULL;
VAR1 **VAR8 = NULL, **VAR9 = NULL;
uint_t VAR10, VAR11;
int VAR12, VAR13 = 1;

if ((VAR5 = FUN2(VAR14)) == NULL)
return (FUN3(VAR15));

(void) FUN4(VAR5, VAR2, &VAR6, &VAR12);
(void) FUN4(VAR5, VAR3, &VAR7, &VAR12);
if (VAR6 != NULL && VAR7 != NULL) {
(void) FUN5(VAR6, VAR16, &VAR8,
&VAR10);
(void) FUN5(VAR7, VAR16, &VAR9,
&VAR11);
if (VAR10 == VAR11 && FUN6(VAR8, VAR10, VAR9, VAR11) == 1)
VAR13 = 0;
}

FUN7(VAR5);
FUN8(VAR6);
FUN8(VAR7);
return (VAR13);
}