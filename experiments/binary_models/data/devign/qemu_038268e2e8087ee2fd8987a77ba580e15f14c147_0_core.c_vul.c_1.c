void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    int VAR5;
    int64_t VAR6;
    bool VAR7 = false;
    if (VAR2 < 0)
    {
        int VAR8 = VAR9;
        if (VAR4->VAR10 == VAR11)
            VAR8 |= VAR12;
        else if (VAR4->VAR10 == VAR13)
            VAR8 |= VAR14;
        if (FUN2(VAR4, -VAR2, VAR8))
        {
            return;
            VAR5 = VAR4->VAR15 >> 9;
            if (VAR5 > VAR4->VAR16)
            {
                VAR5 = VAR4->VAR16;
                VAR7 = true;
                VAR6 = FUN3(VAR4);
                if (VAR5 > 0)
                {
                    FUN4(VAR4);
                    VAR6 += VAR5;
                    FUN5(VAR4, VAR6);
                    VAR4->VAR16 -= VAR5;
                    if (VAR4->VAR16 == 0)
                    {
                        VAR4->VAR17 = VAR18 | VAR19;
                        FUN6(VAR4->VAR20);
                        goto VAR21;
                        VAR5 = VAR4->VAR16;
                        VAR4->VAR22 = 0;
                        VAR4->VAR15 = VAR5 * 512;
                        if (VAR4->VAR20->VAR23->VAR24->FUN7(VAR4->VAR20->VAR23, FUN8(VAR4)) == 0)
                        {
                            goto VAR21;
                            FUN9("" VAR25 "", VAR6, VAR5, VAR4->VAR10);
                            switch (VAR4->VAR10)
                            {
                            case VAR11:
                                VAR4->VAR20->VAR23->VAR26 = FUN10(VAR4->VAR27, &VAR4->VAR28, VAR6, VAR29, VAR4);
                                break;
                            case VAR30:
                                VAR4->VAR20->VAR23->VAR26 = FUN11(VAR4->VAR27, &VAR4->VAR28, VAR6, VAR29, VAR4);
                                break;
                            case VAR13:
                                VAR4->VAR20->VAR23->VAR26 = FUN12(VAR4->VAR27, &VAR4->VAR28, VAR6, VAR31, VAR29, VAR4, VAR32);
                                break;
                                return;
                            VAR21:
                                if (VAR4->VAR10 == VAR11 || VAR4->VAR10 == VAR30)
                                {
                                    FUN13(VAR4->VAR27, &VAR4->VAR33);
                                    FUN14(VAR4);