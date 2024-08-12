static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
    VAR3 *VAR6;
    int VAR7;
    if (VAR5 == NULL)
    {
        return -1;
    }
    if (FUN2() && strcmp(VAR5, "") == 0)
    {
        FUN3(VAR4);
        FUN4(FUN5(VAR2), true, "", &VAR8);
        return 0;
    }
    for (VAR7 = 0; VAR7 < FUN6(VAR9); VAR7++)
    {
        VAR6 = &VAR9[VAR7];
        if (strcmp(VAR5, VAR6->VAR5) == 0)
        {
            memcpy(VAR4, VAR6, sizeof(*VAR6));
            return 0;
        }
    }
    return -1;
}