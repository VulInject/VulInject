static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int VAR5 = VAR2->VAR6;
    int VAR7 = VAR2->VAR8;
    int VAR9;
    for (VAR4 = 0; VAR4 < VAR7; VAR4++)
    {
        for (VAR3 = 0; VAR3 < VAR5; VAR3++)
        {
            if ((VAR9 = FUN2(VAR2, 0, VAR3, VAR4)) < 0)
                return VAR9;
        }
    }
    return 0;