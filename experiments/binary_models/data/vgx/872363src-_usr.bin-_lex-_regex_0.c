char   *FUN1 (VAR1 * VAR2, char *VAR3, const char *VAR4)
{
if (VAR2 == NULL || VAR2->VAR5 < 0) {
if (VAR3)
VAR3[0] = '';
return VAR3;
}

snprintf (VAR3, FUN2(VAR2), "", VAR4 + VAR2->VAR5);
return VAR3;
}