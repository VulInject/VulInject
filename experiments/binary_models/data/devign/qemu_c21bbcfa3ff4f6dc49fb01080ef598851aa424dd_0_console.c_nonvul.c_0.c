VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR1 *VAR5;
    VAR6 *VAR7;
    unsigned VAR8;
    unsigned VAR9;
    static int VAR10;
    VAR5 = FUN2(sizeof(VAR1));
    if (!VAR5)
        return NULL;
    VAR7 = FUN3(VAR3, (VAR4 == 0) ? VAR11 : VAR12);
    if (!VAR7)
    {
        free(VAR5);
        return NULL;
    }
    VAR5->VAR13 = VAR7;
    VAR5->VAR14 = VAR15;
    VAR5->VAR16 = VAR17;
    VAR7->VAR5 = VAR5;
    VAR7->VAR18.VAR19 = VAR7->VAR20;
    VAR7->VAR18.VAR21 = sizeof(VAR7->VAR20);
    VAR7->VAR22 = FUN4(VAR23, VAR24, VAR7);
    if (!VAR10)
    {
        VAR10 = 1;
        FUN5(VAR7->VAR3);
    }
    VAR7->VAR25 = 0;
    VAR7->VAR26 = 0;
    VAR7->VAR27 = VAR28;
    VAR7->VAR29 = 0;
    VAR7->VAR30 = 0;
    VAR8 = VAR7->VAR3->VAR8;
    VAR9 = VAR7->VAR3->VAR9;
    if (VAR4 != 0)
    {
        VAR8 = FUN6(VAR4, (char **)&VAR4, 10);
        if (*VAR4 == '')
        {
            VAR4++;
            VAR8 *= VAR31;
        }
        if (*VAR4 == '')
        {
            VAR4++;
            VAR9 = FUN6(VAR4, (char **)&VAR4, 10);
            if (*VAR4 == '')
            {
                VAR4++;
                VAR9 *= VAR32;
            }
        }
    }
    VAR7->VAR33 = VAR8;
    VAR7->VAR34 = VAR9;
    VAR7->VAR35 = VAR36;
    VAR7->VAR37 = VAR38;
    VAR7->VAR39 = VAR7;
    VAR7->VAR40.VAR41 = 0;
    VAR7->VAR40.VAR42 = 0;
    VAR7->VAR40.VAR43 = 0;
    VAR7->VAR40.VAR44 = 0;
    VAR7->VAR40.VAR45 = 0;
    VAR7->VAR40.VAR46 = VAR47;
    VAR7->VAR40.VAR48 = VAR49;
    VAR7->VAR50 = VAR7->VAR40;
    FUN7(VAR7);
    FUN8(VAR5);
    return VAR5;
}