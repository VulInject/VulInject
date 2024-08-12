void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    FUN2(&VAR2->VAR5);
    FUN2(&VAR2->VAR6);
    FUN2(&VAR2->VAR7);
    FUN2(&VAR2->VAR8[0]);
    FUN2(&VAR2->VAR8[1]);
    FUN2(&VAR2->VAR9);
    FUN2(&VAR2->VAR10);
    FUN2(&VAR2->VAR11);
    VAR2->VAR12 = NULL;
    FUN2(&VAR2->VAR13);
    FUN2(&VAR2->VAR14);
    FUN2(&VAR2->VAR15);
    FUN3(&VAR2->VAR16);
    FUN3(&VAR2->VAR17);
    FUN3(&VAR2->VAR18);
    FUN3(&VAR2->VAR19);
    if (VAR3 && VAR2->VAR20)
    {
        for (VAR4 = 0; VAR4 < VAR21; VAR4++)
            FUN4(VAR2, &VAR2->VAR20[VAR4]);
        FUN2(&VAR2->VAR20);
    }
    VAR2->VAR22 = NULL;
    for (VAR4 = 0; VAR4 < VAR2->VAR23; VAR4++)
    {
        VAR24 *VAR25 = &VAR2->VAR26[VAR4];
        FUN2(&VAR25->VAR27);
        FUN2(&VAR25->VAR28.VAR29);
        FUN2(&VAR25->VAR28.VAR30);
        FUN2(&VAR25->VAR28.VAR31);
        FUN2(&VAR25->VAR32);
        FUN2(&VAR25->VAR33);
        FUN2(&VAR25->VAR34[0]);
        FUN2(&VAR25->VAR34[1]);
        VAR25->VAR35 = 0;
        VAR25->VAR36 = 0;
        VAR25->VAR37[0] = 0;
        VAR25->VAR37[1] = 0;
        if (VAR3)
        {
            FUN2(&VAR25->VAR38);
            VAR25->VAR39 = 0;
        }
    }
}