void FUN1(bool VAR1)
{
    if (VAR1 == !!VAR2)
    {
        return;
    }
    FUN2(true);
    VAR3 = false;
    FUN2(true);
    if (VAR1)
    {
        static const TraceRecord VAR4 = {
            .VAR5 = VAR6,
            .VAR7 = VAR8,
            .VAR9 = VAR10,
        };
        VAR2 = fopen(VAR11, "");
        if (!VAR2)
        {
            return;
        }
        if (fwrite(&VAR4, sizeof VAR4, 1, VAR2) != 1)
        {
            fclose(VAR2);
            VAR2 = NULL;
            return;
        }
        VAR3 = true;
        FUN2(false);
    }
    else
    {
        fclose(VAR2);
        VAR2 = NULL;
    }
}