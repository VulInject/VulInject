int FUN1(void *VAR1)
{
    struct pollfd VAR2[2], *VAR3, *VAR4, *VAR5, *VAR6;
    int VAR7, VAR8, VAR9;
    uint8_t VAR10;
    VAR11 *VAR12 = VAR13;
    if (!VAR14)
    {
        VAR14 = 1;
        FUN2();
    }
    for (;;)
    {
        VAR7 = FUN3(VAR12);
        if (VAR15)
            break;
        if (VAR7 == VAR16)
            return VAR16;
        if (VAR7 == VAR17)
            VAR9 = 10;
        else
            VAR9 = 0;
        VAR4 = NULL;
        VAR3 = VAR2;
        if (!(VAR18[0].VAR19 & VAR20))
        {
            VAR4 = VAR3;
            VAR3->VAR21 = 0;
            VAR3->VAR22 = VAR23;
            VAR3++;
        }
        VAR5 = NULL;
        if (VAR24 > 0 && FUN4(&VAR25))
        {
            VAR5 = VAR3;
            VAR3->VAR21 = VAR24;
            VAR3->VAR22 = VAR23;
            VAR3++;
        }
        VAR6 = NULL;
        if (VAR26 > 0)
        {
            VAR6 = VAR3;
            VAR3->VAR21 = VAR26;
            VAR3->VAR22 = VAR23;
            VAR3++;
        }
        VAR7 = FUN5(VAR2, VAR3 - VAR2, VAR9);
        if (VAR7 > 0)
        {
            if (VAR4 && (VAR4->VAR27 & VAR23))
            {
                VAR8 = read(0, &VAR10, 1);
                if (VAR8 == 1)
                {
                    FUN6(&VAR18[0], VAR10);
                }
            }
            if (VAR5 && (VAR5->VAR27 & VAR23))
            {
                uint8_t VAR28[VAR29];
                VAR8 = read(VAR24, VAR28, VAR29);
                if (VAR8 > 0)
                {
                    if (VAR8 < 60)
                    {
                        memset(VAR28 + VAR8, 0, 60 - VAR8);
                        VAR8 = 60;
                    }
                    FUN7(&VAR25, VAR28, VAR8);
                }
            }
            if (VAR6 && (VAR6->VAR27 & VAR23))
            {
                uint8_t VAR28[1];
                VAR8 = read(VAR26, VAR28, 1);
                if (VAR8 == 1)
                    break;
            }
        }
        if (VAR30)
        {
            FUN8(0, 1);
            FUN8(0, 0);
            VAR30 = 0;
        }
        if (VAR31)
        {
            VAR32.FUN9(&VAR32);
            VAR31 = 0;
        }
    }
    return VAR33;
}