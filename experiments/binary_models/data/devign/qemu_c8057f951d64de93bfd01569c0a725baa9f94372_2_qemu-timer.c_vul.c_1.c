void FUN1(char const *VAR1)
{
    int VAR2;
    int VAR3 = 0;
    int VAR4 = FUN2(VAR5) - 1;
    char *VAR6;
    char *VAR7;
    struct qemu_alarm_timer VAR8;
    if (!strcmp(VAR1, ""))
    {
        FUN3();
        FUN4(0);
    }
    VAR6 = FUN5(VAR1);
    VAR7 = strtok(VAR6, "");
    while (VAR7)
    {
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
    FUN6(VAR6);
    if (VAR3)
    {
        for (VAR2 = VAR3; VAR2 < VAR4; VAR2++)
            VAR5[VAR2].VAR7 = NULL;
    }
    else
    {
        FUN3();
        FUN4(1);
    }
}