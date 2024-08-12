static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    VAR6 *VAR7;
    int VAR8;
    VAR8 = FUN3(VAR2->VAR9);
    if (VAR8 == -1)
    {
        FUN4(VAR2, "");
        return;
    }
    if (FUN5(VAR5[0]))
    {
        FUN4(VAR2, "");
        return;
    }
    VAR8 = FUN6(VAR8);
    if (VAR8 == -1)
    {
        FUN4(VAR2, "", strerror(VAR10));
        return;
    }
    FUN7(VAR7, &VAR2->VAR11, VAR12)
    {
        if (strcmp(VAR7->VAR13, VAR5) != 0)
        {
            continue;
        }
        close(VAR7->VAR8);
        VAR7->VAR8 = VAR8;
        return;
    }
    VAR7 = FUN8(sizeof(VAR6));
    VAR7->VAR13 = FUN9(VAR5);
    VAR7->VAR8 = VAR8;
    FUN10(&VAR2->VAR11, VAR7, VAR12);
}