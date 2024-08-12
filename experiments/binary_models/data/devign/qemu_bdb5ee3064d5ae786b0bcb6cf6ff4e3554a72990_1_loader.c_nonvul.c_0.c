int FUN1(VAR1 *VAR2, target_phys_addr_t VAR3, size_t VAR4)
{
    target_phys_addr_t VAR5 = VAR3 + VAR4;
    VAR1 *VAR6, *VAR7 = VAR2;
    size_t VAR8 = 0;
    VAR9 *VAR10;
    FUN2(VAR10, &VAR11, VAR12)
    {
        if (VAR10->VAR13)
        {
            continue;
        }
        if (VAR10->VAR3 + VAR10->VAR14 < VAR3)
        {
            continue;
        }
        if (VAR10->VAR3 > VAR5)
        {
            break;
        }
        if (!VAR10->VAR15)
        {
            continue;
        }
        VAR7 = VAR2 + (VAR10->VAR3 - VAR3);
        VAR6 = VAR10->VAR15;
        VAR8 = VAR10->VAR14;
        if (VAR10->VAR3 < VAR3)
        {
            VAR7 = VAR2;
            VAR6 += (VAR3 - VAR10->VAR3);
            VAR8 -= (VAR3 - VAR10->VAR3);
        }
        if ((VAR7 + VAR8) > (VAR2 + VAR4))
        {
            VAR8 = VAR2 - VAR7;
        }
        memcpy(VAR7, VAR6, VAR8);
    }
    return (VAR7 + VAR8) - VAR2;
}