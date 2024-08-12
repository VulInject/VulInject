static int FUN1(const VAR1 **VAR2, const VAR1 *VAR3)
{
    const VAR1 *VAR4 = *VAR2;
    VAR4++;
    VAR3 -= 2;
    while (VAR4 < VAR3)
    {
        if (*VAR4 == 0)
        {
            while (VAR4 < VAR3 && VAR4[1] == 0)
                VAR4++;
            if (VAR4[-1] == 0 && VAR4[1] == 1)
            {
                *VAR2 = VAR4 + 3;
                return VAR4[2] + 0x100;
            }
        }
        VAR4 += 2;
    }
    VAR3 += 2;
    *VAR2 = VAR3;
    return -1;
}