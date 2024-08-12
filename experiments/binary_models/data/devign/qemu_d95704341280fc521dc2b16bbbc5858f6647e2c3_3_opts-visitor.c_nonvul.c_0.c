FUN1(const VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    if (VAR2->VAR6 == VAR7)
    {
        VAR8 *VAR9;
        VAR9 = FUN2(VAR2, VAR3, VAR5);
        return VAR9 ? FUN3(VAR9) : NULL;
    }
    assert(VAR2->VAR6 == VAR10);
    return FUN4(VAR2->VAR11);
}