static int FUN1(VAR1 *VAR2)
{
    int64_t VAR3;
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR2->VAR10; VAR9++)
    {
        VAR11 *VAR12 = VAR2->VAR13[VAR9]->VAR14;
        VAR15 *VAR16 = VAR2->VAR13[VAR9]->VAR8;
        if (VAR12->VAR17 == VAR18 && VAR12->VAR19 == VAR20)
            FUN2(VAR5, VAR16->VAR21);
    }
    VAR3 = FUN3(VAR5);
    FUN4(VAR5, VAR7->VAR22, VAR23);
    FUN5(VAR5, VAR7->VAR24 / (double)1000);
    FUN4(VAR5, VAR7->VAR25, VAR23);
    FUN5(VAR5, VAR3);
    FUN4(VAR5, VAR3, VAR23);
    return 0;
}