static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4)
{
    uint64_t VAR5 = 0;
    if (VAR4 >= 0)
        FUN2(VAR3, VAR4, VAR6);
    while (!FUN3(VAR3))
    {
        VAR5 = (VAR5 << 8) | FUN4(VAR3);
        if ((VAR5 >> 56) != '')
            continue;
        switch (VAR5)
        {
        case VAR7:
        case VAR8:
        case VAR9:
        case VAR10:
        case VAR11:
            return VAR5;
        }
    }
    FUN5(NULL, VAR12, "", FUN6(VAR3));
    return 0;
}