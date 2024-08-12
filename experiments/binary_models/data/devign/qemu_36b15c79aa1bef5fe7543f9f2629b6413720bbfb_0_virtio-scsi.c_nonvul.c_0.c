static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8 = &VAR6->VAR9;
    VAR10 *VAR11;
    int VAR12;
    while ((VAR11 = FUN2(VAR6, VAR4)))
    {
        VAR13 *VAR14;
        int VAR15;
        if (VAR11->VAR16.VAR17 > 1 && VAR11->VAR16.VAR18 > 1)
        {
            FUN3(VAR11);
            continue;
        }
        VAR15 = FUN4(VAR11, sizeof(VAR19) + VAR8->VAR20, sizeof(VAR21) + VAR8->VAR22);
        if (VAR15 < 0)
        {
            FUN5();
        }
        VAR14 = FUN6(VAR6, VAR11->VAR11.VAR23->VAR24);
        if (!VAR14)
        {
            VAR11->VAR25.VAR23->VAR26 = VAR27;
            FUN7(VAR11);
            continue;
        }
        VAR11->VAR28 = FUN8(VAR14, VAR11->VAR11.VAR23->VAR29, FUN9(VAR11->VAR11.VAR23->VAR24), VAR11->VAR11.VAR23->VAR30, VAR11);
        if (VAR11->VAR28->VAR23.VAR31 != VAR32)
        {
            int VAR33 = (VAR11->VAR16.VAR18 > 1 ? VAR34 : VAR35);
            if (VAR11->VAR28->VAR23.VAR31 != VAR33 || VAR11->VAR28->VAR23.VAR36 > VAR11->VAR37.VAR38)
            {
                VAR11->VAR25.VAR23->VAR26 = VAR39;
                FUN7(VAR11);
                continue;
            }
        }
        VAR12 = FUN10(VAR11->VAR28);
        if (VAR12)
        {
            FUN11(VAR11->VAR28);
        }
    }
}