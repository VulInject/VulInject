static int FUN1(void)
{
    TypeInfo VAR1 = {
        .VAR2 = VAR3,
        .VAR4 = VAR5,
    };
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    VAR7 = FUN2();
    if (VAR7 == NULL)
    {
        return -1;
    }
    VAR1.VAR11 = FUN3(FUN4(VAR7));
    FUN5(&VAR1);
    VAR1.VAR2 = FUN6("" VAR12, "");
    VAR1.VAR11 = VAR12, VAR1.VAR13 = sizeof(VAR14);
    VAR1.VAR15 = NULL;
    VAR1.VAR4 = VAR16;
    VAR1.VAR17 = (void *)"";
    FUN5(&VAR1);
    FUN7((void *)VAR1.VAR2);
    VAR9 = FUN8(FUN9(VAR7));
    for (VAR10 = 0; VAR18[VAR10].VAR19 != NULL; VAR10++)
    {
        if (strcmp(VAR18[VAR10].VAR19, VAR9->VAR20) == 0)
        {
            VAR21 *VAR22 = FUN4(VAR7);
            char *VAR23;
            VAR18[VAR10].VAR24 = FUN10(FUN3(VAR22));
            VAR23 = strstr(VAR18[VAR10].VAR24, "" VAR25);
            if (VAR23)
            {
                *VAR23 = 0;
            }
            VAR18[VAR10].VAR22 = VAR22;
            break;
        }
    }
    return 0;
}