void FUN1(VAR1 *VAR2, const char *VAR3, void *VAR4)
{
    VAR5 *VAR6, *VAR7;
    char VAR8[256] = "";
    if (VAR2)
    {
        char *VAR9 = FUN2(VAR2);
        if (VAR9)
        {
            FUN3(VAR8, sizeof(VAR8), VAR9);
            FUN4(VAR8, sizeof(VAR8), "");
            FUN5(VAR9);
        }
    }
    FUN4(VAR8, sizeof(VAR8), VAR3);
    FUN6(VAR6, &VAR10.VAR11, VAR12, VAR7)
    {
        if (strcmp(VAR6->VAR3, VAR8) == 0 && VAR6->VAR4 == VAR4)
        {
            FUN7(&VAR10.VAR11, VAR6, VAR12);
            FUN5(VAR6->VAR13);
            FUN5(VAR6->VAR14);
            FUN5(VAR6);
        }
    }
}