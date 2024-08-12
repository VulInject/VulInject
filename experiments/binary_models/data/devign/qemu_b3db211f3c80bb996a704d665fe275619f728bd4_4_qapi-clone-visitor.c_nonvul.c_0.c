static void FUN1(VAR1 *VAR2, const char *VAR3, char **VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    assert(VAR8->VAR9);
    *VAR4 = FUN3(*VAR4 ?: "");
}