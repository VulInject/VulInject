static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    const VAR3 *VAR10 = VAR5 + VAR6;
    int VAR11 = 0, VAR12 = 0;
    VAR11 += VAR13;
    if (VAR11 >= VAR7)
    {
        VAR12++;
        if (VAR12 >= VAR8)
            return 0;
        VAR11 = 0;
    }
    while (VAR10 - VAR5 >= 2)
    {
        uint8_t VAR14 = *VAR5++;
        if (VAR14 > 0 && VAR14 < 0xC0)
        {
            do
            {
                int VAR15 = FUN2(VAR14, VAR7 - VAR11);
                if (VAR15 <= 0)
                    break;
                memset(VAR4 + VAR12 * VAR9 + VAR11, FUN3(*VAR5), VAR15);
                FUN4(VAR15);
                VAR14 -= VAR15;
            } while (VAR14 > 0);
            VAR5++;
        }
        else if (VAR14 >= 0xC1)
        {
            VAR14 -= 0xC0;
            do
            {
                int VAR15 = FUN5(VAR14, VAR7 - VAR11, VAR10 - VAR5);
                if (VAR10 - VAR5 < VAR15 || VAR15 <= 0)
                    break;
                FUN6(VAR4 + VAR12 * VAR9 + VAR11, VAR5, VAR15);
                FUN4(VAR15);
                VAR5 += VAR15;
                VAR14 -= VAR15;
            } while (VAR14 > 0);
        }
        else
        {
            FUN7(VAR2, "", VAR14);
            return VAR16;
        }
    }
    return 0;
}