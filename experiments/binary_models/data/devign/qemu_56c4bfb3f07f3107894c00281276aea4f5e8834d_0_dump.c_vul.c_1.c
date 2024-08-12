static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int64_t VAR5;
    int VAR6;
    while (1)
    {
        VAR4 = VAR2->VAR4;
        VAR5 = VAR4->VAR7;
        if (VAR2->VAR8)
        {
            VAR5 -= VAR2->VAR9;
            if (VAR2->VAR10 + VAR2->VAR7 < VAR4->VAR11 + VAR4->VAR7)
            {
                VAR5 -= VAR4->VAR11 + VAR4->VAR7 - (VAR2->VAR10 + VAR2->VAR7);
            }
        }
        VAR6 = FUN2(VAR2, VAR4, VAR2->VAR9, VAR5);
        if (VAR6 == -1)
        {
            return VAR6;
        }
        VAR6 = FUN3(VAR2, VAR4);
        if (VAR6 == 1)
        {
            FUN4(VAR2);
            return 0;
        }
    }
}