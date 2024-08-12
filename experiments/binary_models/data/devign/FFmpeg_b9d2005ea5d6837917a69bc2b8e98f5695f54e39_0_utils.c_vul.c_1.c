static void FUN1(VAR1 **VAR2)
{
    VAR1 *VAR3 = *VAR2;
    int VAR4;
    if (!VAR3)
        return;
    for (VAR4 = 0; VAR4 < VAR3->VAR5; VAR4++)
        FUN2(&VAR3->VAR6[VAR4].VAR7);
    FUN2(&VAR3->VAR6);
    if (VAR3->VAR8)
        FUN3(VAR3->VAR8);
    if (VAR3->VAR9.VAR7)
        FUN4(&VAR3->VAR9);
    if (VAR3->VAR10)
    {
        FUN5(&VAR3->VAR10->VAR11);
        for (VAR4 = 0; VAR4 < VAR3->VAR10->VAR12; VAR4++)
        {
            FUN6(&VAR3->VAR10->VAR13[VAR4]);
            FUN2(&VAR3->VAR10->VAR13);
        }
        FUN6(&VAR3->VAR10->VAR14.VAR15);
        FUN7(&VAR3->VAR10->VAR14.VAR16);
    }
    FUN2(&VAR3->VAR10);
    FUN8(&VAR3->VAR17);
    FUN9(&VAR3->VAR18);
    FUN2(&VAR3->VAR19.VAR20);
    FUN2(&VAR3->VAR21);
    VAR22 FUN2(&VAR3->VAR23->VAR24);
    FUN2(&VAR3->VAR23->VAR25);
    FUN2(&VAR3->VAR23);
    VAR26 FUN2(&VAR3->VAR27);
    if (VAR3->VAR28)
        FUN2(&VAR3->VAR28->VAR29);
    FUN2(&VAR3->VAR28);
    FUN2(&VAR3->VAR30);
    FUN2(&VAR3->VAR31);
    FUN2(VAR2);
}