VAR1 *FUN1(VAR1 *VAR2, const char *typename)
{
    VAR3 *VAR4;
    if (typename && FUN2(VAR2, typename))
    {
        return VAR2;
    }
    if (FUN2(VAR2, VAR5))
    {
        assert(!VAR2->VAR6);
        VAR2 = FUN3(VAR2)->VAR2;
        if (FUN2(VAR2, typename))
        {
            return VAR2;
        }
    }
    if (typename == VAR7)
    {
        return VAR2;
    }
    for (VAR4 = VAR2->VAR6; VAR4; VAR4 = VAR4->VAR8)
    {
        VAR9 *VAR10 = VAR4->VAR11;
        if (FUN2(FUN4(VAR10), typename))
        {
            return FUN4(VAR10);
        }
    }
    return NULL;
}