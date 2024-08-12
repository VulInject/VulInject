static int FUN1(VAR1 *VAR2, const char *VAR3, void *VAR4)
{
    int VAR5, VAR6 = 2;
    if (VAR3)
    {
        VAR6 = FUN2(VAR3, NULL, 0);
        if (VAR6 <= 0)
        {
            FUN3(VAR2, VAR7, "", VAR6);
            return FUN4(VAR8);
        }
    }
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        char VAR9[32];
        AVFilterPad VAR10 = {0};
        snprintf(VAR9, sizeof(VAR9), "", VAR5);
        VAR10.VAR11 = VAR2->VAR12->VAR13[0].VAR11;
        VAR10.VAR9 = FUN5(VAR9);
        FUN6(VAR2, VAR5, &VAR10);
    }
    return 0;
}