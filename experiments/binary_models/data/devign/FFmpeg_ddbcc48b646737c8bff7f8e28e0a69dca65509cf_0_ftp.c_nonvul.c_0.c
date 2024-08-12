static int FUN1(VAR1 *VAR2)
{
    char VAR3[VAR4];
    char *VAR5 = NULL;
    const int VAR6[] = {213, 501, 550, 0};
    snprintf(VAR3, sizeof(VAR3), "", VAR2->VAR7);
    if (FUN2(VAR2, VAR3, VAR6, &VAR5) == 213 && VAR5)
    {
        VAR2->VAR8 = FUN3(&VAR5[4], NULL, 10);
    }
    else
    {
        VAR2->VAR8 = -1;
        FUN4(VAR5);
        return FUN5(VAR9);
    }
    FUN4(VAR5);
    return 0;
}