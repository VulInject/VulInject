static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2->VAR5;
    unsigned char *VAR6;
    int VAR7, VAR8, VAR9;
    ;
    VAR4->VAR2 = VAR2;
    VAR2->VAR10 = VAR11;
    VAR2->VAR12 = 0;
    FUN2(&VAR4->VAR13, VAR2);
    if (VAR4->VAR2->VAR14 != VAR15)
    {
        FUN3(VAR4->VAR2, VAR16, "", VAR15);
        VAR6 = (unsigned char *)VAR4->VAR2->VAR17;
        VAR4->VAR18 = VAR6[0];
        VAR4->VAR19 = FUN4(&VAR6[6]);
        VAR4->VAR20 = FUN4(&VAR6[8]);
        VAR4->VAR21 = VAR6[10];
        VAR4->VAR22 = VAR6[11];
        VAR4->VAR23 = VAR4->VAR24 = VAR6[13];
        if ((VAR4->VAR21 != 4) || ((VAR4->VAR22 != 2) && (VAR4->VAR22 != 4)))
        {
            VAR4->VAR25 = VAR26;
            VAR4->VAR27 = FUN5(VAR4->VAR25);
            VAR4->VAR28 = FUN5(VAR4->VAR25);
            if (VAR4->VAR22 == 4)
            {
                VAR9 = 0xFF00 * 16;
                for (VAR7 = 0; VAR7 < 256; VAR7++)
                    for (VAR8 = 0; VAR8 < 16; VAR8++)
                        VAR4->VAR27[VAR9++] = VAR7;
            }
            else
            {
                VAR9 = 0xF00 * 8;
                for (VAR7 = 0; VAR7 < 256; VAR7++)
                    for (VAR8 = 0; VAR8 < 8; VAR8++)
                        VAR4->VAR27[VAR9++] = VAR7;
                VAR4->VAR29 = 0;
                VAR4->VAR30 = (VAR4->VAR19 / VAR4->VAR21) * (VAR4->VAR20 / VAR4->VAR22) * 2;
                VAR4->VAR31 = FUN5(VAR4->VAR30);
                VAR4->VAR32.VAR33[0] = NULL;
                return 0;