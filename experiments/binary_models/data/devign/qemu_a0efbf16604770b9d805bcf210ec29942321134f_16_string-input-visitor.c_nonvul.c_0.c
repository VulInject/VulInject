FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5, size_t VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    assert(VAR5);
    if (FUN3(VAR10, VAR3, VAR8) < 0)
    {
        *VAR5 = NULL;
        return;
    }
    VAR10->VAR11 = FUN4(VAR10->VAR12);
    if (VAR10->VAR11)
    {
        VAR13 *VAR14 = VAR10->VAR11->VAR15;
        if (VAR14)
        {
            VAR10->VAR16 = FUN5(VAR14);
        }
        *VAR5 = FUN6(VAR6);
    }
    else
    {
        *VAR5 = NULL;
    }
}