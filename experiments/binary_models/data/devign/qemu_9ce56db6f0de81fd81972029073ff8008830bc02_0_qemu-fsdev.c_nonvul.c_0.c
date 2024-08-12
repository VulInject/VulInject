int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4;
    int VAR5;
    if (FUN2(VAR2) == NULL)
    {
        fprintf(VAR6, "");
        return -1;
    }
    for (VAR5 = 0; VAR5 < FUN3(VAR7); VAR5++)
    {
        if (strcmp(VAR7[VAR5].VAR8, FUN4(VAR2, "")) == 0)
        {
            break;
        }
    }
    if (VAR5 == FUN3(VAR7))
    {
        fprintf(VAR6, "", FUN4(VAR2, ""));
        return -1;
    }
    if (FUN4(VAR2, "") == NULL)
    {
        fprintf(VAR6, "");
        return -1;
    }
    VAR4 = FUN5(sizeof(*VAR4));
    VAR4->VAR9.VAR10 = FUN6(FUN2(VAR2));
    VAR4->VAR9.VAR11 = FUN6(FUN4(VAR2, ""));
    VAR4->VAR9.VAR12 = FUN6(FUN4(VAR2, ""));
    VAR4->VAR9.VAR13 = VAR7[VAR5].VAR13;
    FUN7(&VAR14, VAR4, VAR15);
    return 0;
}