static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    VAR3 = VAR2->VAR6[VAR7];
    for (VAR4 = 0; VAR4 < VAR2->VAR8; VAR4++)
    {
        int VAR9 = VAR3 + VAR2->VAR10[VAR4];
        for (; VAR3 < VAR9; VAR3++)
        {
            for (VAR5 = 1; VAR5 <= VAR2->VAR11; VAR5++)
            {
                if (VAR2->VAR12[VAR5])
                {
                    VAR2->VAR13[VAR5][VAR3] = ((VAR14)VAR2->VAR13[VAR7][VAR3] * (VAR14)VAR2->VAR15[VAR5][VAR4]) >> 23;
                    if (VAR5 == 2 && VAR2->VAR16[VAR4])
                        VAR2->VAR13[VAR5][VAR3] = -VAR2->VAR13[VAR5][VAR3];
                }
            }
        }
    }
}