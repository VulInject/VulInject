static int FUN1(const VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11)
{
    uint64_t VAR12 = 0;
    VAR10 *VAR13 = VAR11;
    VAR10 *VAR14 = VAR11 + VAR9;
    const VAR15 *VAR16 = VAR6->VAR17 + (VAR7 + 7) / 8;
    uint8_t VAR18, VAR19;
    int VAR20, VAR21 = 0;
    while (VAR6->VAR17 < VAR16)
    {
        FUN2(VAR12, VAR21, VAR6);
        while (VAR21 >= VAR22)
        {
            const HufDec VAR23 = VAR4[(VAR12 >> (VAR21 - VAR22)) & VAR24];
            if (VAR23.VAR25)
            {
                VAR21 -= VAR23.VAR25;
                FUN3(VAR23.VAR26, VAR8, VAR12, VAR21, VAR6, VAR11, VAR14);
            }
            else
            {
                int VAR27;
                if (!VAR23.VAR28)
                    return VAR29;
                for (VAR27 = 0; VAR27 < VAR23.VAR26; VAR27++)
                {
                    int VAR30 = VAR2[VAR23.VAR28[VAR27]] & 63;
                    while (VAR21 < VAR30 && FUN4(VAR6) > 0)
                        FUN2(VAR12, VAR21, VAR6);
                    if (VAR21 >= VAR30)
                    {
                        if ((VAR2[VAR23.VAR28[VAR27]] >> 6) == ((VAR12 >> (VAR21 - VAR30)) & ((1LL << VAR30) - 1)))
                        {
                            VAR21 -= VAR30;
                            FUN3(VAR23.VAR28[VAR27], VAR8, VAR12, VAR21, VAR6, VAR11, VAR14);
                            break;
                        }
                    }
                }
                if (VAR27 == VAR23.VAR26)
                    return VAR29;
            }
        }
    }
    VAR20 = (8 - VAR7) & 7;
    VAR12 >>= VAR20;
    VAR21 -= VAR20;
    while (VAR21 > 0)
    {
        const HufDec VAR23 = VAR4[(VAR12 << (VAR22 - VAR21)) & VAR24];
        if (VAR23.VAR25)
        {
            VAR21 -= VAR23.VAR25;
            FUN3(VAR23.VAR26, VAR8, VAR12, VAR21, VAR6, VAR11, VAR14);
        }
        else
        {
            return VAR29;
        }
    }
    if (VAR11 - VAR13 != VAR9)
        return VAR29;
    return 0;
}