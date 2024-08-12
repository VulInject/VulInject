static void FUN1(void)
{
    int VAR1;
    char *VAR2;
    static int VAR3 = 0;
    if (VAR3)
        return;
    VAR4 = FUN2(VAR5, "");
    VAR2 = VAR6;
    for (VAR1 = 0; VAR1 < 31; VAR1++)
    {
        sprintf(VAR2, "", VAR1);
        VAR7[VAR1] = FUN3(VAR5, FUN4(VAR8, VAR9[VAR1]), VAR2);
        VAR2 += (VAR1 < 10) ? 4 : 5;
        sprintf(VAR2, "", VAR1);
        VAR10[VAR1] = FUN3(VAR5, FUN4(VAR8, VAR11[VAR1]), VAR2);
        VAR2 += (VAR1 < 10) ? 5 : 6;
    }
    VAR12 = FUN3(VAR5, FUN4(VAR8, VAR13), "");
    VAR14 = FUN3(VAR5, FUN4(VAR8, VAR15), "");
    VAR3 = 1;
}