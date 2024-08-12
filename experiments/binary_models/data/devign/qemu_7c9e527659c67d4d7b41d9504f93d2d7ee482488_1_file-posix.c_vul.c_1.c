static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13;
    VAR7 *VAR14 = NULL;
    const char *VAR15 = NULL;
    const char *VAR16;
    BlockdevAioOptions VAR17, VAR18;
    int VAR19, VAR20;
    struct stat VAR21;
    OnOffAuto VAR22;
    VAR13 = FUN2(&VAR23, NULL, 0, &VAR24);
    FUN3(VAR13, VAR4, &VAR14);
    VAR15 = FUN4(VAR13, "");
    VAR20 = FUN5(&VAR15);
    if (VAR20 != 0)
    {
        FUN6(VAR8, -VAR20, "");
        VAR18 = (VAR5 & VAR25) ? VAR26 : VAR27;
        VAR17 = FUN7(&VAR28, FUN4(VAR13, ""), VAR18, &VAR14);
        VAR10->VAR29 = (VAR17 == VAR26);
        VAR22 = FUN7(&VAR30, FUN4(VAR13, ""), VAR31, &VAR14);
        switch (VAR22)
        {
        case VAR32:
            VAR10->VAR33 = true;
            if (!FUN8())
            {
                fprintf(VAR34, ""
                                ""
                                ""
                                "");
                break;
            case VAR35:
                VAR10->VAR33 = false;
                break;
            case VAR31:
                VAR10->VAR33 = FUN8();
                break;
            default:
                FUN9();
                VAR10->VAR6 = VAR6;
                FUN10(VAR5, &VAR10->VAR6);
                VAR10->VAR19 = -1;
                VAR19 = FUN11(VAR15, VAR10->VAR6, 0644);
                if (VAR19 < 0)
                {
                    VAR20 = -VAR36;
                    FUN6(VAR8, VAR36, "", VAR15);
                    if (VAR20 == -VAR37)
                    {
                        VAR20 = -VAR38;
                        VAR10->VAR19 = VAR19;
                        VAR10->VAR39 = -1;
                        if (VAR10->VAR33)
                        {
                            VAR19 = FUN11(VAR15, VAR10->VAR6);
                            if (VAR19 < 0)
                            {
                                VAR20 = -VAR36;
                                FUN6(VAR8, VAR36, "", VAR15);
                                FUN12(VAR10->VAR19);
                                VAR10->VAR39 = VAR19;
                                VAR10->VAR40 = 0;
                                VAR10->VAR41 = VAR42;
                                if (VAR10->VAR29 && !(VAR10->VAR6 & VAR43))
                                {
                                    FUN13(VAR8, ""
                                                     "");
                                    if (VAR10->VAR29)
                                    {
                                        FUN13(VAR8, ""
                                                         "");
                                        VAR10->VAR44 = true;
                                        VAR10->VAR45 = true;
                                        VAR2->VAR46 = VAR47;
                                        if ((VAR2->VAR6 & VAR48) != 0)
                                        {
                                            VAR10->VAR49 = true;
                                            if (FUN14(VAR10->VAR19, &VAR21) < 0)
                                            {
                                                VAR20 = -VAR36;
                                                FUN6(VAR8, VAR36, "");
                                                if (FUN15(VAR21.VAR50))
                                                {
                                                    VAR10->VAR51 = true;
                                                    VAR10->VAR52 = true;
                                                    if (FUN16(VAR21.VAR50))
                                                    {
                                                        unsigned int VAR53;
                                                        if (FUN17(VAR10->VAR19, VAR54, &VAR53) == 0 && VAR53)
                                                        {
                                                            VAR10->VAR51 = true;
                                                            if (!(VAR2->VAR6 & VAR48))
                                                            {
                                                                VAR10->VAR51 = false;
                                                                VAR10->VAR45 = false;
                                                                if (FUN18(VAR21.VAR50))
                                                                {
                                                                    VAR10->VAR49 = true;
                                                                    if (FUN19(VAR10->VAR19))
                                                                    {
                                                                        VAR10->VAR55 = true;
                                                                        VAR20 = 0;
                                                                    VAR56:
                                                                        if (VAR15 && (VAR5 & VAR57))
                                                                        {
                                                                            unlink(VAR15);
                                                                            FUN20(VAR13);
                                                                            return VAR20