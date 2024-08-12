int FUN1(void *VAR1)
{
    struct pollfd VAR2[3], *VAR3, *VAR4, *VAR5, *VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    uint8_t VAR11;
    VAR12 *VAR13 = VAR14;
    if (!VAR15)
    {
        VAR15 = 1;
        FUN2();
    }
    VAR10 = 1;
    FUN3();
    for (;;)
    {
        VAR7 = FUN4(VAR13);
        if (VAR16)
        {
            VAR7 = VAR17;
            break;
        }
        if (VAR7 == VAR18)
        {
            VAR7 = VAR18;
            break;
        }
        if (VAR7 == VAR19)
            VAR9 = 10;
        else
            VAR9 = 0;
        VAR4 = NULL;
        VAR3 = VAR2;
        if (VAR10 && !(VAR20[0].VAR21 & VAR22))
        {
            VAR4 = VAR3;
            VAR3->VAR23 = 0;
            VAR3->VAR24 = VAR25;
            VAR3++;
        }
        VAR5 = NULL;
        if (VAR26 > 0 && FUN5(&VAR27))
        {
            VAR5 = VAR3;
            VAR3->VAR23 = VAR26;
            VAR3->VAR24 = VAR25;
            VAR3++;
        }
        VAR6 = NULL;
        if (VAR28 > 0)
        {
            VAR6 = VAR3;
            VAR3->VAR23 = VAR28;
            VAR3->VAR24 = VAR25;
            VAR3++;
        }
        VAR7 = FUN6(VAR2, VAR3 - VAR2, VAR9);
        if (VAR7 > 0)
        {
            if (VAR4 && (VAR4->VAR29 & VAR25))
            {
                VAR8 = read(0, &VAR11, 1);
                if (VAR8 == 1)
                {
                    FUN7(&VAR20[0], VAR11);
                }
                else
                {
                    VAR10 = 0;
                }
            }
            if (VAR5 && (VAR5->VAR29 & VAR25))
            {
                uint8_t VAR30[VAR31];
                VAR8 = read(VAR26, VAR30, VAR31);
                if (VAR8 > 0)
                {
                    if (VAR8 < 60)
                    {
                        memset(VAR30 + VAR8, 0, 60 - VAR8);
                        VAR8 = 60;
                    }
                    FUN8(&VAR27, VAR30, VAR8);
                }
            }
            if (VAR6 && (VAR6->VAR29 & VAR25))
            {
                uint8_t VAR30[1];
                VAR8 = read(VAR28, VAR30, 1);
                if (VAR8 == 1)
                {
                    VAR7 = VAR17;
                    break;
                }
            }
        }
        if (VAR32)
        {
            FUN9(0, 1);
            FUN9(0, 0);
            VAR32 = 0;
            if (VAR33[VAR34] & 0x50)
            {
                FUN9(8, 1);
            }
        }
        if (VAR35)
        {
            VAR36.FUN10(&VAR36);
            VAR35 = 0;
        }
    }
    FUN11();
    return VAR7;
}