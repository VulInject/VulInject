VAR1 **
FUN1(VAR1 *VAR2, dm_desc_type_t VAR3,
int *VAR4)
{
if (!FUN2(VAR2)) {
*VAR4 = VAR5;
return (NULL);
}

switch (VAR3) {
case VAR6:
return (FUN3(VAR2, VAR4));
case VAR7:
if (!FUN4(VAR2, VAR4)) {
if (*VAR4 != 0) {
return (NULL);
}
return (FUN5(VAR4));
}
return (FUN6(VAR2, VAR4));
}

*VAR4 = VAR8;
return (NULL);
}