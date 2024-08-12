static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    char VAR4, VAR5[16];
    int VAR6;
    if (VAR2->VAR7 >= 0)
        VAR3 = FUN2(VAR2, VAR3);
    while (VAR3 && *VAR3)
    {
        if (sscanf(VAR3, "", VAR5, &VAR4) == 2)
        {
            VAR3 += strcspn(VAR3, "");
            VAR3 += !!*VAR3;
            for (VAR6 = 0; VAR6 < FUN3(VAR8); VAR6++)
                if (!strcmp(VAR5, VAR8[VAR6].VAR5))
                {
                    VAR2->VAR7 = VAR6;
                    VAR3 = FUN2(VAR2, VAR3);
                }
        }
        else
        {
            VAR3 += strcspn(VAR3, "");
            VAR3 += !!*VAR3;
        }
    }
    return VAR3 ? 0 : VAR9;
}