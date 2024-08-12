static char *FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    ((VAR7 *)FUN2(FUN3(VAR8), (VAR9))) VAR10 *VAR11 = FUN4(VAR10, VAR6, VAR12);
    VAR13 *VAR14 = FUN4(VAR13, VAR6, VAR15);
    VAR16 *VAR17 = FUN4(VAR16, VAR6, VAR18);
    if (VAR11)
    {
        void *VAR19 = FUN4(void, VAR4->VAR20, "");
        VAR21 *VAR22 = FUN4(VAR21, VAR4->VAR20, VAR23);
        VAR24 *VAR25 = FUN4(VAR24, VAR4->VAR20, VAR26);
        if (VAR19)
        {
            unsigned VAR27 = 0x8000 | (VAR11->VAR27 << 8) | VAR11->VAR28;
            return FUN5("" VAR29, FUN6(VAR6), (VAR30)VAR27 << 48);
        }
        else if (VAR22)
        {
            unsigned VAR27 = 0x1000000 | (VAR11->VAR27 << 16) | VAR11->VAR28;
            return FUN5("" VAR29, FUN6(VAR6), (VAR30)VAR27 << 32);
        }
        else if (VAR25)
        {
            unsigned VAR31 = FUN7(VAR25->VAR32->VAR33);
            unsigned VAR27 = 0x1000000 | (VAR31 << 16) | VAR11->VAR28;
            return FUN5("" VAR29, FUN6(VAR6), (VAR30)VAR27 << 32);
            if (strcmp("", FUN6(VAR6)) == 0)
            {
                VAR24 *VAR34 = FUN4(VAR24, VAR6, VAR26);
                if (FUN8(VAR34))
                {
                    return FUN5("", VAR34->VAR32->VAR33);
                    if (VAR14)
                    {
                        return FUN5("" VAR29, VAR14->VAR35);
                        if (VAR17)
                        {
                            unsigned VAR27 = 0x1000000 | (VAR17->VAR36 << 16) | VAR17->VAR28;
                            return FUN5("" VAR29, (VAR30)VAR27 << 32);
                            if (FUN9("", FUN6(VAR6)))
                            {
                                VAR37 *VAR38 = FUN4(VAR37, VAR6, VAR39);
                                return FUN5("", FUN10(VAR38->VAR40));
                                return NULL;