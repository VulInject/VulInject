static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    for (VAR3 = 0; VAR3 < VAR2->VAR6; VAR3++)
    {
        VAR5 = VAR2->VAR7[VAR3];
        if (VAR5)
        {
            if (VAR5->VAR8)
            {
                if (VAR2->VAR9 == VAR10)
                    FUN2(VAR5->VAR8);
                else
                    FUN3(VAR5->VAR8);
            }
            if (VAR5->VAR11)
                FUN4(VAR5->VAR11);
            if (VAR5->VAR12 && VAR5->VAR13)
                VAR5->VAR12->close(VAR5->VAR13);
        }
    }
    FUN5(VAR2->VAR7);
    if (VAR2->VAR14)
    {
        FUN6(VAR2->VAR14);
        VAR2->VAR14 = NULL;
    }
    FUN7(&VAR2->VAR15);
}