static int FUN1(VAR1 *VAR2, uint8_t VAR3, struct VAR4 *VAR5, unsigned int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    uint64_t VAR9;
    size_t VAR10;
    if (!FUN3(VAR8, VAR11))
    {
        return VAR12;
    }
    VAR10 = FUN4(VAR5, VAR6, 0, &VAR9, sizeof(VAR9));
    if (VAR10 != sizeof(VAR9))
    {
        return VAR12;
    }
    if (VAR3 == VAR13)
    {
        uint64_t VAR14;
        if (!VAR2->VAR15)
        {
            return VAR12;
        }
        VAR14 = FUN5(VAR2);
        if (VAR9 & ~VAR14)
        {
            return VAR12;
        }
        VAR2->VAR16 = VAR9;
        FUN6(VAR2);
        return VAR17;
    }
    else
    {
        return VAR12;
    }
}