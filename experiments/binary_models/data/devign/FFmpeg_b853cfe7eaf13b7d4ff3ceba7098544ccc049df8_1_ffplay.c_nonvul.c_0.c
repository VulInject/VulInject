static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    VAR2->VAR6 = 1;
    FUN2(VAR2->VAR7, NULL);
    FUN3(&VAR2->VAR8);
    FUN3(&VAR2->VAR9);
    FUN3(&VAR2->VAR10);
    for (VAR5 = 0; VAR5 < VAR11; VAR5++)
    {
        VAR4 = &VAR2->VAR12[VAR5];
        FUN4(&VAR4->VAR13);
        if (VAR4->VAR14)
        {
            FUN5(VAR4->VAR14);
            VAR4->VAR14 = NULL;
        }
    }
    FUN6(VAR2->VAR15);
    FUN7(VAR2->VAR16);
    FUN6(VAR2->VAR17);
    FUN7(VAR2->VAR18);
    FUN7(VAR2->VAR19);
    FUN8(VAR2->VAR20);
    FUN9(VAR2);
}