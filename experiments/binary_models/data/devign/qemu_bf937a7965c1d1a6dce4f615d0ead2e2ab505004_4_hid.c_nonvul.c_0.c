static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
    struct VAR5 *VAR6 = VAR1;
    if (VAR4 > VAR7 || VAR4 < 1)
        goto VAR8;
    if ((VAR3[0] & 3) != VAR9)
        goto VAR8;
    if ((VAR3[0] >> 4) == VAR10)
    {
        if (VAR6->VAR11)
            goto VAR8;
        VAR6->VAR12 = VAR9;
        VAR6->VAR13.VAR4 = 0;
    }
    else if ((VAR3[0] >> 4) == VAR14)
    {
        if (!VAR6->VAR11)
            goto VAR8;
    }
    else
        goto VAR8;
    memcpy(VAR6->VAR13.VAR15 + VAR6->VAR13.VAR4, VAR3 + 1, VAR4 - 1);
    VAR6->VAR13.VAR4 += VAR4 - 1;
    VAR6->VAR11 = (VAR4 == VAR7);
    if (!VAR6->VAR11)
    {
        memcpy(VAR6->VAR16.VAR15, VAR6->VAR13.VAR15, VAR6->VAR16.VAR4 = VAR6->VAR13.VAR4);
        FUN2(VAR6);
    }
    return;
VAR8:
    FUN3("", VAR17);
}