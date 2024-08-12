int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4)
{
    int VAR5, VAR6;
    VAR6 = VAR4;
    while (VAR4 > 0)
    {
        VAR5 = VAR2->VAR7 - VAR2->VAR8;
        if (VAR5 > VAR4)
            VAR5 = VAR4;
        if (VAR5 == 0)
        {
            if (VAR4 > VAR2->VAR9 && !VAR2->VAR10)
            {
                VAR5 = VAR2->FUN2(VAR2->VAR11, VAR3, VAR4);
                if (VAR5 <= 0)
                {
                    VAR2->VAR12 = 1;
                    if (VAR5 < 0)
                        VAR2->VAR13 = VAR5;
                    break;
                }
                else
                {
                    VAR2->VAR14 += VAR5;
                    VAR4 -= VAR5;
                    VAR3 += VAR5;
                    VAR2->VAR8 = VAR2->VAR15;
                    VAR2->VAR7 = VAR2->VAR15;
                }
            }
            else
            {
                FUN3(VAR2);
                VAR5 = VAR2->VAR7 - VAR2->VAR8;
                if (VAR5 == 0)
                    break;
            }
        }
        else
        {
            memcpy(VAR3, VAR2->VAR8, VAR5);
            VAR3 += VAR5;
            VAR2->VAR8 += VAR5;
            VAR4 -= VAR5;
        }
    }
    return VAR6 - VAR4;
}