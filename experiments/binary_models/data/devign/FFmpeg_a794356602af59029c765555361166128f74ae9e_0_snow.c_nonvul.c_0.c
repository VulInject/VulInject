static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    uint8_t VAR5[32];
    memset(VAR5, VAR6, sizeof(VAR5));
    VAR2->VAR7 = FUN2(&VAR2->VAR8, VAR5);
    if (VAR2->VAR7 || VAR2->VAR9)
    {
        FUN3(VAR2);
        VAR2->VAR10 = VAR2->VAR11 = VAR2->VAR12 = VAR2->VAR13 = VAR2->VAR14 = 0;
    }
    if (VAR2->VAR7)
    {
        VAR2->VAR15 = FUN4(&VAR2->VAR8, VAR2->VAR16, 0);
        if (VAR2->VAR15 > 0)
        {
            FUN5(VAR2->VAR17, VAR18, "", VAR2->VAR15);
            return -1;
        }
        VAR2->VAR9 = FUN2(&VAR2->VAR8, VAR2->VAR16);
        VAR2->VAR19 = FUN4(&VAR2->VAR8, VAR2->VAR16, 0);
        VAR2->VAR20 = FUN4(&VAR2->VAR8, VAR2->VAR16, 0);
        VAR2->VAR21 = FUN4(&VAR2->VAR8, VAR2->VAR16, 0);
        VAR2->VAR22 = FUN4(&VAR2->VAR8, VAR2->VAR16, 0);
        VAR2->VAR23 = FUN4(&VAR2->VAR8, VAR2->VAR16, 0);
        VAR2->VAR24 = FUN4(&VAR2->VAR8, VAR2->VAR16, 0);
        VAR2->VAR25 = FUN2(&VAR2->VAR8, VAR2->VAR16);
        VAR4 = FUN4(&VAR2->VAR8, VAR2->VAR16, 0) + 1;
        if (VAR4 < 1 || VAR4 > VAR26)
        {
            FUN5(VAR2->VAR17, VAR18, "", VAR4);
            return -1;
        }
        VAR2->VAR27 = VAR4;
        FUN6(VAR2);
    }
    if (!VAR2->VAR7)
    {
        if (FUN2(&VAR2->VAR8, VAR2->VAR16))
        {
            for (VAR3 = 0; VAR3 < 2; VAR3++)
            {
                int VAR28, VAR29, VAR30 = 0;
                VAR31 *VAR32 = &VAR2->VAR33[VAR3];
                VAR32->VAR34 = FUN2(&VAR2->VAR8, VAR2->VAR16);
                VAR28 = FUN4(&VAR2->VAR8, VAR2->VAR16, 0) * 2 + 2;
                if ((unsigned)VAR28 > VAR35 || VAR28 == 0)
                    return -1;
                VAR32->VAR28 = VAR28;
                for (VAR29 = VAR28 / 2; VAR29; VAR29--)
                {
                    VAR32->VAR36[VAR29] = FUN4(&VAR2->VAR8, VAR2->VAR16, 0) * (1 - 2 * (VAR29 & 1));
                    VAR30 += VAR32->VAR36[VAR29];
                }
                VAR32->VAR36[0] = 32 - VAR30;
            }
            VAR2->VAR33[2].VAR34 = VAR2->VAR33[1].VAR34;
            VAR2->VAR33[2].VAR28 = VAR2->VAR33[1].VAR28;
            memcpy(VAR2->VAR33[2].VAR36, VAR2->VAR33[1].VAR36, sizeof(VAR2->VAR33[1].VAR36));
        }
        if (FUN2(&VAR2->VAR8, VAR2->VAR16))
        {
            VAR2->VAR21 = FUN4(&VAR2->VAR8, VAR2->VAR16, 0);
            FUN6(VAR2);
        }
    }
    VAR2->VAR10 += FUN4(&VAR2->VAR8, VAR2->VAR16, 1);
    if (VAR2->VAR10 > 1U)
    {
        FUN5(VAR2->VAR17, VAR18, "", VAR2->VAR10);
        return -1;
    }
    VAR2->VAR11 += FUN4(&VAR2->VAR8, VAR2->VAR16, 1);
    VAR2->VAR13 += FUN4(&VAR2->VAR8, VAR2->VAR16, 1);
    VAR2->VAR12 += FUN4(&VAR2->VAR8, VAR2->VAR16, 1);
    VAR2->VAR14 += FUN4(&VAR2->VAR8, VAR2->VAR16, 1);
    if (VAR2->VAR14 > 1 || VAR2->VAR14 < 0)
    {
        FUN5(VAR2->VAR17, VAR18, "", VAR2->VAR14);
        VAR2->VAR14 = 0;
        return -1;
    }
    return 0;
}