static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    if (VAR2->VAR6 > 0)
    {
        if (VAR2->VAR7 & VAR8)
        {
            FUN2(VAR2, false);
        VAR9:
            VAR2->VAR6 = 0;
            FUN3(VAR2);
        }
        else
        {
            do
            {
                (*VAR2->VAR10)(VAR2, VAR2->VAR11, VAR2->VAR12, 0, 0, VAR2->VAR13, 1);
                FUN4(VAR2, VAR2->VAR11, 0, VAR2->VAR13, 1);
                VAR2->VAR11 += VAR2->VAR14;
                VAR2->VAR6 -= VAR2->VAR15;
                if (VAR2->VAR6 <= 0)
                    goto VAR9;
                VAR5 = VAR2->VAR12 + VAR2->VAR15;
                VAR3 = VAR2->VAR16 - VAR5;
                memmove(VAR2->VAR12, VAR5, VAR3);
                VAR2->VAR17 = VAR2->VAR12 + VAR3;
                VAR2->VAR16 = VAR2->VAR12 + VAR2->VAR15;
            } while (VAR2->VAR17 >= VAR2->VAR16);
        }
    }
}