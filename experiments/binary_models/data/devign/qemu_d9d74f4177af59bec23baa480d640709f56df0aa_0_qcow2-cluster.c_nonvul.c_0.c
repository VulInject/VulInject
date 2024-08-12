static int FUN1(VAR1 *VAR2, uint64_t VAR3, unsigned int *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    FUN2(VAR9, &VAR6->VAR10, VAR11)
    {
        uint64_t VAR12 = VAR3 >> VAR6->VAR13;
        uint64_t VAR14 = VAR12 + *VAR4;
        uint64_t VAR15 = VAR9->VAR16 >> VAR6->VAR13;
        uint64_t VAR17 = VAR15 + VAR9->VAR4;
        if (VAR14 <= VAR15 || VAR12 >= VAR17)
        {
        }
        else
        {
            if (VAR12 < VAR15)
            {
                *VAR4 = VAR15 - VAR12;
            }
            else
            {
                *VAR4 = 0;
            }
            if (*VAR4 == 0)
            {
                FUN3(&VAR6->VAR18);
                FUN4(&VAR9->VAR19);
                FUN5(&VAR6->VAR18);
                return -VAR20;
            }
        }
    }
    if (!*VAR4)
    {
        FUN6();
    }
    return 0;
}