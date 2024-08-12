static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    unsigned VAR10 = VAR2->VAR11 - 1;
    int VAR12, VAR13, VAR14, VAR15;
    VAR15 = 0;
    if (VAR8->VAR16 != NULL)
    {
        if (VAR3 & VAR10)
        {
            VAR14 = VAR3 & VAR10;
            VAR12 = (VAR14 + VAR6 + VAR10) & ~VAR10;
            if (VAR12 > VAR8->VAR17)
                VAR12 = VAR8->VAR17;
            VAR13 = FUN2(VAR2, VAR3 - VAR14, VAR8->VAR16, VAR12);
            if (VAR13 < 0)
                return VAR13;
            VAR12 = VAR2->VAR11 - VAR14;
            if (VAR12 > VAR6)
                VAR12 = VAR6;
            memcpy(VAR5, VAR8->VAR16 + VAR14, VAR12);
            VAR5 += VAR12;
            VAR3 += VAR12;
            VAR6 -= VAR12;
            VAR15 += VAR12;
            if (VAR6 == 0)
                return VAR15;
        }
        if (VAR6 & VAR10 || (VAR18)VAR5 & VAR10)
        {
            while (VAR6)
            {
                VAR12 = (VAR6 + VAR10) & ~VAR10;
                if (VAR12 > VAR8->VAR17)
                    VAR12 = VAR8->VAR17;
                VAR13 = FUN2(VAR2, VAR3, VAR8->VAR16, VAR12);
                if (VAR13 < 0)
                {
                    return VAR13;
                }
                else if (VAR13 == 0)
                {
                    fprintf(VAR19, "");
                    FUN3();
                }
                VAR12 = VAR13;
                if (VAR12 > VAR6)
                    VAR12 = VAR6;
                memcpy(VAR5, VAR8->VAR16, VAR12);
                VAR5 += VAR12;
                VAR3 += VAR12;
                VAR6 -= VAR12;
                VAR15 += VAR12;
            }
            return VAR15;
        }
    }
    return FUN2(VAR2, VAR3, VAR5, VAR6) + VAR15;
}