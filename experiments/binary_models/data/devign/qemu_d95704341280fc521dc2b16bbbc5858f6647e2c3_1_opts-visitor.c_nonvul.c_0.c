FUN1(VAR1 *VAR2, bool *VAR3, const char *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR7, VAR9, VAR2);
    assert(VAR8->VAR10 == VAR11);
    *VAR3 = (FUN3(VAR8, VAR4, NULL) != NULL);
}