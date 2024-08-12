static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2->VAR5);
    if (FUN3(VAR4))
    {
        VAR6 *VAR7 = FUN4(VAR4);
        XkbDescPtr VAR8 = FUN5(VAR7, VAR9, VAR10);
        char *VAR11 = NULL;
        if (VAR8 && VAR8->VAR12)
        {
            VAR11 = FUN6(VAR7, VAR8->VAR12->VAR11);
            if (VAR11 == NULL)
            {
                fprintf(VAR13, "");
            }
            else if (FUN7(VAR11, "", NULL))
            {
                VAR2->VAR14 = true;
            }
            else if (!FUN7(VAR11, "", NULL))
            {
                fprintf(VAR13, ""
                                "",
                        VAR11);