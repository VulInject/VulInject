int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 ***VAR5 = VAR3;
    if (FUN2(VAR2, VAR6))
    {
        VAR7 *VAR8 = FUN3(VAR2);
        if (VAR8->VAR9)
        {
            VAR4 *VAR10 = FUN4(VAR4, 1);
            VAR11 *VAR12 = FUN4(VAR11, 1);
            VAR13 *VAR14 = FUN4(VAR13, 1);
            VAR15 *VAR16 = FUN5(VAR2);
            VAR17 *VAR18 = FUN6(VAR2);
            if (VAR8->VAR19)
            {
                VAR14->VAR20 = true;
                VAR14->VAR19 = FUN7(VAR8->VAR19);
            }
            VAR14->VAR21 = VAR8->VAR21;
            VAR14->VAR22 = VAR16->VAR22;
            VAR14->VAR23 = VAR18->VAR23;
            VAR14->VAR24 = VAR18->VAR24;
            VAR14->VAR25 = VAR18->VAR25;
            VAR14->VAR26 = FUN8(FUN9(VAR18), VAR27, NULL);
            VAR14->VAR28 = FUN10(FUN9(VAR18->VAR29));
            VAR12->VAR30.VAR18 = VAR14;
            VAR10->VAR31 = VAR12;
            VAR10->VAR32 = NULL;
            **VAR5 = VAR10;
            *VAR5 = &VAR10->VAR32;
        }
    }
    FUN11(VAR2, VAR33, VAR3);
    return 0;
}