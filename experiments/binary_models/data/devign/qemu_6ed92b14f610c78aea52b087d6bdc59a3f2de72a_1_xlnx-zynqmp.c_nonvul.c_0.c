static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        FUN3(&VAR4->VAR7[VAR5], sizeof(VAR4->VAR7[VAR5]), "" VAR8);
        FUN4(VAR2, "", FUN5(&VAR4->VAR7[VAR5]), &VAR9);
    }
    FUN6(VAR2, "", VAR10, (VAR1 **)&VAR4->VAR11, VAR12, VAR13, &VAR9);
    FUN3(&VAR4->VAR14, sizeof(VAR4->VAR14), VAR15);
    FUN7(FUN8(&VAR4->VAR14), FUN9());
    for (VAR5 = 0; VAR5 < VAR16; VAR5++)
    {
        FUN3(&VAR4->VAR17[VAR5], sizeof(VAR4->VAR17[VAR5]), VAR18);
        FUN7(FUN8(&VAR4->VAR17[VAR5]), FUN9());
    }
    for (VAR5 = 0; VAR5 < VAR19; VAR5++)
    {
        FUN3(&VAR4->VAR20[VAR5], sizeof(VAR4->VAR20[VAR5]), VAR21);
        FUN7(FUN8(&VAR4->VAR20[VAR5]), FUN9());
    }
    FUN3(&VAR4->VAR22, sizeof(VAR4->VAR22), VAR23);
    FUN7(FUN8(&VAR4->VAR22), FUN9());
    for (VAR5 = 0; VAR5 < VAR24; VAR5++)
    {
        FUN3(&VAR4->VAR25[VAR5], sizeof(VAR4->VAR25[VAR5]), VAR26);
        FUN7(FUN8(&VAR4->VAR25[VAR5]), FUN9());
    }
    for (VAR5 = 0; VAR5 < VAR27; VAR5++)
    {
        FUN3(&VAR4->VAR28[VAR5], sizeof(VAR4->VAR28[VAR5]), VAR29);
        FUN7(FUN8(&VAR4->VAR28[VAR5]), FUN9());
    }
}