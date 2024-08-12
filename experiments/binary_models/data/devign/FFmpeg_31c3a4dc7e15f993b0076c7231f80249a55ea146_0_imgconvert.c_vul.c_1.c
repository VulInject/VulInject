static int FUN1(int64_t VAR1, int VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    VAR9 = -1;
    VAR8 = 0x7fffffff;
    for (VAR6 = 0; VAR6 < VAR10; VAR6++)
    {
        if (VAR1 & (1 << VAR6))
        {
            VAR7 = FUN2(VAR6, VAR2, VAR3) & VAR4;
            if (VAR7 == 0)
            {
                VAR5 = FUN3(VAR6);
                if (VAR5 < VAR8)
                {
                    VAR8 = VAR5;
                    VAR9 = VAR6;
                }
            }
        }
    }
    return VAR9;
}