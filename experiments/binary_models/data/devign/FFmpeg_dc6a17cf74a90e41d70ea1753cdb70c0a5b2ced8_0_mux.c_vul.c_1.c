static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = FUN2(VAR4->VAR8->VAR9, VAR4->VAR8->VAR10 > 0);
    int VAR11, VAR12, VAR13, VAR14;
    FUN3(VAR2, "", FUN4(VAR6->VAR15), FUN4(VAR6->VAR16), FUN4(VAR4->VAR17), VAR7, VAR6->VAR18, VAR6->VAR19);
    if (VAR6->VAR20 == 0)
    {
        FUN5(&VAR11, &VAR12, VAR4, NULL, VAR6);
        if (VAR12 && VAR11)
        {
            VAR6->VAR20 = FUN6(1, VAR11 * (VAR21)VAR4->VAR22.VAR12 * VAR4->VAR8->VAR23, VAR12 * (VAR21)VAR4->VAR22.VAR11);
            if (VAR6->VAR15 == VAR24 && VAR6->VAR16 != VAR24 && VAR7 == 0)
                VAR6->VAR15 = VAR6->VAR16;
            if ((VAR6->VAR15 == 0 || VAR6->VAR15 == VAR24) && VAR6->VAR16 == VAR24 && !VAR7)
            {
                static int VAR25;
                if (!VAR25)
                {
                    FUN7(VAR2, VAR26, "");
                    VAR25 = 1;
                    VAR6->VAR16 = VAR6->VAR15 = VAR4->VAR15.VAR27;
                    if (VAR6->VAR15 != VAR24 && VAR6->VAR16 == VAR24 && VAR7 <= VAR28)
                    {
                        VAR4->VAR29[0] = VAR6->VAR15;
                        for (VAR14 = 1; VAR14 < VAR7 + 1 && VAR4->VAR29[VAR14] == VAR24; VAR14++)
                            VAR4->VAR29[VAR14] = VAR6->VAR15 + (VAR14 - VAR7 - 1) * VAR6->VAR20;
                        for (VAR14 = 0; VAR14 < VAR7 && VAR4->VAR29[VAR14] > VAR4->VAR29[VAR14 + 1]; VAR14++)
                            FUN8(VAR21, VAR4->VAR29[VAR14], VAR4->VAR29[VAR14 + 1]);
                        VAR6->VAR16 = VAR4->VAR29[0];
                        if (VAR4->VAR17 && VAR4->VAR17 != VAR24 && ((!(VAR2->VAR30->VAR31 & VAR32) && VAR4->VAR17 >= VAR6->VAR16) || VAR4->VAR17 > VAR6->VAR16))
                        {
                            FUN7(VAR2, VAR33, "", VAR4->VAR34, FUN4(VAR4->VAR17), FUN4(VAR6->VAR16));
                            return FUN9(VAR35);
                            if (VAR6->VAR16 != VAR24 && VAR6->VAR15 != VAR24 && VAR6->VAR15 < VAR6->VAR16)
                            {
                                FUN7(VAR2, VAR33, "", FUN4(VAR6->VAR15), FUN4(VAR6->VAR16), VAR4->VAR34);
                                return FUN9(VAR35);
                                FUN3(VAR2, "", FUN4(VAR6->VAR15), FUN4(VAR6->VAR16));
                                VAR4->VAR17 = VAR6->VAR16;
                                VAR4->VAR15.VAR27 = VAR6->VAR16;
                                switch (VAR4->VAR8->VAR36)
                                {
                                case VAR37:
                                    VAR13 = (VAR6->VAR31 & VAR38) ? ((VAR39 *)VAR6->VAR40)->VAR41 : FUN10(VAR4->VAR8, VAR6->VAR18, 1);
                                    if (VAR13 >= 0 && (VAR6->VAR18 || VAR4->VAR15.VAR11 != VAR4->VAR15.VAR12 >> 1 || VAR4->VAR15.VAR27))
                                    {
                                        FUN11(&VAR4->VAR15, (VAR21)VAR4->VAR22.VAR12 * VAR13);
                                        break;
                                    case VAR42:
                                        FUN11(&VAR4->VAR15, (VAR21)VAR4->VAR22.VAR12 * VAR4->VAR8->VAR22.VAR11);
                                        break;
                                    default:
                                        break;
                                        return 0