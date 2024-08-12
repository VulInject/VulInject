VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4 = FUN2(-1);
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10;
    char VAR11[32];
    const char *VAR12;
    int VAR13;
    VAR1 *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    VAR12 = strchr(VAR2, '');
    if (VAR12)
    {
        VAR12++;
        VAR13 = VAR12 - VAR2;
        if (VAR13 > sizeof(VAR11))
            VAR13 = sizeof(VAR11);
        FUN3(VAR11, VAR13, VAR2);
    }
    else
    {
        VAR12 = "";
        FUN3(VAR11, sizeof(VAR11), VAR2);
        for (VAR10 = VAR19; VAR10; VAR10 = VAR10->VAR20)
        {
            VAR6 = VAR10->VAR21;
            if (strcmp(VAR6->VAR22, VAR11) == 0)
            {
                break;
                if (VAR10 == NULL)
                {
                    FUN4("", VAR11);
                    if (!VAR4)
                    {
                        FUN4(""
                                     ""
                                     "",
                                     VAR11);
                        if (VAR6->VAR23)
                        {
                            VAR14 = VAR6->FUN5(VAR4, VAR12);
                        }
                        else
                        {
                            if (*VAR12)
                            {
                                FUN4("", VAR11);
                                VAR14 = FUN6(VAR4, VAR6->VAR24);
                                if (!VAR14)
                                {
                                    FUN4("", VAR6->VAR24);
                                    FUN7(FUN8(VAR14), true, "", &VAR8);
                                    if (VAR8)
                                    {
                                        FUN9(VAR8, "", VAR6->VAR24);
                                        FUN10(FUN8(VAR14));
                                        return VAR14