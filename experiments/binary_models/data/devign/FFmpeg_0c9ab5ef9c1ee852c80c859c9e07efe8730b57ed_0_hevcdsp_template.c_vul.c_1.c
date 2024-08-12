static void FUN1(VAR1)(VAR2 *VAR3, int16_t VAR4)
{
    int VAR5 = 15 - VAR6 - VAR4;
    int VAR7, VAR8;
    int VAR9 = 1 << VAR4;
    if (VAR5 > 0)
    {
        int VAR10 = 1 << (VAR5 - 1);
        for (VAR8 = 0; VAR8 < VAR9; VAR8++)
        {
            for (VAR7 = 0; VAR7 < VAR9; VAR7++)
            {
                *VAR3 = (*VAR3 + VAR10) >> VAR5;
                VAR3++;
            }
        }
    }
    else
    {
        for (VAR8 = 0; VAR8 < VAR9; VAR8++)
        {
            for (VAR7 = 0; VAR7 < VAR9; VAR7++)
            {
                *VAR3 = *VAR3 << -VAR5;
                VAR3++;
            }
        }
    }
}