static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9;
    do
    {
        for (VAR9 = FUN2(VAR3)->VAR10; VAR9 && VAR9->VAR4; VAR9++)
        {
            if (strcmp(VAR4, VAR9->VAR4) != 0)
            {
                continue;
            }
            if (!VAR9->VAR7->VAR11 && !VAR9->VAR7->VAR12)
            {
                return NULL;
            }
            VAR7 = FUN3(sizeof(*VAR7));
            VAR7->VAR4 = FUN4(VAR9->VAR4);
            VAR7->VAR13 = FUN4(VAR9->VAR7->VAR4);
            VAR7->VAR14 = !!VAR9->VAR7->VAR6;
            VAR7->VAR6 = FUN4(VAR9->VAR7->VAR6);
            return VAR7;
        }
        VAR3 = FUN5(VAR3);
    } while (VAR3 != FUN6(VAR15));
    VAR7 = FUN3(sizeof(*VAR7));
    VAR7->VAR4 = FUN4(VAR4);
    VAR7->VAR13 = FUN4(VAR5);
    VAR7->VAR14 = !!VAR6;
    VAR7->VAR6 = FUN4(VAR6);
    return VAR7;
}