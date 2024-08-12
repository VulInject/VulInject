static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    int VAR9, VAR10;
    int VAR11 = VAR3;
    int VAR12;
    VAR13 *VAR14;
    DCTELEM VAR15[64];
    unsigned char *VAR16;
    unsigned char *VAR17;
    unsigned char *VAR18;
    int VAR19;
    FUN2("", (VAR6 == 0) ? "" : (VAR6 == 1) ? ""
                                                                                                   : "");
    if (VAR6 == 0)
    {
        VAR14 = VAR2->VAR20;
        VAR16 = VAR2->VAR21.VAR22[0];
        VAR17 = VAR2->VAR21.VAR22[0];
        VAR18 = VAR2->VAR21.VAR22[0];
        VAR19 = -VAR2->VAR21.VAR23[0];
    }
    else if (VAR6 == 1)
    {
        VAR14 = VAR2->VAR24;
        VAR16 = VAR2->VAR21.VAR22[1];
        VAR17 = VAR2->VAR21.VAR22[1];
        VAR18 = VAR2->VAR21.VAR22[1];
        VAR19 = -VAR2->VAR21.VAR23[1];
    }
    else
    {
        VAR14 = VAR2->VAR24;
        VAR16 = VAR2->VAR21.VAR22[2];
        VAR17 = VAR2->VAR21.VAR22[2];
        VAR18 = VAR2->VAR21.VAR22[2];
        VAR19 = -VAR2->VAR21.VAR23[2];
    }
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR4; VAR7++, VAR11++)
        {
            if (VAR2->VAR25[VAR11].VAR26 == VAR27)
            {
                for (VAR12 = 0; VAR12 < 64; VAR12++)
                    VAR15[VAR28[VAR12]] = VAR2->VAR25[VAR11].VAR29[VAR12] * VAR14[VAR12];
                VAR15[0] += 1024;
                FUN3("", VAR11);
                FUN3("");
                for (VAR9 = 0; VAR9 < 8; VAR9++)
                {
                    for (VAR10 = 0; VAR10 < 8; VAR10++)
                    {
                        FUN3("", VAR15[VAR9 * 8 + VAR10]);
                    }
                    FUN3("");
                }
                FUN3("");
                VAR2->VAR30.FUN4(VAR16 + VAR2->VAR25[VAR11].VAR31, VAR19, VAR15);
            }
            else if (VAR2->VAR25[VAR11].VAR26 == VAR32)
            {
                for (VAR9 = 0; VAR9 < 8; VAR9++)
                    memcpy(VAR16 + VAR2->VAR25[VAR11].VAR31 + VAR19 * VAR9, VAR17 + VAR2->VAR25[VAR11].VAR31 + VAR19 * VAR9, 8);
            }
            else
            {
            }
        }
    }
    FUN5();
}