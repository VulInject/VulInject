static VAR1 *FUN1(VAR2 *VAR3)
{
    int VAR4;
    VAR1 *VAR5 = NULL;
    VAR6 *VAR7 = FUN2(VAR3);
    VAR8 *VAR9 = FUN3(VAR3);
    int VAR10 = VAR11 / VAR12;
    FUN4(VAR9->VAR13);
    for (VAR4 = 0; VAR4 < VAR10; VAR4++)
    {
        VAR1 *VAR14 = FUN5(FUN6(*VAR14), 1);
        VAR15 *VAR16 = FUN5(FUN6(*VAR16), 1);
        VAR17 *VAR18 = FUN5(FUN6(*VAR18), 1);
        VAR16->VAR19 = FUN7(VAR3->VAR20);
        VAR16->VAR21 = VAR12;
        VAR18->VAR22 = true;
        VAR18->VAR23 = VAR4 * VAR12;
        VAR16->VAR24 = VAR18;
        if (VAR7->VAR25[VAR4])
        {
            VAR16->VAR26 = true;
            VAR16->VAR27 = FUN8(VAR7->VAR25[VAR4]);
        }
        VAR14->VAR28 = VAR16;
        VAR14->VAR29 = VAR5;
        VAR5 = VAR14;
    }
    return VAR5;
}