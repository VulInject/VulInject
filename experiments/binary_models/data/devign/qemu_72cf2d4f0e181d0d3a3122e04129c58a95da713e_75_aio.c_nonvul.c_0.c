void FUN1(void)
{
    int VAR1;
    if (FUN2())
        return;
    do
    {
        VAR2 *VAR3;
        fd_set VAR4, VAR5;
        int VAR6 = -1;
        VAR7 = 1;
        FUN3(&VAR4);
        FUN3(&VAR5);
        FUN4(VAR3, &VAR8, VAR3)
        {
            if (VAR3->VAR9 && VAR3->FUN5(VAR3->VAR10) == 0)
                continue;
            if (!VAR3->VAR11 && VAR3->VAR12)
            {
                FUN6(VAR3->VAR13, &VAR4);
                VAR6 = FUN7(VAR6, VAR3->VAR13 + 1);
            }
            if (!VAR3->VAR11 && VAR3->VAR14)
            {
                FUN6(VAR3->VAR13, &VAR5);
                VAR6 = FUN7(VAR6, VAR3->VAR13 + 1);
            }
        }
        VAR7 = 0;
        if (VAR6 == -1)
            break;
        VAR1 = FUN8(VAR6, &VAR4, &VAR5, NULL, NULL);
        if (VAR1 == -1 && VAR15 == VAR16)
            continue;
        if (VAR1 > 0)
        {
            VAR7 = 1;
            VAR3 = FUN9(&VAR8);
            while (VAR3)
            {
                VAR2 *VAR17;
                if (!VAR3->VAR11 && FUN10(VAR3->VAR13, &VAR4) && VAR3->VAR12)
                {
                    VAR3->FUN11(VAR3->VAR10);
                }
                if (!VAR3->VAR11 && FUN10(VAR3->VAR13, &VAR5) && VAR3->VAR14)
                {
                    VAR3->FUN12(VAR3->VAR10);
                }
                VAR17 = VAR3;
                VAR3 = FUN13(VAR3, VAR3);
                if (VAR17->VAR11)
                {
                    FUN14(VAR17, VAR3);
                    FUN15(VAR17);
                }
            }
            VAR7 = 0;
        }
    } while (VAR1 == 0);
}