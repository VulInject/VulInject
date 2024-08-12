void FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4)
{
    VAR5 *VAR6, *VAR7;
    FUN2(VAR6, &VAR2->VAR8, VAR7, VAR7)
    {
        if (VAR6->VAR9 >= VAR3 + VAR4 || VAR6->VAR9 + VAR6->VAR4 <= VAR3)
        {
            FUN3(&VAR2->VAR8, VAR6, VAR7);
            VAR2->VAR10--;
            continue;
        }
        if (VAR6->VAR9 < VAR3)
        {
            VAR6->VAR4 -= VAR3 - VAR6->VAR9;
            if (VAR6->VAR11)
            {
                VAR6->VAR11 += VAR3 - VAR6->VAR9;
            }
            VAR6->VAR9 = VAR3;
        }
        if (VAR6->VAR9 + VAR6->VAR4 > VAR3 + VAR4)
        {
            VAR6->VAR4 -= VAR6->VAR9 + VAR6->VAR4 - VAR3 - VAR4;
        }
    }