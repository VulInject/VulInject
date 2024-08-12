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
    int VAR20, VAR21;
    int VAR22, VAR23;
    int VAR24;
    unsigned int VAR25;
    FUN2("", (VAR6 == 0) ? "" : (VAR6 == 1) ? ""
                                                                                                   : "");
    if (VAR6 == 0)
    {
        VAR14 = VAR2->VAR26;
        VAR16 = VAR2->VAR27.VAR28[0];
        VAR17 = VAR2->VAR29.VAR28[0];
        VAR18 = VAR2->VAR30.VAR28[0];
        VAR19 = -VAR2->VAR27.VAR31[0];
        VAR22 = 7 * VAR2->VAR27.VAR31[0];
        VAR23 = VAR5 * VAR2->VAR27.VAR31[0] + VAR4 - 8;
    }
    else if (VAR6 == 1)
    {
        VAR14 = VAR2->VAR32;
        VAR16 = VAR2->VAR27.VAR28[1];
        VAR17 = VAR2->VAR29.VAR28[1];
        VAR18 = VAR2->VAR30.VAR28[1];
        VAR19 = -VAR2->VAR27.VAR31[1];
        VAR22 = 7 * VAR2->VAR27.VAR31[1];
        VAR23 = VAR5 * VAR2->VAR27.VAR31[1] + VAR4 - 8;
    }
    else
    {
        VAR14 = VAR2->VAR32;
        VAR16 = VAR2->VAR27.VAR28[2];
        VAR17 = VAR2->VAR29.VAR28[2];
        VAR18 = VAR2->VAR30.VAR28[2];
        VAR19 = -VAR2->VAR27.VAR31[2];
        VAR22 = 7 * VAR2->VAR27.VAR31[2];
        VAR23 = VAR5 * VAR2->VAR27.VAR31[2] + VAR4 - 8;
    }
    for (VAR8 = 0; VAR8 < VAR5; VAR8 += 8)
    {
        for (VAR7 = 0; VAR7 < VAR4; VAR7 += 8, VAR11++)
        {
            if (VAR2->VAR33[VAR11].VAR34 != VAR35)
            {
                VAR20 = VAR2->VAR33[VAR11].VAR20;
                VAR21 = VAR2->VAR33[VAR11].VAR21;
                VAR24 = VAR2->VAR33[VAR11].VAR24;
                VAR25 = VAR2->VAR33[VAR11].VAR36;
                VAR25 += VAR20;
                VAR25 += (VAR21 * VAR19);
                if ((VAR25 < VAR22) || (VAR25 > VAR23))
                {
                }
                if ((VAR2->VAR33[VAR11].VAR34 == VAR37) || (VAR2->VAR33[VAR11].VAR34 == VAR38))
                {
                    VAR2->VAR39.VAR40[1][VAR24](VAR16 + VAR2->VAR33[VAR11].VAR36, VAR18 + VAR25, VAR19, 8);
                }
                else if (VAR2->VAR33[VAR11].VAR34 != VAR41)
                {
                    VAR2->VAR39.VAR40[1][VAR24](VAR16 + VAR2->VAR33[VAR11].VAR36, VAR17 + VAR25, VAR19, 8);
                }
                FUN3("", VAR11, VAR2->VAR33[VAR11].VAR34, VAR2->VAR33[VAR11].VAR42[0], VAR14[0]);
                for (VAR12 = 0; VAR12 < 64; VAR12++)
                    VAR15[VAR43[VAR12]] = VAR2->VAR33[VAR11].VAR42[VAR12] * VAR14[VAR12];
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
                if (VAR2->VAR33[VAR11].VAR34 == VAR41)
                {
                    VAR15[0] += 1024;
                    VAR2->VAR39.FUN4(VAR16 + VAR2->VAR33[VAR11].VAR36, VAR19, VAR15);
                }
                else
                {
                    VAR2->VAR39.FUN5(VAR16 + VAR2->VAR33[VAR11].VAR36, VAR19, VAR15);
                }
                FUN3("", (VAR2->VAR33[VAR11].VAR34 == VAR41) ? "" : "");
                for (VAR9 = 0; VAR9 < 8; VAR9++)
                {
                    for (VAR10 = 0; VAR10 < 8; VAR10++)
                    {
                        FUN3("", *(VAR16 + VAR2->VAR33[VAR11].VAR36 + (VAR9 * VAR19 + VAR10)));
                    }
                    FUN3("");
                }
                FUN3("");
            }
            else
            {
                VAR2->VAR39.VAR40[1][0](VAR16 + VAR2->VAR33[VAR11].VAR36, VAR17 + VAR2->VAR33[VAR11].VAR36, VAR19, 8);
            }
        }
    }
    FUN6();
}