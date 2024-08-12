void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2, VAR5);
    assert(VAR8->VAR9 == 0 || !VAR5);
    assert(VAR8->VAR10 == 0);
    VAR8->VAR10 = VAR6;
    VAR8->VAR11 = VAR4