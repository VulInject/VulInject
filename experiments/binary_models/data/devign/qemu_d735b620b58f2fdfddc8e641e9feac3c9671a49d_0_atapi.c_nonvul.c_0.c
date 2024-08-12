void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    FUN2("", VAR2->VAR6, VAR2->VAR7, VAR2->VAR8);
    if (VAR2->VAR6 <= 0)
    {
        FUN3(VAR2);
        FUN4(VAR2->VAR9);
        FUN2("", VAR2->VAR10);
    }
    else
    {
        if (VAR2->VAR11 != -1 && VAR2->VAR8 >= VAR2->VAR12)
        {
            VAR5 = FUN5(VAR2, VAR2->VAR11, VAR2->VAR13, VAR2->VAR12);
            if (VAR5 < 0)
            {
                FUN6(VAR2, VAR5);
                return;
            }
            VAR2->VAR11++;
            VAR2->VAR8 = 0;
        }
        if (VAR2->VAR7 > 0)
        {
            VAR4 = VAR2->VAR12 - VAR2->VAR8;
            if (VAR4 > VAR2->VAR7)
                VAR4 = VAR2->VAR7;
            VAR2->VAR6 -= VAR4;
            VAR2->VAR7 -= VAR4;
            VAR2->VAR8 += VAR4;
            FUN7(VAR2, VAR2->VAR13 + VAR2->VAR8 - VAR4, VAR4, VAR14);
        }
        else
        {
            VAR2->VAR15 = (VAR2->VAR15 & ~7) | VAR16;
            VAR3 = VAR2->VAR17 | (VAR2->VAR18 << 8);
            FUN2("", VAR3);
            if (VAR3 == 0xffff)
                VAR3--;
            VAR4 = VAR2->VAR6;
            if (VAR4 > VAR3)
            {
                if (VAR3 & 1)
                    VAR3--;
                VAR4 = VAR3;
            }
            VAR2->VAR17 = VAR4;
            VAR2->VAR18 = VAR4 >> 8;
            VAR2->VAR7 = VAR4;
            if (VAR2->VAR11 != -1)
            {
                if (VAR4 > (VAR2->VAR12 - VAR2->VAR8))
                    VAR4 = (VAR2->VAR12 - VAR2->VAR8);
            }
            VAR2->VAR6 -= VAR4;
            VAR2->VAR7 -= VAR4;
            VAR2->VAR8 += VAR4;
            FUN7(VAR2, VAR2->VAR13 + VAR2->VAR8 - VAR4, VAR4, VAR14);
            FUN4(VAR2->VAR9);
            FUN2("", VAR2->VAR10);
        }
    }
}