static void FUN1(int VAR1, int VAR2, sb_int8_array VAR3)
{
    int VAR4, VAR5;
    int VAR6;
    int VAR7, VAR8;
    int VAR9[23] = {0, 5, 1, 5, 5, 5, 5, 5, 2, 5, 5, 5, 5, 5, 5, 5, 3, 5, 5, 5, 5, 5, 4};
    for (VAR6 = 0; VAR6 < VAR2; VAR6++)
    {
        for (VAR4 = 0; VAR4 < 64;)
        {
            if ((VAR3[VAR6][VAR1][VAR4] - 8) > 22)
            {
                VAR7 = 1;
                VAR8 = 8;
            }
            else
            {
                switch (VAR9[VAR3[VAR6][VAR1][VAR4]])
                {
                case 0:
                    VAR7 = 10;
                    VAR8 = 10;
                    break;
                case 1:
                    VAR7 = 1;
                    VAR8 = 16;
                    break;
                case 2:
                    VAR7 = 5;
                    VAR8 = 24;
                    break;
                case 3:
                    VAR7 = 3;
                    VAR8 = 30;
                    break;
                case 4:
                    VAR7 = 1;
                    VAR8 = 30;
                    break;
                case 5:
                    VAR7 = 1;
                    VAR8 = 8;
                    break;
                default:
                    VAR7 = 1;
                    VAR8 = 8;
                    break;
                }
            }
            for (VAR5 = 0; VAR5 < VAR7; VAR5++)
                if (VAR4 + VAR5 < 128)
                    if (VAR3[VAR6][VAR1 + (VAR4 + VAR5) / 64][(VAR4 + VAR5) % 64] > VAR3[VAR6][VAR1][VAR4])
                        if (VAR5 > 0)
                        {
                            VAR10 memset(&VAR3[VAR6][VAR1][VAR4 + VAR5], VAR8, VAR5 * sizeof(VAR11));
                            memset(&VAR3[VAR6][VAR1][VAR4 + VAR5], VAR8, 3 * sizeof(VAR11));
                        }
            VAR4 += VAR7;
        }
    }
}