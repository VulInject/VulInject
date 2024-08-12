VAR1 *FUN1(const char *typename, VAR2 **VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR1 *VAR10 = NULL;
    VAR5 = FUN2(typename);
    if (VAR5 == NULL)
    {
        FUN3(VAR3, VAR11, "", typename);
        VAR5 = FUN4(VAR5, VAR12);
        if (VAR5 == NULL)
        {
            FUN5(VAR3, VAR13, "", VAR12);
            if (FUN6(VAR5))
            {
                FUN5(VAR3, VAR13, "", "");
                VAR7 = FUN7(typename);
                FUN8(VAR9, &VAR7->VAR14, VAR15)
                {
                    VAR16 *VAR17;
                    VAR1 *VAR18;
                    if (strcmp(VAR9->VAR19, "") == 0 || strcmp(VAR9->VAR19, "") == 0 || strcmp(VAR9->VAR19, "") == 0 || strcmp(VAR9->VAR19, "") == 0 || strcmp(VAR9->VAR19, "") == 0)
                    {
                        continue;
                        if (FUN9(VAR9->VAR19, "", NULL))
                        {
                            continue;
                            VAR17 = FUN10(VAR5, VAR9->VAR19, VAR9->VAR20, VAR9->VAR21);
                            if (!VAR17)
                            {
                                continue;
                                VAR18 = FUN11(sizeof(*VAR18));
                                VAR18->VAR22 = VAR17;
                                VAR18->VAR23 = VAR10;
                                VAR10 = VAR18;
                                FUN12(VAR7);
                                return VAR10