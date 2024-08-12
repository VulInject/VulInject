static int FUN1(VAR1 *VAR2, off_t VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    if (!VAR8->VAR10)
    {
        goto VAR11;
    }
    off_t VAR12;
    VAR12 = FUN2(VAR8->VAR13, VAR3, VAR14);
    if (VAR12 < 0)
    {
        return -VAR15;
    }
    assert(VAR12 >= VAR3);
    if (VAR12 > VAR3)
    {
        *VAR6 = VAR3;
        *VAR5 = VAR12;
        return 0;
    }
    VAR12 = FUN2(VAR8->VAR13, VAR3, VAR16);
    if (VAR12 < 0)
    {
        return -VAR15;
    }
    assert(VAR12 >= VAR3);
    if (VAR12 > VAR3)
    {
        *VAR5 = VAR3;
        *VAR6 = VAR12;
        return 0;
    }
    return -VAR17;
VAR11:
    return -VAR18;
}