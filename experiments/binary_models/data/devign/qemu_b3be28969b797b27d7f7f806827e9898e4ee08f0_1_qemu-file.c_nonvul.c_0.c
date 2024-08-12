VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6, int VAR7)
{
    ssize_t VAR8 = VAR9 - VAR3->VAR10 - sizeof(VAR11);
    if (VAR8 < FUN2(VAR6))
    {
        if (!FUN3(VAR3))
        {
            return -1;
        }
        FUN4(VAR3);
        VAR8 = VAR9 - sizeof(VAR11);
        if (VAR8 < FUN2(VAR6))
        {
            return -1;
        }
    }
    if (FUN5(VAR3->VAR12 + VAR3->VAR10 + sizeof(VAR11), (VAR13 *)&VAR8, (VAR14 *)VAR5, VAR6, VAR7) != VAR15)
    {
        FUN6("");
        return 0;
    }
    FUN7(VAR3, VAR8);
    if (VAR3->VAR16->VAR17)
    {
        FUN8(VAR3, VAR3->VAR12 + VAR3->VAR10, VAR8);
    }
    VAR3->VAR10 += VAR8;
    if (VAR3->VAR10 == VAR9)
    {
        FUN4(VAR3);
    }
    return VAR8 + sizeof(VAR11);
}