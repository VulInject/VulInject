static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    int64_t VAR5;
    VAR5 = VAR2->VAR6;
    if (VAR4->VAR7 != VAR8)
    {
        if (VAR5 < 0)
        {
            VAR4->VAR6 = VAR5;
            VAR4->VAR9 = 1;
        }
        else if (!VAR4->VAR9)
        {
            VAR4->VAR6 = VAR2->VAR10;
        }
    }
    else
    {
        if (VAR5 < 0)
        {
            memset(VAR2->VAR11, 0, VAR2->VAR10);
            VAR4->VAR6 = VAR5;
            VAR4->VAR9 = 1;
        }
        else if (VAR5 < VAR2->VAR10)
        {
            memset(VAR2->VAR11 + VAR5, 0, VAR2->VAR10 - VAR5);
            if (!VAR4->VAR9)
            {
                VAR4->VAR6 = VAR2->VAR10;
            }
        }
        else if (!VAR4->VAR9)
        {
            VAR4->VAR6 = VAR5;
        }
    }
    VAR4->VAR12 = FUN2(VAR13, VAR4);
    FUN3(VAR4->VAR12);
    FUN4(VAR2);
}