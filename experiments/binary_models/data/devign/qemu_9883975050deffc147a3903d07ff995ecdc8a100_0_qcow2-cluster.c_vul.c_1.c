static int FUN1(VAR1 *VAR2, int VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    uint64_t VAR9;
    VAR4 *VAR10 = NULL;
    int64_t VAR11;
    int VAR12;
    VAR9 = VAR7->VAR13[VAR3];
    FUN2(VAR2, VAR3);
    VAR11 = FUN3(VAR2, VAR7->VAR14 * sizeof(VAR4));
    if (VAR11 < 0)
    {
        VAR12 = VAR11;
        VAR12 = FUN4(VAR2, VAR7->VAR15);
        if (VAR12 < 0)
        {
            FUN5(VAR2, VAR3);
            VAR12 = FUN6(VAR2, VAR7->VAR16, VAR11, (void **)VAR5);
            if (VAR12 < 0)
            {
                VAR10 = *VAR5;
                if ((VAR9 & VAR17) == 0)
                {
                    memset(VAR10, 0, VAR7->VAR14 * sizeof(VAR4));
                }
                else
                {
                    VAR4 *VAR18;
                    FUN7(VAR2->VAR19, VAR20);
                    VAR12 = FUN8(VAR2, VAR7->VAR16, VAR9 & VAR17, (void **)&VAR18);
                    if (VAR12 < 0)
                    {
                        memcpy(VAR10, VAR18, VAR7->VAR21);
                        FUN9(VAR2, VAR7->VAR16, (void **)&VAR18);
                        FUN7(VAR2->VAR19, VAR22);
                        FUN10(VAR2, VAR3);
                        FUN11(VAR2, VAR7->VAR16, VAR10);
                        VAR12 = FUN4(VAR2, VAR7->VAR16);
                        if (VAR12 < 0)
                        {
                            FUN12(VAR2, VAR3);
                            VAR7->VAR13[VAR3] = VAR11 | VAR23;
                            VAR12 = FUN13(VAR2, VAR3);
                            if (VAR12 < 0)
                            {
                                *VAR5 = VAR10;
                                FUN14(VAR2, VAR3, 0);
                                return 0;
                            VAR24:
                                FUN14(VAR2, VAR3, VAR12);
                                if (VAR10 != NULL)
                                {
                                    FUN9(VAR2, VAR7->VAR16, (void **)VAR5);
                                    VAR7->VAR13[VAR3] = VAR9;
                                    if (VAR11 > 0)
                                    {
                                        FUN15(VAR2, VAR11, VAR7->VAR14 * sizeof(VAR4), VAR25);
                                        return VAR12