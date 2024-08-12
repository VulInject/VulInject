static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9 = FUN2(VAR4->VAR7);
    int64_t VAR10 = VAR4->VAR10;
    int64_t VAR11;
    int VAR12;
    int VAR13 = -VAR14;
    for (VAR11 = VAR4->VAR15; VAR11 < VAR4->VAR10;)
    {
        FUN3();
        if (FUN4(VAR4, VAR11))
        {
            FUN5();
            FUN6(VAR4->VAR7);
        }
        else
        {
            FUN5();
        }
        FUN7(VAR4->VAR16);
        if (FUN8(VAR9, VAR4->VAR16, VAR11))
        {
            if (VAR10 - VAR11 < VAR17)
            {
                VAR12 = VAR10 - VAR11;
            }
            else
            {
                VAR12 = VAR17;
            }
            FUN9(VAR4->VAR16, VAR11, VAR12);
            FUN10(VAR4->VAR16);
            VAR7 = FUN11(VAR6, 1);
            VAR7->VAR18 = FUN12(VAR19);
            VAR7->VAR4 = VAR4;
            VAR7->VAR11 = VAR11;
            VAR7->VAR12 = VAR12;
            if (VAR5)
            {
                VAR7->VAR20.VAR21 = VAR7->VAR18;
                VAR7->VAR20.VAR22 = VAR12 * VAR23;
                FUN13(&VAR7->VAR24, &VAR7->VAR20, 1);
                VAR7->VAR25 = FUN14(VAR4->VAR7, VAR11 * VAR23, &VAR7->VAR24, 0, VAR26, VAR7);
                FUN3();
                VAR27.VAR28++;
                FUN15(VAR4, VAR11, VAR12, 1);
                FUN5();
            }
            else
            {
                VAR13 = FUN16(VAR4->VAR7, VAR11 * VAR23, VAR7->VAR18, VAR12 * VAR23);
                if (VAR13 < 0)
                {
                    goto VAR29;
                }
                FUN17(VAR2, VAR7);
                FUN18(VAR7->VAR18);
                FUN18(VAR7);
            }
            VAR11 += VAR12;
            VAR4->VAR15 = VAR11;
            break;
        }
        FUN10(VAR4->VAR16);
        VAR11 += VAR17;
        VAR4->VAR15 = VAR11;
    }
    return (VAR4->VAR15 >= VAR4->VAR10);
VAR29:
    FUN19("" VAR30 "", VAR11);
    FUN18(VAR7->VAR18);
    FUN18(VAR7);
    return VAR13;
}