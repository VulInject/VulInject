static char *FUN1(char *VAR1, int VAR2, VAR3 *VAR4, int VAR5)
{
    char *VAR6 = NULL;
    switch (VAR4->VAR7)
    {
    case VAR8:
        if (VAR4->VAR9)
        {
            VAR6 = FUN2(VAR4->VAR10, VAR4->VAR9);
        }
        FUN3(VAR1, VAR2, ""
                                "",
                    VAR5, VAR5, VAR6 ? VAR6 : "");
        break;
    case VAR11:
        if (VAR4->VAR9)
        {
            VAR6 = FUN2(VAR4->VAR10, VAR4->VAR9);
        }
        else
        {
            FUN4(NULL, VAR12, "");
            return NULL;
        }
        if (VAR6 == NULL)
        {
            return NULL;
        }
        FUN3(VAR1, VAR2, ""
                                ""
                                ""
                                "",
                    VAR5, VAR4->VAR13, VAR4->VAR14, VAR5, VAR6);
        break;
    default:
        break;
    }
    FUN5(VAR6);
    return VAR1;
}