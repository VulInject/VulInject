static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR7[VAR2->VAR8]->VAR9;
    int VAR10, VAR11, VAR12;
    VAR11 = VAR4->VAR13;
    VAR12 = VAR4->VAR14;
    if (!(VAR11 && VAR12))
    {
        for (VAR10 = 0; VAR10 < VAR6->VAR15; VAR10++)
        {
            if (VAR6->VAR16[VAR10]->VAR17->VAR18 == VAR19)
            {
                VAR11 = FUN2(VAR11, VAR6->VAR16[VAR10]->VAR17->VAR13);
                VAR12 = FUN2(VAR12, VAR6->VAR16[VAR10]->VAR17->VAR14);
            }
        }
        if (!(VAR11 && VAR12))
        {
            VAR11 = FUN2(VAR11, 720);
            VAR12 = FUN2(VAR12, 576);
        }
        FUN3(VAR6, VAR20, "", VAR11, VAR12);
    }
    VAR2->VAR21.VAR11 = VAR2->VAR22 = VAR4->VAR13 = VAR11;
    VAR2->VAR21.VAR12 = VAR2->VAR23 = VAR4->VAR14 = VAR12;
    VAR2->VAR24 = VAR4->VAR25 = VAR26;
    VAR2->VAR21.VAR27 = FUN4();
    if (!VAR2->VAR21.VAR27)
        return FUN5(VAR28);
    VAR2->VAR21.VAR29 = VAR30;
    return 0;
}