void FUN1(const char *VAR1)
{
    FUN2(NULL, 0, &VAR2, &VAR3);
    if (!VAR1)
        return;
    if (strcmp(VAR1, "") != 0)
    {
        VAR4 = FUN3(VAR1, NULL, 0);
        VAR5 = 1;
        return;
    }
    VAR5 = 2;
    VAR4 = 3;
    VAR6 = FUN4(VAR7, VAR8, NULL);
    FUN5(VAR6, FUN6(VAR7) + 1000);
    VAR9 = FUN7(VAR10, VAR11, NULL);
    FUN5(VAR9, FUN8(VAR10) + FUN9() / 10);
}