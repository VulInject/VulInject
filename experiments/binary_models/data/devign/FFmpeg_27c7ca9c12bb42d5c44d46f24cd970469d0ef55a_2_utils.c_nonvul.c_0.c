void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    FUN2(VAR2);
    if (VAR2->VAR6 && VAR2->VAR6->VAR7 && VAR2->VAR8)
        FUN2(VAR2->VAR8);
    for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
    {
        VAR5 = VAR2->VAR10[VAR3];
        if (VAR5->VAR11)
        {
            FUN3(VAR5->VAR11);
        }
        if (VAR5->VAR12.VAR13)
            FUN4(&VAR5->VAR12);
        FUN5(&VAR5->VAR14);
        FUN6(VAR5->VAR15);
        FUN6(VAR5->VAR16->VAR17);
        FUN6(VAR5->VAR16->VAR18);
        FUN6(VAR5->VAR16);
        FUN6(VAR5->VAR8);
        FUN6(VAR5->VAR19);
        FUN6(VAR5);
    }
    for (VAR3 = VAR2->VAR20 - 1; VAR3 >= 0; VAR3--)
    {
        FUN5(&VAR2->VAR21[VAR3]->VAR14);
        FUN7(&VAR2->VAR21[VAR3]->VAR22);
        FUN7(&VAR2->VAR21[VAR3]);
    }
    FUN7(&VAR2->VAR21);
    FUN7(&VAR2->VAR8);
    while (VAR2->VAR23--)
    {
        FUN5(&VAR2->VAR24[VAR2->VAR23]->VAR14);
        FUN6(VAR2->VAR24[VAR2->VAR23]);
    }
    FUN7(&VAR2->VAR24);
    FUN5(&VAR2->VAR14);
    FUN7(&VAR2->VAR10);
    FUN6(VAR2);
}