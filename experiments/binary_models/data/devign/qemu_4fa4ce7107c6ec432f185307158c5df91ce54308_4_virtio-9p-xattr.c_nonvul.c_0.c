VAR1 FUN1(VAR2 *VAR3, const char *VAR4, void *VAR5, size_t VAR6)
{
    ssize_t VAR7 = 0;
    char *VAR8;
    void *VAR9 = VAR5;
    VAR10 *VAR11;
    char *VAR12, *VAR13;
    ssize_t VAR14, VAR15 = 0, VAR16;
    VAR8 = FUN2(VAR3, VAR4);
    VAR14 = FUN3(VAR8, VAR5, 0);
    if (VAR14 <= 0)
    {
        FUN4(VAR8);
        return VAR14;
    }
    VAR12 = FUN5(VAR14);
    VAR14 = FUN3(VAR8, VAR12, VAR14);
    FUN4(VAR8);
    VAR13 = VAR12;
    while (VAR14 > VAR15)
    {
        VAR11 = FUN6(VAR3->VAR11, VAR12);
        if (!VAR11)
        {
            goto VAR17;
        }
        if (!VAR5)
        {
            VAR7 += VAR11->FUN7(VAR3, VAR4, VAR12, VAR5, VAR6);
        }
        else
        {
            VAR7 = VAR11->FUN7(VAR3, VAR4, VAR12, VAR5, VAR6);
            if (VAR7 < 0)
            {
                goto VAR18;
            }
            VAR5 += VAR7;
            VAR6 -= VAR7;
        }
    VAR17:
        VAR16 = strlen(VAR12) + 1;
        VAR15 += VAR16;
        VAR12 += VAR16;
    }
    if (VAR5)
    {
        VAR7 = VAR5 - VAR9;
    }
VAR18:
    FUN4(VAR13);
    return VAR7;
}