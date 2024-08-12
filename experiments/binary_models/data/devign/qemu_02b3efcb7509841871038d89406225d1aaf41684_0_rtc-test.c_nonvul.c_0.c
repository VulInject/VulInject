static void FUN1(int VAR1)
{
    struct tm VAR2, VAR3[4], VAR4;
    struct VAR5 *VAR6;
    time_t VAR7;
    VAR7 = FUN2(NULL);
    FUN3(&VAR7, &VAR2);
    FUN4(&VAR3[0]);
    FUN4(&VAR3[1]);
    FUN4(&VAR3[2]);
    FUN4(&VAR3[3]);
    VAR7 = FUN2(NULL);
    FUN3(&VAR7, &VAR4);
    if (FUN5(&VAR3[0], &VAR3[1]) == 0)
    {
        VAR6 = &VAR3[0];
    }
    else if (FUN5(&VAR3[1], &VAR3[2]) == 0)
    {
        VAR6 = &VAR3[1];
    }
    else if (FUN5(&VAR3[2], &VAR3[3]) == 0)
    {
        VAR6 = &VAR3[2];
    }
    else
    {
        FUN6();
    }
    if (!(FUN5(&VAR2, VAR6) <= 0 && FUN5(VAR6, &VAR4) <= 0))
    {
        long VAR8, VAR9;
        VAR2.VAR10 = VAR6->VAR10;
        VAR8 = (long)FUN7(VAR6);
        VAR9 = (long)FUN7(&VAR2);
        if (VAR8 < VAR9)
        {
            FUN8("", (VAR9 - VAR8));
        }
        else
        {
            FUN8("", (VAR8 - VAR9));
        }
        FUN9(FUN10(VAR8 - VAR9), <=, VAR1);
    }
}