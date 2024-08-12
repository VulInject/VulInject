static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = &VAR6->VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14;
    VAR10->VAR15 = VAR16;
    VAR10->VAR17 = &VAR18;
    FUN4(VAR10->VAR19, VAR6->VAR20);
    VAR14 = FUN5(VAR10);
    if (VAR14)
    {
        FUN6(VAR4, "", VAR10->VAR19);
        return;
    }
    for (VAR13 = 0; VAR13 < VAR10->VAR21; VAR13++)
    {
        FUN7(VAR6, VAR13);
        FUN8(VAR8, &VAR6->VAR22[VAR13]->VAR23);
    }
    FUN9(VAR12, &VAR6->VAR24, VAR25) { FUN10(VAR12); }
}