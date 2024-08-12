static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR2->VAR6.VAR5, VAR7 = VAR2->VAR6.VAR7;
    VAR8 *VAR9 = VAR2->VAR6.VAR9;
    VAR10 *VAR11;
    int VAR12;
    int VAR13, VAR14;
    int64_t VAR15, VAR16;
    if (!VAR9)
        return;
    if (VAR4)
    {
        VAR15 = FUN2(VAR4->VAR15 + VAR4->VAR17 * 1000, VAR18, VAR2->VAR19->VAR20);
        VAR16 = FUN2(VAR4->VAR15 + VAR4->VAR21 * 1000, VAR18, VAR2->VAR19->VAR20);
        VAR13 = VAR4->VAR13;
    }
    else
    {
        VAR15 = VAR2->VAR6.VAR16;
        VAR16 = VAR22;
        VAR13 = 0;
    }
    if (FUN3(VAR2) < 0)
    {
        FUN4(VAR2->VAR23, VAR24, "");
        return;
    }
    VAR11 = VAR9->VAR25[0];
    VAR12 = VAR9->VAR26[0];
    for (VAR14 = 0; VAR14 < VAR13; VAR14++)
        FUN5(VAR11, VAR12, VAR5, VAR7, VAR4->VAR27[VAR14]);
    FUN6(VAR2, VAR15);
    VAR2->VAR6.VAR16 = VAR16;
}