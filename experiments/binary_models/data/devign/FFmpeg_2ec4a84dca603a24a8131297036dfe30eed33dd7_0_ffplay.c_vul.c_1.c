static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    int VAR6;
    double VAR7;
    int VAR8, VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    for (;;)
    {
        while (VAR3->VAR17 && !VAR3->VAR18.VAR19)
        {
            FUN2(10);
        }
        if (!(VAR5 = FUN3(&VAR3->VAR20)))
            return 0;
        if ((VAR6 = FUN4(&VAR3->VAR21, &VAR5->VAR22)) < 0)
            break;
        VAR7 = 0;
        if (VAR6 && VAR5->VAR22.VAR23 == 0)
        {
            if (VAR5->VAR22.VAR7 != VAR24)
                VAR7 = VAR5->VAR22.VAR7 / (double)VAR25;
            VAR5->VAR7 = VAR7;
            VAR5->VAR26 = VAR3->VAR21.VAR27;
            for (VAR8 = 0; VAR8 < VAR5->VAR22.VAR28; VAR8++)
            {
                for (VAR9 = 0; VAR9 < VAR5->VAR22.VAR29[VAR8]->VAR30; VAR9++)
                {
                    FUN5(VAR10, VAR11, VAR12, VAR16, (VAR31 *)VAR5->VAR22.VAR29[VAR8]->VAR32.VAR33[1] + VAR9);
                    VAR13 = FUN6(VAR10, VAR11, VAR12);
                    VAR14 = FUN7(VAR10, VAR11, VAR12, 0);
                    VAR15 = FUN8(VAR10, VAR11, VAR12, 0);
                    FUN9((VAR31 *)VAR5->VAR22.VAR29[VAR8]->VAR32.VAR33[1] + VAR9, VAR13, VAR14, VAR15, VAR16);
                }
            }
            FUN10(&VAR3->VAR20);
        }
        else if (VAR6)
        {
            FUN11(&VAR5->VAR22);
        }
    }
    return 0;
}