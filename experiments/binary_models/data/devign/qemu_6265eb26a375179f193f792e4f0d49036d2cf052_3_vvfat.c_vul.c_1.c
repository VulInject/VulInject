static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, const char *VAR6)
{
    int VAR7 = 0;
    int VAR8 = 0;
    int32_t VAR9 = 0;
    uint32_t VAR10 = FUN2(VAR5);
    uint32_t VAR11 = 0;
    int VAR12 = -1;
    VAR13 *VAR14 = NULL;
    const char *VAR15 = NULL;
    FUN3(VAR3);
    if (VAR10 == 0)
        return 0;
    if (VAR3->VAR16)
    {
        VAR15 = FUN4(VAR6);
        VAR14 = FUN5(VAR3, VAR10);
        if (VAR14)
        {
            const char *VAR17;
            assert(VAR14->VAR18 & VAR19);
            VAR14->VAR18 &= ~VAR19;
            VAR17 = FUN4(VAR14->VAR6);
            assert(VAR14->VAR18 & VAR20);
            if (strcmp(VAR17, VAR15))
                FUN6(VAR3, VAR10, strdup(VAR6));
        }
        else if (FUN7(VAR5))
            FUN8(VAR3, strdup(VAR6), VAR10);
        else
        {
            assert(0);
            return 0;
        }
    }
    while (1)
    {
        if (VAR3->VAR16)
        {
            if (!VAR7 && FUN9(VAR3, VAR10))
            {
                if (VAR14 == NULL || VAR14->VAR21 > VAR10 || VAR14->VAR22 <= VAR10)
                    VAR14 = FUN5(VAR3, VAR10);
                if (VAR14 && (VAR14->VAR18 & VAR23) == 0)
                {
                    if (VAR11 != VAR14->VAR24.VAR25.VAR11 + VAR3->VAR26 * (VAR10 - VAR14->VAR21))
                    {
                        assert(0);
                        VAR7 = 1;
                    }
                    else if (VAR11 == 0)
                    {
                        const char *VAR17 = FUN4(VAR14->VAR6);
                        if (strcmp(VAR17, VAR15))
                            VAR7 = 1;
                        VAR12 = FUN10(&(VAR3->VAR14), VAR14);
                    }
                    if (VAR14->VAR12 != VAR12 && VAR14->VAR24.VAR25.VAR11 > 0)
                    {
                        assert(0);
                        VAR7 = 1;
                    }
                    if (!VAR8 && FUN7(VAR5))
                    {
                        VAR8 = 1;
                        FUN11(VAR3, VAR14->VAR27, VAR11);
                    }
                }
            }
            if (VAR7)
            {
                int VAR28, VAR29;
                int64_t VAR11 = FUN12(VAR3, VAR10);
                FUN3(VAR3);
                for (VAR28 = 0; VAR28 < VAR3->VAR30; VAR28++)
                    if (!VAR3->VAR16->VAR31->FUN13(VAR3->VAR16, VAR11 + VAR28, 1, &VAR29))
                    {
                        if (FUN14(VAR3->VAR32, VAR11, VAR3->VAR33, 1))
                            return -1;
                        if (VAR3->VAR16->VAR31->FUN15(VAR3->VAR16, VAR11, VAR3->VAR33, 1))
                            return -2;
                    }
            }
        }
        VAR9++;
        if (VAR3->VAR34[VAR10] & VAR35)
            return 0;
        VAR3->VAR34[VAR10] = VAR36;
        VAR10 = FUN16(VAR3, VAR10);
        if (FUN17(VAR3, VAR10))
            return VAR9;
        else if (VAR10 < 2 || VAR10 > VAR3->VAR37 - 16)
            return -1;
        VAR11 += VAR3->VAR26;
    }
}