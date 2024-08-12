static void FUN1(void *VAR1)
{
    int VAR2;
    VAR3 *VAR4 = NULL;
    int VAR5, VAR6 = 0;
    V9fsPath VAR7, VAR8;
    uint16_t VAR9;
    struct stat VAR10;
    size_t VAR11 = 7;
    int32_t VAR12, VAR13;
    VAR14 *VAR15 = NULL;
    VAR16 *VAR17;
    VAR16 *VAR18 = NULL;
    VAR19 *VAR20 = VAR1;
    VAR21 *VAR22 = VAR20->VAR22;
    VAR6 = FUN2(VAR20, VAR11, "", &VAR12, &VAR13, &VAR9);
    if (VAR6 < 0)
    {
        FUN3(VAR20, VAR6);
        return;
        VAR11 += VAR6;
        FUN4(VAR20->VAR23, VAR20->VAR24, VAR12, VAR13, VAR9);
        if (VAR9 && VAR9 <= VAR25)
        {
            VAR15 = FUN5(sizeof(VAR15[0]) * VAR9);
            VAR4 = FUN5(sizeof(VAR4[0]) * VAR9);
            for (VAR5 = 0; VAR5 < VAR9; VAR5++)
            {
                VAR6 = FUN2(VAR20, VAR11, "", &VAR15[VAR5]);
                if (VAR6 < 0)
                {
                    VAR11 += VAR6;
                }
                else if (VAR9 > VAR25)
                {
                    VAR6 = -VAR26;
                    VAR17 = FUN6(VAR20, VAR12);
                    if (VAR17 == NULL)
                    {
                        FUN7(&VAR7);
                        FUN7(&VAR8);
                        FUN8(&VAR7, &VAR17->VAR8);
                        FUN8(&VAR8, &VAR17->VAR8);
                        for (VAR2 = 0; VAR2 < VAR9; VAR2++)
                        {
                            VAR6 = FUN9(VAR20, &VAR7, VAR15[VAR2].VAR27, &VAR8);
                            if (VAR6 < 0)
                            {
                                goto VAR28;
                                VAR6 = FUN10(VAR20, &VAR8, &VAR10);
                                if (VAR6 < 0)
                                {
                                    goto VAR28;
                                    FUN11(&VAR10, &VAR4[VAR2]);
                                    FUN8(&VAR7, &VAR8);
                                    if (VAR12 == VAR13)
                                    {
                                        FUN12(VAR17->VAR29 != VAR30);
                                        FUN8(&VAR17->VAR8, &VAR8);
                                    }
                                    else
                                    {
                                        VAR18 = FUN13(VAR22, VAR13);
                                        if (VAR18 == NULL)
                                        {
                                            VAR6 = -VAR26;
                                            goto VAR28;
                                            VAR18->VAR31 = VAR17->VAR31;
                                            FUN8(&VAR18->VAR8, &VAR8);
                                            VAR6 = FUN14(VAR20, VAR9, VAR4);
                                            FUN15(VAR20->VAR23, VAR20->VAR24, VAR9, VAR4);
                                        VAR28:
                                            FUN16(VAR20, VAR17);
                                            if (VAR18)
                                            {
                                                FUN16(VAR20, VAR18);
                                                FUN17(&VAR7);
                                                FUN17(&VAR8);
                                            VAR32:
                                                FUN3(VAR20, VAR6);
                                                if (VAR9 && VAR9 <= VAR25)
                                                {
                                                    for (VAR2 = 0; VAR2 < VAR9; VAR2++)
                                                    {
                                                        FUN18(&VAR15[VAR2]);
                                                        FUN19(VAR15);
                                                        FUN19(VAR4);