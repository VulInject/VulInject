FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4, void *VAR5)
{
    struct VAR6 *VAR7 = VAR5;
    struct VAR8 *VAR9 = VAR4;
    VAR7->VAR3 = VAR3;
    VAR7->VAR10 = 0;
    VAR7->VAR9 = VAR9;
    if (VAR3 != VAR11)
    {
        if (VAR7->VAR12++ < VAR13)
        {
            if (VAR3 == VAR14 && VAR9->VAR15.VAR16 == VAR17)
            {
                FUN2("", FUN3(VAR2));
                VAR7->VAR10 = 1;
                goto VAR18;
            }
            if (VAR3 == VAR19 || VAR3 == VAR20 || VAR3 == VAR21)
            {
                unsigned VAR22 = FUN4(VAR23[VAR7->VAR12 - 1]);
                if (VAR3 == VAR20)
                {
                    VAR22 = VAR24 * 2;
                    VAR7->VAR25->VAR26 = true;
                }
                FUN2(""
                             "",
                             VAR7->VAR12, VAR22, FUN3(VAR2));
                FUN5(VAR7->VAR25->VAR27, &VAR7->VAR28, VAR29, VAR30, VAR31, VAR7);
                FUN6(&VAR7->VAR28, FUN7(VAR29) + VAR22);
                VAR7->VAR10 = 1;
                return;
            }
        }
        VAR7->VAR32 = FUN8(&VAR9->VAR15);
        FUN2("", FUN3(VAR2));
    }
VAR18:
    if (VAR7->VAR33)
    {
        VAR7->VAR34 = FUN9(VAR7->VAR25->VAR27, VAR35, VAR7);
        FUN10(VAR7->VAR34);
    }
    else
    {
        VAR7->VAR36 = 1;
    }
}