static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    VAR13 = 0;
    if (VAR8->VAR14 != NULL)
    {
        if (VAR3 & 0x1ff)
        {
            VAR12 = VAR3 & 0x1ff;
            VAR10 = (VAR12 + VAR6 + 0x1ff) & ~0x1ff;
            if (VAR10 > VAR15)
                VAR10 = VAR15;
            VAR11 = FUN2(VAR2, VAR3 - VAR12, VAR8->VAR14, VAR10);
            if (VAR11 < 0)
                return VAR11;
            VAR10 = 512 - VAR12;
            if (VAR10 > VAR6)
                VAR10 = VAR6;
            memcpy(VAR5, VAR8->VAR14 + VAR12, VAR10);
            VAR5 += VAR10;
            VAR3 += VAR10;
            VAR6 -= VAR10;
            VAR13 += VAR10;
            if (VAR6 == 0)
                return VAR13;
        }
        if (VAR6 & 0x1ff || (VAR16)VAR5 & 0x1ff)
        {
            while (VAR6)
            {
                VAR10 = (VAR6 + 0x1ff) & ~0x1ff;
                if (VAR10 > VAR15)
                    VAR10 = VAR15;
                VAR11 = FUN2(VAR2, VAR3, VAR8->VAR14, VAR10);
                if (VAR11 < 0)
                    return VAR11;
                VAR10 = VAR11;
                if (VAR10 > VAR6)
                    VAR10 = VAR6;
                memcpy(VAR5, VAR8->VAR14, VAR10);
                VAR5 += VAR10;
                VAR3 += VAR10;
                VAR6 -= VAR10;
                VAR13 += VAR10;
            }
            return VAR13;
        }
    }
    return FUN2(VAR2, VAR3, VAR5, VAR6) + VAR13;
}