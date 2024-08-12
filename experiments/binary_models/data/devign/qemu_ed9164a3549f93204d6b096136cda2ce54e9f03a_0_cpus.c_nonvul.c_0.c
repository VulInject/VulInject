static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR3 = FUN2(VAR2->VAR4->VAR4, VAR5);
    if (VAR3)
    {
        fprintf(VAR6, "", VAR7, strerror(VAR3));
        FUN3(1);
    }
    if (!FUN4(VAR2))
    {
        CONTEXT VAR8;
        if (FUN5(VAR2->VAR9) == (VAR10)-1)
        {
            fprintf(VAR6, "", VAR7, FUN6());
            FUN3(1);
        }
        VAR8.VAR11 = VAR12;
        while (FUN7(VAR2->VAR9, &VAR8) != 0)
        {
            continue;
        }
        FUN8(0);
        if (FUN9(VAR2->VAR9) == (VAR10)-1)
        {
            fprintf(VAR6, "", VAR7, FUN6());
            FUN3(1);
        }
    }
}