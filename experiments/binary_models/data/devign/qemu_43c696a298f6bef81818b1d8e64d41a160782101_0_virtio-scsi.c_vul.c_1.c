static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = FUN3(VAR8);
    VAR11 *VAR12 = FUN4(VAR4);
    if (VAR10->VAR13 && !VAR10->VAR14)
    {
        VAR15 *VAR16, *VAR17;
        if (FUN5(VAR12->VAR18.VAR19, VAR20, VAR6))
        {
            return;
        }
        FUN6(VAR12->VAR18.VAR19, VAR10->VAR21);
        FUN7(VAR10->VAR13);
        FUN8(VAR12->VAR18.VAR19, VAR10->VAR13);
        FUN9(VAR10->VAR13);
        VAR16 = FUN10(VAR15, 1);
        VAR16->VAR22.VAR23 = VAR24;
        VAR16->VAR10 = VAR10;
        VAR16->VAR12 = VAR12;
        FUN11(VAR12->VAR18.VAR19, &VAR16->VAR22);
        FUN12(&VAR10->VAR25, VAR16, VAR26);
        VAR17 = FUN10(VAR15, 1);
        VAR17->VAR22.VAR23 = VAR27;
        VAR17->VAR10 = VAR10;
        VAR17->VAR12 = VAR12;
        FUN13(VAR12->VAR18.VAR19, &VAR17->VAR22);
        FUN12(&VAR10->VAR28, VAR17, VAR26);
    }
    if (FUN14(VAR8, VAR29))
    {
        FUN15(VAR10, VAR12, VAR30, VAR31);
    }
}