static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5, size_t VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR2->private;
    size_t VAR11 = FUN2(VAR2->VAR12);
    VAR4 *VAR13 = FUN3(VAR4, VAR11);
    VAR3 = FUN4(VAR3);
    memcpy(VAR13, (VAR4 *)&VAR3, VAR11);
    if (sizeof(VAR3) < VAR11)
    {
        memset(VAR13 + sizeof(VAR3), 0, VAR11 - sizeof(VAR3));
    }
    if (FUN5(VAR10->VAR12, VAR13, VAR13, VAR11, VAR8) < 0)
    {
        FUN6(VAR13);
        return -1;
    }
    if (VAR11 > VAR6)
    {
        VAR11 = VAR6;
    }
    memcpy(VAR5, VAR13, VAR11);
    if (VAR11 < VAR6)
    {
        memset(VAR5 + VAR11, 0, VAR6 - VAR11);
    }
    FUN6(VAR13);
    return 0;
}