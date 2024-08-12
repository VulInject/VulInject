static int FUN1(int VAR1, struct VAR2 *VAR3, struct VAR2 *VAR4, int *VAR5)
{
    int VAR6;
    int VAR7;
    audio_buf_info VAR8;
    int VAR9, VAR10, VAR11;
    const char *VAR12 = VAR1 ? VAR13.VAR14 : VAR13.VAR15;
    const char *VAR16 = VAR1 ? "" : "";
    VAR6 = open(VAR12, (VAR1 ? VAR17 : VAR18) | VAR19);
    if (-1 == VAR6)
    {
        FUN2(VAR20, VAR16, "", VAR12);
        return -1;
        VAR10 = VAR3->VAR10;
        VAR11 = VAR3->VAR11;
        VAR9 = VAR3->VAR9;
        if (FUN3(VAR6, VAR21, &VAR9))
        {
            FUN2(VAR20, VAR16, "", VAR3->VAR9);
            if (FUN3(VAR6, VAR22, &VAR11))
            {
                FUN2(VAR20, VAR16, "", VAR3->VAR11);
                if (FUN3(VAR6, VAR23, &VAR10))
                {
                    FUN2(VAR20, VAR16, "", VAR3->VAR10);
                    if (FUN3(VAR6, VAR24))
                    {
                        FUN2(VAR20, VAR16, "");
                        VAR7 = (VAR3->VAR25 << 16) | FUN4(VAR3->VAR26);
                        if (FUN3(VAR6, VAR27, &VAR7))
                        {
                            FUN2(VAR20, VAR16, "", VAR3->VAR25, VAR3->VAR26);
                            if (FUN3(VAR6, VAR1 ? VAR28 : VAR29, &VAR8))
                            {
                                FUN2(VAR20, VAR16, "");
                                VAR4->VAR9 = VAR9;
                                VAR4->VAR11 = VAR11;
                                VAR4->VAR10 = VAR10;
                                VAR4->VAR25 = VAR8.VAR30;
                                VAR4->VAR26 = VAR8.VAR26;
                                *VAR5 = VAR6;
                                if ((VAR3->VAR9 != VAR4->VAR9) || (VAR3->VAR11 != VAR4->VAR11) || (VAR3->VAR10 != VAR4->VAR10) || (VAR3->VAR26 != VAR4->VAR26) || (VAR3->VAR25 != VAR4->VAR25))
                                {
                                    FUN5("");
                                    FUN6(VAR3, VAR4);
                                    FUN6(VAR3, VAR4);
                                    return 0;
                                VAR31:
                                    FUN7(&VAR6);
                                    return -1