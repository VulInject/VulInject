static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = FUN2(VAR2);
    FUN3();
    for (VAR3 = 0; VAR3 < VAR5->VAR6; VAR3++)
    {
        FUN4(VAR5, VAR3 + 1);
    }
    if (VAR5->VAR7)
    {
        FUN5(VAR5->VAR7);
        FUN6(VAR5->VAR7);
        VAR5->VAR7 = NULL;
    }
    FUN7(&VAR5->VAR8, &VAR5->VAR9);
    FUN7(&VAR5->VAR8, &VAR5->VAR10);
    FUN7(&VAR5->VAR8, &VAR5->VAR11);
    FUN7(&VAR5->VAR8, &VAR5->VAR12);
    for (VAR3 = 0; VAR3 < VAR5->VAR13; VAR3++)
    {
        VAR14 *VAR15 = &VAR5->VAR16[VAR3];
        FUN7(&VAR5->VAR8, &VAR15->VAR8);
    }
    if (VAR2->VAR17 && VAR2->VAR18 && VAR2->VAR19)
    {
        FUN7(&VAR5->VAR8, &VAR2->VAR20);
        FUN7(&VAR5->VAR8, &VAR2->VAR21);
    }
    FUN8(&VAR5->VAR22);
}