void FUN1(void *VAR1, void *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6;
    void *VAR7 = NULL;
    if (!strcmp("", (*(VAR8 **)VAR1)->VAR9))
    {
        VAR10 *VAR11 = VAR1;
        if (VAR5 && VAR5->VAR12 && VAR11->VAR13)
        {
            VAR7 = VAR11->VAR13;
        }
    }
    else if (!strcmp("", (*(VAR8 **)VAR1)->VAR9))
    {
        VAR14 *VAR11 = VAR1;
        if (VAR11->VAR15 && VAR11->VAR15->VAR12)
        {
            VAR7 = VAR11->VAR13;
        }
    }
    for (VAR6 = 0; VAR6 < VAR16; VAR6++)
    {
        char VAR17[256];
        const VAR18 *VAR19;
        const char *VAR20;
        if (VAR7)
        {
            if (FUN2(VAR7, VAR21[VAR6], NULL, VAR3, VAR3))
            {
                if (FUN3(VAR7, VAR21[VAR6], VAR22[VAR6], 0, NULL) < 0)
                {
                    fprintf(VAR23, "", VAR21[VAR6], VAR22[VAR6]);
                    FUN4(1);
                }
            }
            else
                goto VAR24;
        }
        else
        {
        VAR24:
            VAR20 = FUN5(VAR2, VAR21[VAR6], &VAR19, VAR17, sizeof(VAR17));
            if (VAR20 && ((VAR19->VAR3 & VAR3) == VAR3))
                FUN3(VAR1, VAR21[VAR6], VAR20, 1, NULL);
        }
    }
}