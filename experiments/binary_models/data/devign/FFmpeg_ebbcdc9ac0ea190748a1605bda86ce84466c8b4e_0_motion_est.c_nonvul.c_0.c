void FUN1(VAR1 *VAR2, FUN2 (*VAR3)[2], int VAR4, int VAR5)
{
    int VAR6;
    int VAR7 = (((VAR2->VAR8 == VAR9) ? 8 : 16) << VAR4);
    if (VAR2->VAR10->VAR11 && VAR7 > VAR2->VAR10->VAR11)
        VAR7 = VAR2->VAR10->VAR11;
    for (VAR6 = 0; VAR6 < VAR2->VAR12; VAR6++)
    {
        int VAR13;
        int VAR14 = (VAR6 + 1) * (VAR2->VAR15 + 2) + 1;
        int VAR16 = VAR6 * VAR2->VAR15;
        for (VAR13 = 0; VAR13 < VAR2->VAR15; VAR13++)
        {
            if (VAR2->VAR17[VAR16] & VAR5)
            {
                if (VAR3[VAR14][0] >= VAR7 || VAR3[VAR14][0] < -VAR7 || VAR3[VAR14][1] >= VAR7 || VAR3[VAR14][1] < -VAR7)
                {
                    if (VAR2->VAR8 == VAR9 && 0)
                    {
                    }
                    else
                    {
                        if (VAR3[VAR14][0] > VAR7 - 1)
                            VAR3[VAR14][0] = VAR7 - 1;
                        else if (VAR3[VAR14][0] < -VAR7)
                            VAR3[VAR14][0] = -VAR7;
                        if (VAR3[VAR14][1] > VAR7 - 1)
                            VAR3[VAR14][1] = VAR7 - 1;
                        else if (VAR3[VAR14][1] < -VAR7)
                            VAR3[VAR14][1] = -VAR7;
                    }
                }
            }
            VAR14++;
            VAR16++;
        }
    }
}