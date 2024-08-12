static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    unsigned char *VAR6;
    int VAR7, VAR8, VAR9;
    VAR4->VAR2 = VAR2;
    VAR2->VAR10 = VAR11;
    if (VAR4->VAR2->VAR12 != VAR13)
    {
        FUN2(VAR4->VAR2, VAR14, "", VAR13);
        return -1;
    }
    VAR6 = (unsigned char *)VAR4->VAR2->VAR15;
    VAR4->VAR16 = VAR6[0];
    VAR4->VAR17 = FUN3(&VAR6[6]);
    VAR4->VAR18 = FUN3(&VAR6[8]);
    if (FUN4(VAR2, VAR4->VAR17, VAR4->VAR18))
    {
        VAR4->VAR17 = VAR4->VAR18 = 0;
        return -1;
    }
    VAR4->VAR19 = VAR6[10];
    VAR4->VAR20 = VAR6[11];
    VAR4->VAR21 = VAR4->VAR22 = VAR6[13];
    if ((VAR4->VAR19 != 4) || ((VAR4->VAR20 != 2) && (VAR4->VAR20 != 4)))
    {
        return -1;
    }
    VAR4->VAR23 = VAR24;
    VAR4->VAR25 = FUN5(VAR4->VAR23);
    VAR4->VAR26 = FUN5(VAR4->VAR23);
    if (VAR4->VAR20 == 4)
    {
        VAR9 = 0xFF00 * 16;
        for (VAR7 = 0; VAR7 < 256; VAR7++)
            for (VAR8 = 0; VAR8 < 16; VAR8++)
                VAR4->VAR25[VAR9++] = VAR7;
    }
    else
    {
        VAR9 = 0xF00 * 8;
        for (VAR7 = 0; VAR7 < 256; VAR7++)
            for (VAR8 = 0; VAR8 < 8; VAR8++)
                VAR4->VAR25[VAR9++] = VAR7;
    }
    VAR4->VAR27 = 0;
    VAR4->VAR28 = (VAR4->VAR17 / VAR4->VAR19) * (VAR4->VAR18 / VAR4->VAR20) * 2;
    VAR4->VAR29 = FUN5(VAR4->VAR28);
    VAR4->VAR30.VAR31[0] = NULL;
    return 0;
}