int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    if (VAR2->VAR8)
    {
        FUN2();
    }
    VAR6 = VAR5;
    while (VAR6 > 0)
    {
        VAR7 = VAR2->VAR9 - VAR2->VAR10;
        if (VAR7 == 0)
        {
            FUN3(VAR2);
            VAR7 = VAR2->VAR9 - VAR2->VAR10;
            if (VAR7 == 0)
            {
                break;
            }
        }
        if (VAR7 > VAR6)
        {
            VAR7 = VAR6;
        }
        memcpy(VAR4, VAR2->VAR4 + VAR2->VAR10, VAR7);
        VAR2->VAR10 += VAR7;
        VAR4 += VAR7;
        VAR6 -= VAR7;
    }
    return VAR5 - VAR6;
}