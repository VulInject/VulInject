VAR1 *FUN1(VAR2 *VAR3, void (*VAR4)(struct VAR1 *VAR5))
{
    VAR1 *VAR6;
    int VAR7;
    int VAR8;
    if (FUN2(VAR3) == NULL)
    {
        fprintf(VAR9, "");
        return NULL;
    }
    if (FUN3(VAR3, "") == NULL)
    {
        fprintf(VAR9, ""%VAR5\"", FUN2(VAR3));
        return NULL;
    }
    for (VAR7 = 0; VAR7 < FUN4(VAR10); VAR7++)
    {
        if (strcmp(VAR10[VAR7].VAR11, FUN3(VAR3, "")) == 0)
            break;
    }
    if (VAR7 == FUN4(VAR10))
    {
        fprintf(VAR9, ""%VAR5\"", FUN3(VAR3, ""));
        return NULL;
    }
    VAR8 = VAR10[VAR7].open(VAR3, &VAR6);
    if (VAR8 < 0)
    {
        fprintf(VAR9, ""%VAR5\"", FUN3(VAR3, ""), strerror(-VAR8));
        return NULL;
    }
    if (!VAR6->VAR12)
        VAR6->VAR12 = FUN5(FUN3(VAR3, ""));
    VAR6->VAR4 = VAR4;
    FUN6(&VAR13, VAR6, VAR14);
    if (FUN7(VAR3, "", 0))
    {
        VAR1 *VAR15 = VAR6;
        int VAR16 = strlen(FUN2(VAR3)) + 6;
        VAR15->VAR17 = FUN8(VAR16);
        snprintf(VAR15->VAR17, VAR16, "", FUN2(VAR3));
        VAR6 = FUN9(VAR15);
        VAR6->VAR12 = VAR15->VAR12;
        VAR6->VAR18 = VAR19;
        FUN6(&VAR13, VAR6, VAR14);
    }
    else
    {
        VAR6->VAR18 = 1;
    }
    VAR6->VAR17 = FUN5(FUN2(VAR3));
    return VAR6;
}