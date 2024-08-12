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
            if (VAR3 == VAR19 || VAR3 == 0x28)
            {
                unsigned VAR20 = FUN4(VAR21[VAR7->VAR12 - 1]);
                FUN2("", VAR7->VAR12, VAR20, FUN3(VAR2));
                FUN5(VAR7->VAR22->VAR23, &VAR7->VAR24, VAR25, VAR26, VAR27, VAR7);
                FUN6(&VAR7->VAR24, FUN7(VAR25) + VAR20);
                VAR7->VAR10 = 1;
                return;
            }
        }
        FUN2("", FUN3(VAR2));
    }
    else
    {
        VAR7->VAR22->VAR28 |= VAR7->VAR28;
    }
VAR18:
    if (VAR7->VAR29)
    {
        VAR7->VAR30 = FUN8(VAR7->VAR22->VAR23, VAR31, VAR7);
        FUN9(VAR7->VAR30);
    }
    else
    {
        VAR7->VAR32 = 1;
    }
}