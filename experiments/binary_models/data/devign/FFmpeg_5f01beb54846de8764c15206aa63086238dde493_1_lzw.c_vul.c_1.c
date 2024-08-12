static int FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR4 == VAR5)
    {
        while (VAR2->VAR6 < VAR2->VAR7)
        {
            if (!VAR2->VAR8)
            {
                VAR2->VAR8 = *VAR2->VAR9++;
                if (!VAR2->VAR8)
                {
                    VAR2->VAR10 = 1;
                    break;
                }
            }
            VAR2->VAR11 |= (*VAR2->VAR9++) << VAR2->VAR6;
            VAR2->VAR6 += 8;
            VAR2->VAR8--;
        }
        VAR3 = VAR2->VAR11 & VAR2->VAR12;
        VAR2->VAR11 >>= VAR2->VAR7;
    }
    else
    {
        while (VAR2->VAR6 < VAR2->VAR7)
        {
            if (VAR2->VAR9 >= VAR2->VAR13)
            {
                VAR2->VAR10 = 1;
            }
            VAR2->VAR11 = (VAR2->VAR11 << 8) | (*VAR2->VAR9++);
            VAR2->VAR6 += 8;
        }
        VAR3 = (VAR2->VAR11 >> (VAR2->VAR6 - VAR2->VAR7)) & VAR2->VAR12;
    }
    VAR2->VAR6 -= VAR2->VAR7;
    return VAR3;
}