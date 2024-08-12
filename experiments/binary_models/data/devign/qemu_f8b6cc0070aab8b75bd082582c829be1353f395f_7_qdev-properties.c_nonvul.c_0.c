static int FUN1(VAR1 *VAR2, VAR3 *VAR4, char *VAR5, size_t VAR6)
{
    VAR7 **VAR8 = FUN2(VAR2, VAR4);
    return snprintf(VAR5, VAR6, "", *VAR8 ? FUN3(*VAR8) : "");
}