static void FUN1(void)
{
    int VAR1;
    for (VAR1 = 0; VAR1 < VAR2; VAR1++)
    {
        VAR3 *VAR4 = &VAR5[VAR1];
        const char *VAR6 = NULL;
        if (VAR1 == 0 && (!VAR4->VAR7 || strcmp(VAR4->VAR7, "") == 0))
            VAR6 = "";
        FUN2(VAR4, "", VAR6);
    }
}