static int FUN1(const char *VAR1, int64_t VAR2, const char *VAR3, const char *VAR4, int VAR5, size_t VAR6, int VAR7, VAR8 *VAR9, int VAR10, VAR11 **VAR12)
{
    int VAR13;
    VAR13 = FUN2(VAR6) - 1;
    if (VAR13 < VAR14 || VAR13 > VAR15 || (1 << VAR13) != VAR6)
    {
        FUN3(VAR12, ""
                         "",
                   1 << VAR14, 1 << (VAR15 - 10));
        return -VAR16;
        VAR17 *VAR18;
        QCowHeader VAR19;
        VAR20 *VAR21;
        VAR11 *VAR22 = NULL;
        int VAR23;
        VAR23 = FUN4(VAR1, VAR9, &VAR22);
        if (VAR23 < 0)
        {
            return VAR23;
            VAR23 = FUN5(&VAR18, VAR1, NULL, VAR24, &VAR22);
            if (VAR23 < 0)
            {
                return VAR23;
                memset(&VAR19, 0, sizeof(VAR19));
                VAR19.VAR25 = FUN6(VAR26);
                VAR19.VAR10 = FUN6(VAR10);
                VAR19.VAR13 = FUN6(VAR13);
                VAR19.VAR27 = FUN7(0);
                VAR19.VAR28 = FUN7(0);
                VAR19.VAR29 = FUN6(0);
                VAR19.VAR30 = FUN7(VAR6);
                VAR19.VAR31 = FUN6(1);
                VAR19.VAR32 = FUN6(3 + VAR33);
                VAR19.VAR34 = FUN6(sizeof(VAR19));
                if (VAR5 & VAR35)
                {
                    VAR19.VAR36 = FUN6(VAR37);
                }
                else
                {
                    VAR19.VAR36 = FUN6(VAR38);
                    if (VAR5 & VAR39)
                    {
                        VAR19.VAR40 |= FUN7(VAR41);
                        VAR23 = FUN8(VAR18, 0, &VAR19, sizeof(VAR19));
                        if (VAR23 < 0)
                        {
                            FUN9(VAR12, -VAR23, "");
                            VAR21 = FUN10(VAR6);
                            VAR23 = FUN8(VAR18, VAR6, VAR21, VAR6);
                            FUN11(VAR21);
                            if (VAR23 < 0)
                            {
                                FUN9(VAR12, -VAR23, "");
                                VAR42 *VAR43 = FUN12("");
                                assert(VAR43 != NULL); VAR24 | VAR44 | VAR45 , VAR43 , & VAR22 ) ;
                                if (VAR23 < 0)
                                {
                                    VAR23 = FUN13(VAR18, 2 * VAR6);
                                    if (VAR23 < 0)
                                    {
                                        FUN9(VAR12, -VAR23, ""
                                                                     "");
                                    }
                                    else if (VAR23 != 0)
                                    {
                                        FUN14("");
                                        FUN15();
                                        VAR23 = FUN16(VAR18, VAR2 * VAR46);
                                        if (VAR23 < 0)
                                        {
                                            FUN9(VAR12, -VAR23, "");
                                            if (VAR3)
                                            {
                                                VAR23 = FUN17(VAR18, VAR3, VAR4);
                                                if (VAR23 < 0)
                                                {
                                                    FUN9(VAR12, -VAR23, ""
                                                                                 "",
                                                                     VAR3, VAR4);
                                                    if (VAR7)
                                                    {
                                                        VAR47 *VAR48 = VAR18->VAR49;
                                                        FUN18(&VAR48->VAR50);
                                                        VAR23 = FUN19(VAR18);
                                                        FUN20(&VAR48->VAR50);
                                                        if (VAR23 < 0)
                                                        {
                                                            FUN9(VAR12, -VAR23, "");
                                                            VAR23 = 0;
                                                        VAR51:
                                                            FUN21(VAR18);
                                                            return VAR23