static int FUN1(VAR1 *VAR2, uint64_t VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10;
    uint64_t VAR11 = *VAR5;
    FUN2(VAR10, &VAR7->VAR12, VAR13)
    {
        uint64_t VAR14 = VAR3;
        uint64_t VAR15 = VAR14 + VAR11;
        uint64_t VAR16 = FUN3(VAR10);
        uint64_t VAR17 = FUN4(VAR10);
        if (VAR15 <= VAR16 || VAR14 >= VAR17)
        {
        }
        else
        {
            if (VAR14 < VAR16)
            {
                VAR11 = VAR16 - VAR14;
            }
            else
            {
                VAR11 = 0;
            }
            if (VAR11 == 0)
            {
                FUN5(&VAR7->VAR18);
                FUN6(&VAR10->VAR19);
                FUN7(&VAR7->VAR18);
                return -VAR20;
            }
        }
    }
    *VAR5 = VAR11;
    return 0;
}