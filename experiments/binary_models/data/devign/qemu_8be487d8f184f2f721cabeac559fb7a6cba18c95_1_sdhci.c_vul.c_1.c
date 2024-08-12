static void FUN1(VAR1 *VAR2)
{
    SDRequest VAR3;
    uint8_t VAR4[16];
    int VAR5;
    VAR2->VAR6 = 0;
    VAR2->VAR7 = 0;
    VAR3.VAR8 = VAR2->VAR9 >> 8;
    VAR3.VAR10 = VAR2->VAR11;
    FUN2("", VAR3.VAR8, VAR3.VAR10);
    VAR5 = FUN3(&VAR2->VAR12, &VAR3, VAR4);
    if (VAR2->VAR9 & VAR13)
    {
        if (VAR5 == 4)
        {
            VAR2->VAR14[0] = (VAR4[0] << 24) | (VAR4[1] << 16) | (VAR4[2] << 8) | VAR4[3];
            VAR2->VAR14[1] = VAR2->VAR14[2] = VAR2->VAR14[3] = 0;
            FUN2("", VAR2->VAR14[0]);
        }
        else if (VAR5 == 16)
        {
            VAR2->VAR14[0] = (VAR4[11] << 24) | (VAR4[12] << 16) | (VAR4[13] << 8) | VAR4[14];
            VAR2->VAR14[1] = (VAR4[7] << 24) | (VAR4[8] << 16) | (VAR4[9] << 8) | VAR4[10];
            VAR2->VAR14[2] = (VAR4[3] << 24) | (VAR4[4] << 16) | (VAR4[5] << 8) | VAR4[6];
            VAR2->VAR14[3] = (VAR4[0] << 16) | (VAR4[1] << 8) | VAR4[2];
            FUN2(""
                      "",
                      VAR2->VAR14[3], VAR2->VAR14[2], VAR2->VAR14[1], VAR2->VAR14[0]);
        }
        else
        {
            FUN4("");
            if (VAR2->VAR15 & VAR16)
            {
                VAR2->VAR6 |= VAR17;
                VAR2->VAR18 |= VAR19;
            }
        }
        if ((VAR2->VAR20 & VAR21) && (VAR2->VAR9 & VAR13) == VAR22)
        {
            VAR2->VAR18 |= VAR23;
        }
    }
    if (VAR2->VAR20 & VAR24)
    {
        VAR2->VAR18 |= VAR25;
    }
    FUN5(VAR2);
    if (VAR2->VAR26 && (VAR2->VAR9 & VAR27))
    {
        VAR2->VAR28 = 0;
        FUN6(VAR2);
    }
}