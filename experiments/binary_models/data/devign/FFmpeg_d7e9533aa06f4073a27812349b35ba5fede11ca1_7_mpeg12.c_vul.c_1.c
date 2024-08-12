void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    if (!VAR3)
    {
        int VAR4;
        int VAR5;
        VAR3 = 1;
        for (VAR4 = 1; VAR4 <= VAR6; VAR4++)
        {
            for (VAR5 = -VAR7; VAR5 <= VAR7; VAR5++)
            {
                int VAR8;
                if (VAR5 == 0)
                    VAR8 = VAR9[0][1];
                else
                {
                    int VAR10, VAR11, VAR12, VAR13;
                    VAR11 = VAR2->VAR4 - 1;
                    VAR12 = 1 << VAR11;
                    VAR10 = VAR5;
                    if (VAR10 < 0)
                        VAR10 = -VAR10;
                    VAR10--;
                    VAR13 = (VAR10 >> VAR11) + 1;
                    if (VAR13 < 17)
                    {
                        VAR8 = VAR9[VAR13][1] + 1 + VAR11;
                    }
                    else
                    {
                        VAR8 = VAR9[16][1] + 2 + VAR11;
                    }
                }
                VAR14[VAR4][VAR5 + VAR7] = VAR8;
            }
        }
        for (VAR4 = VAR6; VAR4 > 0; VAR4--)
        {
            for (VAR5 = -(8 << VAR4); VAR5 < (8 << VAR4); VAR5++)
            {
                VAR15[VAR5 + VAR7] = VAR4;
            }
        }
    }
    VAR2->VAR14 = VAR14;
    VAR2->VAR15 = VAR15;
}