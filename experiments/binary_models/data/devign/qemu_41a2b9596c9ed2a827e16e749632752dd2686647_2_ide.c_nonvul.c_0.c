static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    FUN2("", VAR2->VAR6, VAR2->VAR7, VAR2->VAR8);
    if (VAR2->VAR6 <= 0)
    {
        FUN3(VAR2);
        VAR2->VAR9 = VAR10 | VAR11;
        VAR2->VAR12 = (VAR2->VAR12 & ~7) | VAR13 | VAR14;
        FUN4(VAR2);
        FUN2("", VAR2->VAR9);
    }
    else
    {
        if (VAR2->VAR15 != -1 && VAR2->VAR8 >= VAR2->VAR16)
        {
            VAR5 = FUN5(VAR2->VAR17, VAR2->VAR15, VAR2->VAR18, VAR2->VAR16);
            if (VAR5 < 0)
            {
                FUN3(VAR2);
                FUN6(VAR2, VAR5);
                return;
            }
            VAR2->VAR15++;
            VAR2->VAR8 = 0;
        }
        if (VAR2->VAR7 > 0)
        {
            VAR4 = VAR2->VAR16 - VAR2->VAR8;
            if (VAR4 > VAR2->VAR7)
                VAR4 = VAR2->VAR7;
            FUN7(VAR2, VAR2->VAR18 + VAR2->VAR8, VAR4, VAR19);
            VAR2->VAR6 -= VAR4;
            VAR2->VAR7 -= VAR4;
            VAR2->VAR8 += VAR4;
        }
        else
        {
            VAR2->VAR12 = (VAR2->VAR12 & ~7) | VAR13;
            VAR3 = VAR2->VAR20 | (VAR2->VAR21 << 8);
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
            VAR2->VAR20 = VAR4;
            VAR2->VAR21 = VAR4 >> 8;
            VAR2->VAR7 = VAR4;
            if (VAR2->VAR15 != -1)
            {
                if (VAR4 > (VAR2->VAR16 - VAR2->VAR8))
                    VAR4 = (VAR2->VAR16 - VAR2->VAR8);
            }
            FUN7(VAR2, VAR2->VAR18 + VAR2->VAR8, VAR4, VAR19);
            VAR2->VAR6 -= VAR4;
            VAR2->VAR7 -= VAR4;
            VAR2->VAR8 += VAR4;
            FUN4(VAR2);
            FUN2("", VAR2->VAR9);
        }
    }
}