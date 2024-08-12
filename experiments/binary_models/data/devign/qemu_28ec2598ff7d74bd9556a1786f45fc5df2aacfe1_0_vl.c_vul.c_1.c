static int FUN1(VAR1 *VAR2, void *VAR3)
{
    const char *VAR4 = FUN2(VAR2, "");
    const char *VAR5 = FUN3(VAR2);
    VAR6 *VAR7;
    FUN4(VAR4 != NULL);
    if (VAR5 == NULL)
    {
        FUN5(VAR8, "");
        return -1;
    }
    VAR7 = FUN6(VAR4);
    if (FUN7(VAR2, VAR9, VAR7, 1) < 0)
    {
        return -1;
    }
    FUN8(FUN9(FUN10(), ""), VAR5, VAR7, NULL);
    return 0;
}