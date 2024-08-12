static void FUN1(void)
{
    int VAR1;
    struct
    {
        const char *VAR2;
    } VAR3[] = {{""}, {""}, {}};
    for (VAR1 = 0; VAR3[VAR1].VAR2; VAR1++)
    {
        VAR4 *VAR5;
        VAR5 = FUN2(FUN3("", VAR3[VAR1].VAR2));
        FUN4(VAR5);
        FUN4(strcmp(FUN5(VAR5), VAR3[VAR1].VAR2) == 0);
        FUN6(VAR5);
    }
}