static int FUN1(VAR1 *VAR2, long VAR3, long VAR4, int VAR5)
{
    int VAR6;
    VAR6 = VAR2->VAR7[0][VAR3] != VAR2->VAR7[0][VAR4];
    if (!VAR6 && VAR2->VAR7[0][VAR3] != -1)
        VAR6 = VAR2->VAR8[0][VAR3][0] - VAR2->VAR8[0][VAR4][0] + 3 >= 7U | FUN2(VAR2->VAR8[0][VAR3][1] - VAR2->VAR8[0][VAR4][1]) >= VAR5;
    if (VAR2->VAR9 == 2)
    {
        if (!VAR6)
            VAR6 = VAR2->VAR7[1][VAR3] != VAR2->VAR7[1][VAR4] | VAR2->VAR8[1][VAR3][0] - VAR2->VAR8[1][VAR4][0] + 3 >= 7U | FUN2(VAR2->VAR8[1][VAR3][1] - VAR2->VAR8[1][VAR4][1]) >= VAR5;
        if (VAR6)
        {
            if (VAR2->VAR7[0][VAR3] != VAR2->VAR7[1][VAR4] | VAR2->VAR7[1][VAR3] != VAR2->VAR7[0][VAR4])
                return 1;
            return VAR2->VAR8[0][VAR3][0] - VAR2->VAR8[1][VAR4][0] + 3 >= 7U | FUN2(VAR2->VAR8[0][VAR3][1] - VAR2->VAR8[1][VAR4][1]) >= VAR5 | VAR2->VAR8[1][VAR3][0] - VAR2->VAR8[0][VAR4][0] + 3 >= 7U | FUN2(VAR2->VAR8[1][VAR3][1] - VAR2->VAR8[0][VAR4][1]) >= VAR5;
        }
    }
    return VAR6;
}