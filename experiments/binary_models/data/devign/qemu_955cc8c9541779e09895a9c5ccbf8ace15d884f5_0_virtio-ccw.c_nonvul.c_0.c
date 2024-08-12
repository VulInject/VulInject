static int FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4, uint16_t VAR5, uint16_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    if (VAR5 >= VAR9)
    {
        return -VAR10;
    }
    if (VAR3 && (VAR4 != 4096))
    {
        return -VAR10;
    }
    if (!VAR8)
    {
        return -VAR10;
    }
    FUN3(VAR8, VAR5, VAR3);
    if (!VAR3)
    {
        FUN4(VAR8, VAR5, VAR11);
    }
    else
    {
        if (FUN5(VAR8, VAR5) > VAR6)
        {
            return -VAR10;
        }
        FUN4(VAR8, VAR5, VAR5);
    }
    VAR8->VAR12 = VAR9;
    return 0;
}