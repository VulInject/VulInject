void FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, int64_t VAR6, BlockdevOnError VAR7, const char *VAR8, const char *VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13;
    VAR14 *VAR15 = NULL;
    int VAR16;
    int VAR17;
    VAR2 *VAR18;
    VAR2 *VAR19;
    VAR2 *VAR20 = NULL;
    VAR10 *VAR21 = NULL;
    int VAR22;
    assert(VAR5 != VAR3);
    if (VAR5 == VAR4)
    {
        FUN2(VAR11, "");
        return;
        VAR19 = FUN3(VAR3, VAR5);
        if (VAR19 == NULL)
        {
            FUN2(VAR11, "", VAR5->VAR23);
            return;
            VAR13 = FUN4(VAR1, &VAR24, VAR3, 0, VAR25, VAR6, VAR26, NULL, NULL, VAR11);
            if (!VAR13)
            {
                return;
                VAR17 = FUN5(VAR4);
                VAR16 = FUN5(VAR19);
                if (!(VAR17 & VAR27))
                {
                    VAR15 = FUN6(VAR15, VAR4, NULL, VAR17 | VAR27);
                    if (!(VAR16 & VAR27))
                    {
                        VAR15 = FUN6(VAR15, VAR19, NULL, VAR16 | VAR27);
                        if (VAR15)
                        {
                            FUN7(FUN8(VAR3), VAR15, &VAR21);
                            if (VAR21 != NULL)
                            {
                                FUN9(VAR11, VAR21);
                                goto VAR28;
                                VAR20 = FUN10(&VAR29, VAR9, 0, VAR11);
                                if (VAR20 == NULL)
                                {
                                    goto VAR28;
                                    VAR20->VAR30 = VAR5->VAR30;
                                    FUN11(VAR20, FUN8(VAR5));
                                    FUN12(VAR20, VAR5, &VAR21);
                                    if (VAR21)
                                    {
                                        FUN13(VAR20);
                                        VAR20 = NULL;
                                        FUN9(VAR11, VAR21);
                                        goto VAR28;
                                        FUN12(VAR19, VAR20, &VAR21);
                                        if (VAR21)
                                        {
                                            FUN13(VAR20);
                                            VAR20 = NULL;
                                            FUN9(VAR11, VAR21);
                                            goto VAR28;
                                            VAR13->VAR20 = VAR20;
                                            FUN13(VAR20);
                                            assert(FUN14(VAR5, VAR4));
                                            for (VAR18 = VAR5; VAR18 != VAR4; VAR18 = FUN15(VAR18))
                                            {
                                                VAR22 = FUN16(&VAR13->VAR31, "", VAR18, 0, VAR32 | VAR33, VAR11);
                                                if (VAR22 < 0)
                                                {
                                                    goto VAR28;
                                                    VAR22 = FUN16(&VAR13->VAR31, "", VAR4, 0, VAR25, VAR11);
                                                    if (VAR22 < 0)
                                                    {
                                                        goto VAR28;
                                                        VAR22 = FUN16(&VAR13->VAR31, "", VAR19, VAR34, VAR25, VAR11);
                                                        if (VAR22 < 0)
                                                        {
                                                            goto VAR28;
                                                            VAR13->VAR4 = FUN17(VAR35 | VAR33 | VAR36, VAR35 | VAR34 | VAR32);
                                                            VAR22 = FUN18(VAR13->VAR4, VAR4, VAR11);
                                                            if (VAR22 < 0)
                                                            {
                                                                goto VAR28;
                                                                VAR13->VAR5 = FUN17(0, VAR25);
                                                                VAR22 = FUN18(VAR13->VAR5, VAR5, VAR11);
                                                                if (VAR22 < 0)
                                                                {
                                                                    goto VAR28;
                                                                    VAR13->VAR37 = VAR3;
                                                                    VAR13->VAR38 = VAR17;
                                                                    VAR13->VAR16 = VAR16;
                                                                    VAR13->VAR8 = FUN19(VAR8);
                                                                    VAR13->VAR7 = VAR7;
                                                                    FUN20(VAR3, VAR4, VAR5, VAR13);
                                                                    FUN21(&VAR13->VAR31);
                                                                    return;
                                                                VAR28:
                                                                    if (VAR13->VAR4)
                                                                    {
                                                                        FUN22(VAR13->VAR4);
                                                                        if (VAR13->VAR5)
                                                                        {
                                                                            FUN22(VAR13->VAR5);
                                                                            if (VAR20)
                                                                            {
                                                                                FUN12(VAR19, VAR5, &VAR39);
                                                                                FUN23(&VAR13->VAR31);