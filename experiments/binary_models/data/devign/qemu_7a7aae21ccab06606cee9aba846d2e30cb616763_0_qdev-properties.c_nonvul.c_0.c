void FUN1(VAR1 *VAR2, const char *VAR3, void *VAR4)
{
    VAR5 *VAR6;
    void **VAR7;
    VAR6 = FUN2(VAR2, VAR3);
    assert(VAR6 && VAR6->VAR8 == &VAR9);
    VAR7 = FUN3(VAR2, VAR6);
    *VAR7 = VAR4;
}