static void FUN1(char const *VAR1)
{
    int VAR2;
    int VAR3 = 0;
    int VAR4 = (sizeof(VAR5) / sizeof(*VAR5)) - 1;
    char *VAR6;
    char *VAR7;
    if (!strcmp(VAR1, ""))
    {
        FUN2();
        FUN3(0);
    }
    VAR6 = strdup(VAR1);
    VAR7 = strtok(VAR6, "");
    while (VAR7)
    {
        struct qemu_alarm_timer VAR8;
        for (VAR2 = 0; VAR2 < VAR4 && VAR5[VAR2].VAR7; VAR2++)
        {
            if (!strcmp(VAR5[VAR2].VAR7, VAR7))
                break;
        }
        if (VAR2 == VAR4)
        {
            fprintf(VAR9, "", VAR7);
            goto VAR10;
        }
        if (VAR2 < VAR3)
            goto VAR10;
        VAR8 = VAR5[VAR2];
        VAR5[VAR2] = VAR5[VAR3];
        VAR5[VAR3] = VAR8;
        VAR3++;
    VAR10:
        VAR7 = strtok(NULL, "");
    }
    free(VAR6);
    if (VAR3)
    {
        for (VAR2 = VAR3; VAR2 < VAR4; VAR2++)
            VAR5[VAR2].VAR7 = NULL;
    }
    FUN2();
}