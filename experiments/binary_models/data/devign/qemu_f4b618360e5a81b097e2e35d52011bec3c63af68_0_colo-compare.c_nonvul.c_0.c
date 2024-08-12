static void FUN1(void *VAR1, void *VAR2)
{
    VAR3 *VAR4 = VAR2;
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    int VAR11;
    while (!FUN2(&VAR6->VAR12) && !FUN2(&VAR6->VAR13))
    {
        FUN3(&VAR4->VAR14);
        VAR8 = FUN4(&VAR6->VAR12);
        FUN5(&VAR4->VAR14);
        switch (VAR6->VAR15)
        {
        case VAR16:
            VAR10 = FUN6(&VAR6->VAR13, VAR8, (VAR17)VAR18);
            break;
        case VAR19:
            VAR10 = FUN6(&VAR6->VAR13, VAR8, (VAR17)VAR20);
            break;
        case VAR21:
            VAR10 = FUN6(&VAR6->VAR13, VAR8, (VAR17)VAR22);
            break;
        default:
            VAR10 = FUN6(&VAR6->VAR13, VAR8, (VAR17)VAR23);
            break;
        }
        if (VAR10)
        {
            VAR11 = FUN7(VAR4->VAR24, VAR8->VAR25, VAR8->VAR26);
            if (VAR11 < 0)
            {
                FUN8("");
            }
            FUN9("");
            FUN10(&VAR6->VAR13, VAR10->VAR25);
            FUN11(VAR8, NULL);
        }
        else
        {
            FUN9("");
            FUN3(&VAR4->VAR14);
            FUN12(&VAR6->VAR12, VAR8);
            FUN5(&VAR4->VAR14);
            break;
        }
    }
}