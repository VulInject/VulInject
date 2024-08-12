static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3;
    int VAR4 = 0;
    FUN2(NULL, VAR5);
    FUN3(VAR3, &VAR6, VAR7)
    {
        if (VAR3->VAR8 == -1)
        {
            VAR4++;
        }
    }
    if (VAR4 == 0)
    {
        if (VAR9)
        {
            FUN4(VAR9);
        }
        return;
    }
    if (!VAR9)
    {
        VAR9 = FUN5(VAR10, VAR11, NULL);
        if (!VAR9)
        {
            return;
        }
    }
    FUN6(VAR9, FUN7(VAR10) + 2000);
}