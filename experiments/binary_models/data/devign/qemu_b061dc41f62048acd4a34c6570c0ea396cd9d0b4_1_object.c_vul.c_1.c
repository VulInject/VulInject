static void FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3;
    if (VAR2->class)
    {
        return;
    }
    VAR2->VAR4 = FUN2(VAR2);
    VAR2->VAR5 = FUN3(VAR2);
    VAR2->class = FUN4(VAR2->VAR4);
    VAR3 = FUN5(VAR2);
    if (VAR3)
    {
        FUN1(VAR3);
        VAR6 *VAR7;
        int VAR8;
        FUN6(VAR3->VAR4 <= VAR2->VAR4);
        memcpy(VAR2->class, VAR3->class, VAR3->VAR4);
        VAR2->class->VAR9 = NULL;
        for (VAR7 = VAR3->class->VAR9; VAR7; VAR7 = VAR7->VAR10)
        {
            VAR11 *VAR12 = VAR7->VAR13;
            FUN7(VAR2, FUN8(VAR12));
        }
        for (VAR8 = 0; VAR8 < VAR2->VAR14; VAR8++)
        {
            VAR1 *VAR15 = FUN9(VAR2->VAR9[VAR8].typename);
            for (VAR7 = VAR2->class->VAR9; VAR7; VAR7 = VAR7->VAR10)
            {
                VAR1 *VAR16 = FUN10(VAR7->VAR13)->VAR17;
                if (FUN11(VAR16, VAR15))
                {
                    break;
                }
            }
            if (VAR7)
            {
                continue;
            }
            FUN7(VAR2, VAR2->VAR9[VAR8].typename);
        }
    }
    VAR2->class->VAR17 = VAR2;
    while (VAR3)
    {
        if (VAR3->VAR18)
        {
            VAR3->FUN12(VAR2->class, VAR2->VAR19);
        }
        VAR3 = FUN5(VAR3);
    }
    if (VAR2->VAR20)
    {
        VAR2->FUN13(VAR2->class, VAR2->VAR19);
    }
}