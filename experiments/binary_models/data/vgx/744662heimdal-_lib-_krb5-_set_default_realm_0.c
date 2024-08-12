FUN1 (krb5_context VAR1, const char *VAR2, VAR3 **VAR4)
{

*VAR4 = malloc (2 * sizeof(**VAR4));
if (*VAR4 == NULL)
return FUN2(VAR1);
(*VAR4)[0] = strdup (VAR2);
if ((*VAR4)[0] == NULL) {
free (*VAR4);
return FUN2(VAR1);
}
(*VAR4)[1] = NULL;
return 0;
}