int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4)
{
    int VAR5, VAR6;
    VAR6 = VAR4;
    while (VAR4 > 0)
    {
        VAR5 = FUN2(VAR2->VAR7 - VAR2->VAR8, VAR4);
        if (VAR5 == 0 || VAR2->VAR9)
        {
            if ((VAR2->VAR10 || VAR4 > VAR2->VAR11) && !VAR2->VAR12)
            {
                VAR5 = FUN3(VAR2, VAR3, VAR4);
                if (VAR5 == VAR13)
                {
                    VAR2->VAR14 = 1;
                    break;
                }
                else if (VAR5 < 0)
                {
                    VAR2->VAR14 = 1;
                    VAR2->VAR15 = VAR5;
                    break;
                }
                else
                {
                    VAR2->VAR16 += VAR5;
                    VAR2->VAR17 += VAR5;
                    VAR4 -= VAR5;
                    VAR3 += VAR5;
                    VAR2->VAR8 = VAR2->VAR18;
                    VAR2->VAR7 = VAR2->VAR18;
                }
            }
            else
            {
                FUN4(VAR2);
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
    if (VAR6 == VAR4)
    {
        if (VAR2->VAR15)
            return VAR2->VAR15;
        if (FUN5(VAR2))
            return VAR13;
    }
    return VAR6 - VAR4;
}