void FUN1(const char *VAR1)
{
    VAR2 **VAR3 = FUN2(VAR1, "", 0);
    if (VAR3)
    {
        VAR2 **VAR4 = VAR3;
        VAR2 *VAR5 = *VAR4++;
        VAR6 = FUN3(VAR7, VAR7, sizeof(VAR8), FUN4(VAR3));
        while (VAR5)
        {
            char *VAR9 = strstr(VAR5, "");
            char *VAR10 = VAR9 ? VAR9 + 1 : NULL;
            if (!VAR9)
            {
                VAR9 = strstr(VAR5, "");
                VAR10 = VAR9 ? VAR9 + 1 : NULL;
                if (!VAR9)
                {
                    VAR9 = strstr(VAR5, "");
                    VAR10 = VAR9 ? VAR9 + 2 : NULL;
                    if (VAR9)
                    {
                        const char *VAR11 = NULL;
                        uint64_t VAR12, VAR13;
                        if ((FUN5(VAR5, &VAR11, 0, &VAR12) == 0) && (FUN5(VAR10, NULL, 0, &VAR13) == 0) && VAR13 > 0)
                        {
                            struct Range VAR14;
                            FUN6(VAR11 == VAR9);
                            switch (*VAR9)
                            {
                            case '':
                            {
                                VAR14.VAR15 = VAR12;
                                VAR14.VAR16 = VAR12 + (VAR13 - 1);
                                break;
                            case '':
                            {
                                VAR14.VAR16 = VAR12;
                                VAR14.VAR15 = VAR12 - (VAR13 - 1);
                                break;
                            case '':
                                VAR14.VAR15 = VAR12;
                                VAR14.VAR16 = VAR13;
                                break;
                            default:
                                FUN7();
                                FUN8(VAR6, VAR14);
                            }
                                else { FUN9("", VAR5); }
                                else
                                {
                                    FUN9("", VAR5);
                                    VAR5 = *VAR4++;
                                    FUN10(VAR3)