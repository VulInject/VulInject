int FUN1(VAR1 *VAR2, jthrowable VAR3, char **VAR4, void *VAR5)
{
    int VAR6 = 0;
    AVBPrint VAR7;
    char *VAR8 = NULL;
    char *VAR9 = NULL;
    jclass VAR10 = NULL;
    jmethodID VAR11 = NULL;
    jclass VAR12 = NULL;
    jmethodID VAR13 = NULL;
    jstring VAR14;
    FUN2(&VAR7, 0, VAR15);
    VAR12 = (*VAR2)->FUN3(VAR2, VAR3);
    if ((*VAR2)->FUN4(VAR2))
    {
        (*VAR2)->FUN5(VAR2);
        FUN6(VAR5, VAR16, "");
        VAR6 = VAR17;
        goto VAR18;
    }
    VAR10 = (*VAR2)->FUN3(VAR2, VAR12);
    if ((*VAR2)->FUN4(VAR2))
    {
        (*VAR2)->FUN5(VAR2);
        FUN6(VAR5, VAR16, "");
        VAR6 = VAR17;
        goto VAR18;
    }
    VAR11 = (*VAR2)->FUN7(VAR2, VAR10, "", "");
    if ((*VAR2)->FUN4(VAR2))
    {
        (*VAR2)->FUN5(VAR2);
        FUN6(VAR5, VAR16, "");
        VAR6 = VAR17;
        goto VAR18;
    }
    VAR14 = (*VAR2)->FUN8(VAR2, VAR12, VAR11);
    if ((*VAR2)->FUN4(VAR2))
    {
        (*VAR2)->FUN5(VAR2);
        FUN6(VAR5, VAR16, "");
        VAR6 = VAR17;
        goto VAR18;
    }
    if (VAR14)
    {
        VAR8 = FUN9(VAR2, VAR14, VAR5);
        (*VAR2)->FUN10(VAR2, VAR14);
        VAR14 = NULL;
    }
    VAR13 = (*VAR2)->FUN7(VAR2, VAR12, "", "");
    if ((*VAR2)->FUN4(VAR2))
    {
        (*VAR2)->FUN5(VAR2);
        FUN6(VAR5, VAR16, "");
        VAR6 = VAR17;
        goto VAR18;
    }
    VAR14 = (*VAR2)->FUN8(VAR2, VAR3, VAR13);
    if ((*VAR2)->FUN4(VAR2))
    {
        (*VAR2)->FUN5(VAR2);
        FUN6(VAR5, VAR16, "");
        VAR6 = VAR17;
        goto VAR18;
    }
    if (VAR14)
    {
        VAR9 = FUN9(VAR2, VAR14, VAR5);
        (*VAR2)->FUN10(VAR2, VAR14);
        VAR14 = NULL;
    }
    if (VAR8 && VAR9)
    {
        FUN11(&VAR7, "", VAR8, VAR9);
    }
    else if (VAR8 && !VAR9)
    {
        FUN11(&VAR7, "", VAR8);
    }
    else if (!VAR8 && VAR9)
    {
        FUN11(&VAR7, "", VAR9);
    }
    else
    {
        FUN6(VAR5, VAR19, "");
        FUN11(&VAR7, "");
    }
    VAR6 = FUN12(&VAR7, VAR4);
VAR18:
    FUN13(VAR8);
    FUN13(VAR9);
    if (VAR10)
    {
        (*VAR2)->FUN10(VAR2, VAR10);
    }
    if (VAR12)
    {
        (*VAR2)->FUN10(VAR2, VAR12);
    }
    if (VAR14)
    {
        (*VAR2)->FUN10(VAR2, VAR14);
    }
    return VAR6;
}