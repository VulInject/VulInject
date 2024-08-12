static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    char *VAR5;
    VAR6 *VAR7;
    ObjectPropertyIterator VAR8;
    VAR9 *VAR10;
    FUN2(&VAR8, FUN3(VAR4));
    while ((VAR7 = FUN4(&VAR8)))
    {
        if (!strcmp(VAR7->VAR11, ""))
        {
            continue;
        }
        VAR10 = FUN5(false, &VAR5);
        FUN6(FUN3(VAR4), VAR10, VAR7->VAR11, NULL);
        FUN7(VAR10, &VAR5);
        FUN8(VAR10);
        FUN9(VAR2, "", VAR7->VAR11, VAR5);
        FUN10(VAR5);
    }
    FUN9(VAR2, "");
}