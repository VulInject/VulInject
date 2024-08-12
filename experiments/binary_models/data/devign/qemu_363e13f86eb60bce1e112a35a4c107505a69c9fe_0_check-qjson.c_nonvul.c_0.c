static void FUN1(void)
{
    int VAR1;
    struct
    {
        const char *VAR2;
        const char *VAR3;
    } VAR4[] = {{"", ""}, {"", ""}, {}};
    for (VAR1 = 0; VAR4[VAR1].VAR2; VAR1++)
    {
        VAR5 *VAR6;
        VAR7 *VAR8;
        VAR6 = FUN2(VAR4[VAR1].VAR2);
        VAR8 = FUN3(VAR6);
        FUN4(VAR8);
        FUN4(strcmp(FUN5(VAR8), VAR4[VAR1].VAR3) == 0);
        FUN6(VAR8);
    }
}