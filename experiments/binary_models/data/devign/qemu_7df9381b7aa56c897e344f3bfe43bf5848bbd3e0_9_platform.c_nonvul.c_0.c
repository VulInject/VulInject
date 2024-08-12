static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = &VAR6->VAR10;
    int VAR11, VAR12;
    VAR10->VAR13 = VAR14;
    VAR10->VAR15 = &VAR16;
    FUN4(VAR10->VAR17 ? VAR10->VAR17 : VAR10->VAR18, VAR6->VAR19);
    VAR12 = FUN5(VAR10);
    if (VAR12)
    {
        FUN6(VAR4, "", VAR10->VAR18);
        return;
    }
    for (VAR11 = 0; VAR11 < VAR10->VAR20; VAR11++)
    {
        FUN7(VAR6, VAR11);
        FUN8(VAR8, &VAR6->VAR21[VAR11]->VAR22);
    }
}