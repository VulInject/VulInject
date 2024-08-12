void FUN1(void)
{
    VAR1 *VAR2 = FUN2(&VAR3.VAR4);
    const char *VAR5, *VAR6, *VAR7, *VAR8, *VAR9 = NULL, *VAR10 = NULL, *VAR11 = NULL;
    char *VAR12 = NULL, *VAR13 = NULL, *VAR14 = NULL;
    int VAR15, VAR16, VAR17, VAR18;
    spice_image_compression_t VAR19;
    spice_wan_compression_t VAR20;
    if (!VAR2)
    {
        return;
        VAR15 = FUN3(VAR2, "", 0);
        VAR16 = FUN3(VAR2, "", 0);
        if (!VAR15 && !VAR16)
        {
            return;
            VAR5 = FUN4(VAR2, "");
            if (VAR16)
            {
                VAR7 = FUN4(VAR2, "");
                if (NULL == VAR7)
                {
                    VAR7 = "";
                    VAR17 = strlen(VAR7) + 32;
                    VAR6 = FUN4(VAR2, "");
                    if (VAR6)
                    {
                        VAR12 = FUN5(VAR6);
                    }
                    else
                    {
                        VAR12 = FUN6(VAR17);
                        snprintf(VAR12, VAR17, "", VAR7, VAR21);
                        VAR6 = FUN4(VAR2, "");
                        if (VAR6)
                        {
                            VAR13 = FUN5(VAR6);
                        }
                        else
                        {
                            VAR13 = FUN6(VAR17);
                            snprintf(VAR13, VAR17, "", VAR7, VAR22);
                            VAR6 = FUN4(VAR2, "");
                            if (VAR6)
                            {
                                VAR14 = FUN5(VAR6);
                            }
                            else
                            {
                                VAR14 = FUN6(VAR17);
                                snprintf(VAR14, VAR17, "", VAR7, VAR23);
                                VAR9 = FUN4(VAR2, "");
                                VAR10 = FUN4(VAR2, "");
                                VAR11 = FUN4(VAR2, "");
                                VAR8 = FUN4(VAR2, "");
                                VAR18 = 0;
                                if (FUN7(VAR2, "", 0))
                                {
                                    VAR18 |= VAR24;
                                }
                                else if (FUN7(VAR2, "", 0))
                                {
                                    VAR18 |= VAR25;
                                    VAR26 = FUN8();
                                    FUN9(VAR26, VAR8 ? VAR8 : "", VAR18);
                                    if (VAR15)
                                    {
                                        FUN10(VAR26, VAR15);
                                        if (VAR16)
                                        {
                                            FUN11(VAR26, VAR16, VAR14, VAR13, VAR12, VAR9, VAR10, VAR11);
                                            if (VAR5)
                                            {
                                                FUN12(VAR26, VAR5, 0, 0, 0);
                                                if (FUN7(VAR2, "", 0))
                                                {
                                                    VAR27 = "";
                                                    FUN13(VAR26);
                                                    if (FUN7(VAR2, "", 0))
                                                    {
                                                        FUN14(VAR26, false);
                                                        VAR19 = VAR28;
                                                        VAR6 = FUN4(VAR2, "");
                                                        if (VAR6)
                                                        {
                                                            VAR19 = FUN15(VAR6);
                                                            FUN16(VAR26, VAR19);
                                                            VAR20 = VAR29;
                                                            VAR6 = FUN4(VAR2, "");
                                                            if (VAR6)
                                                            {
                                                                VAR20 = FUN17(VAR6);
                                                                FUN18(VAR26, VAR20);
                                                                VAR20 = VAR29;
                                                                VAR6 = FUN4(VAR2, "");
                                                                if (VAR6)
                                                                {
                                                                    VAR20 = FUN17(VAR6);
                                                                    FUN19(VAR26, VAR20);
                                                                    VAR6 = FUN4(VAR2, "");
                                                                    if (VAR6)
                                                                    {
                                                                        int VAR30 = FUN20(VAR6);
                                                                        FUN21(VAR26, VAR30);
                                                                        FUN22(VAR26, FUN7(VAR2, "", 1));
                                                                        FUN23(VAR26, FUN7(VAR2, "", 1));
                                                                        FUN24(VAR2, VAR31, NULL, 0);
                                                                        FUN25(VAR26, &VAR32);
                                                                        VAR33 = 1;
                                                                        VAR34.VAR35 = VAR36;
                                                                        FUN26(&VAR34);
                                                                        FUN27();
                                                                        FUN28();
                                                                        FUN29(VAR12);
                                                                        FUN29(VAR13);
                                                                        FUN29(VAR14);