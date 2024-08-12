static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9;
    int64_t VAR10 = VAR6->VAR10;
    int64_t VAR11;
    int VAR12;
    int VAR13 = -VAR14;
    for (VAR11 = VAR6->VAR15; VAR11 < VAR6->VAR10;)
    {
        if (FUN2(VAR6, VAR11))
        {
            FUN3();
        }
        if (FUN4(VAR6->VAR16, VAR11))
        {
            if (VAR10 - VAR11 < VAR17)
            {
                VAR12 = VAR10 - VAR11;
            }
            else
            {
                VAR12 = VAR17;
            }
            VAR9 = FUN5(sizeof(VAR8));
            VAR9->VAR18 = FUN5(VAR19);
            VAR9->VAR6 = VAR6;
            VAR9->VAR11 = VAR11;
            VAR9->VAR12 = VAR12;
            if (VAR7)
            {
                VAR9->VAR20.VAR21 = VAR9->VAR18;
                VAR9->VAR20.VAR22 = VAR12 * VAR23;
                FUN6(&VAR9->VAR24, &VAR9->VAR20, 1);
                if (VAR25.VAR26 == 0)
                {
                    VAR25.VAR27 = FUN7(VAR28);
                }
                VAR9->VAR29 = FUN8(VAR6->VAR16, VAR11, &VAR9->VAR24, VAR12, VAR30, VAR9);
                if (!VAR9->VAR29)
                {
                    goto VAR31;
                }
                VAR25.VAR26++;
                FUN9(VAR6, VAR11, VAR12, 1);
            }
            else
            {
                VAR13 = FUN10(VAR6->VAR16, VAR11, VAR9->VAR18, VAR12);
                if (VAR13 < 0)
                {
                    goto VAR31;
                }
                FUN11(VAR4, VAR9);
                FUN12(VAR9->VAR18);
                FUN12(VAR9);
            }
            FUN13(VAR6->VAR16, VAR11, VAR12);
            break;
        }
        VAR11 += VAR17;
        VAR6->VAR15 = VAR11;
    }
    return (VAR6->VAR15 >= VAR6->VAR10);
VAR31:
    FUN14(VAR2, "" VAR32 "", VAR11);
    FUN15(VAR4, VAR13);
    FUN12(VAR9->VAR18);
    FUN12(VAR9);
    return 0;
}