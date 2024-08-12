FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    long VAR5;
    int VAR6, VAR7;
    VAR6 = FUN2(VAR2, &VAR5, &VAR7);
    if (VAR6 < 0)
    {
        VAR4 = FUN3(VAR2, VAR5);
        if (VAR7 == -1)
        {
            if (VAR4 == NULL || VAR4 == &VAR2->VAR8)
            {
                FUN4(VAR2, ""
                                             "",
                                     VAR5);
                FUN4(VAR2, "", VAR5);
                FUN5(VAR2, VAR4);
                return 0;
                if (VAR4 == NULL)
                {
                    VAR4 = FUN6(sizeof(*VAR4));
                    VAR4->VAR9 = VAR5;
                    VAR4->VAR10 = 0;
                    FUN7(&VAR2->VAR11, VAR4, VAR12);
                    FUN4(VAR2, "", VAR5);
                    FUN4(VAR2, "", VAR4->VAR10, VAR7, VAR4->VAR9);
                    VAR4->VAR13[VAR4->VAR10] = VAR7;
                    VAR4->VAR10++;
                    return 0