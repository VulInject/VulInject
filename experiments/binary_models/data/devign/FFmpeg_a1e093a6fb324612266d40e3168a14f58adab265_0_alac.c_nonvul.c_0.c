static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    uint32_t VAR15;
    int VAR16, VAR17;
    FUN2(&VAR7->VAR18, 4);
    FUN2(&VAR7->VAR18, 12);
    VAR9 = FUN3(&VAR7->VAR18);
    VAR7->VAR19 = FUN4(&VAR7->VAR18, 2) << 3;
    VAR10 = VAR7->VAR20 - VAR7->VAR19 + VAR5 - 1;
    if (VAR10 > 32U)
    {
        FUN5(VAR2, VAR21, "", VAR10);
        return VAR22;
    }
    VAR11 = !FUN3(&VAR7->VAR18);
    if (VAR9)
        VAR15 = FUN6(&VAR7->VAR18, 32);
    else
        VAR15 = VAR7->VAR23;
    if (!VAR15 || VAR15 > VAR7->VAR23)
    {
        FUN5(VAR2, VAR21, "", VAR15);
        return VAR24;
    }
    if (!VAR7->VAR25)
    {
        VAR7->VAR26.VAR25 = VAR15;
        if ((VAR14 = VAR2->FUN7(VAR2, &VAR7->VAR26)) < 0)
        {
            FUN5(VAR2, VAR21, "");
            return VAR14;
        }
    }
    else if (VAR15 != VAR7->VAR25)
    {
        FUN5(VAR2, VAR21, "", VAR15, VAR7->VAR25);
        return VAR24;
    }
    VAR7->VAR25 = VAR15;
    if (VAR7->VAR27)
    {
        for (VAR17 = 0; VAR17 < VAR5; VAR17++)
            VAR7->VAR28[VAR17] = (VAR29 *)VAR7->VAR26.VAR30[VAR4 + VAR17];
    }
    if (VAR11)
    {
        int16_t VAR31[2][32];
        int VAR32[2];
        int VAR33[2];
        int VAR34[2];
        int VAR35[2];
        VAR12 = FUN4(&VAR7->VAR18, 8);
        VAR13 = FUN4(&VAR7->VAR18, 8);
        for (VAR17 = 0; VAR17 < VAR5; VAR17++)
        {
            VAR33[VAR17] = FUN4(&VAR7->VAR18, 4);
            VAR34[VAR17] = FUN4(&VAR7->VAR18, 4);
            VAR35[VAR17] = FUN4(&VAR7->VAR18, 3);
            VAR32[VAR17] = FUN4(&VAR7->VAR18, 5);
            for (VAR16 = VAR32[VAR17] - 1; VAR16 >= 0; VAR16--)
                VAR31[VAR17][VAR16] = FUN8(&VAR7->VAR18, 16);
        }
        if (VAR7->VAR19)
        {
            for (VAR16 = 0; VAR16 < VAR7->VAR25; VAR16++)
            {
                if (FUN9(&VAR7->VAR18) <= 0)
                    return -1;
                for (VAR17 = 0; VAR17 < VAR5; VAR17++)
                    VAR7->VAR36[VAR17][VAR16] = FUN4(&VAR7->VAR18, VAR7->VAR19);
            }
        }
        for (VAR17 = 0; VAR17 < VAR5; VAR17++)
        {
            int VAR14 = FUN10(VAR7, VAR7->VAR37[VAR17], VAR7->VAR25, VAR10, VAR35[VAR17] * VAR7->VAR35 / 4);
            if (VAR14 < 0)
                return VAR14;
            if (VAR33[VAR17] == 15)
            {
                FUN11(VAR7->VAR37[VAR17], VAR7->VAR37[VAR17], VAR7->VAR25, VAR10, NULL, 31, 0);
            }
            else if (VAR33[VAR17] > 0)
            {
                FUN5(VAR2, VAR38, "", VAR33[VAR17]);
            }
            FUN11(VAR7->VAR37[VAR17], VAR7->VAR28[VAR17], VAR7->VAR25, VAR10, VAR31[VAR17], VAR32[VAR17], VAR34[VAR17]);
        }
    }
    else
    {
        for (VAR16 = 0; VAR16 < VAR7->VAR25; VAR16++)
        {
            if (FUN9(&VAR7->VAR18) <= 0)
                return -1;
            for (VAR17 = 0; VAR17 < VAR5; VAR17++)
            {
                VAR7->VAR28[VAR17][VAR16] = FUN12(&VAR7->VAR18, VAR7->VAR20);
            }
        }
        VAR7->VAR19 = 0;
        VAR12 = 0;
        VAR13 = 0;
    }
    if (VAR5 == 2 && VAR13)
    {
        FUN13(VAR7->VAR28, VAR7->VAR25, VAR12, VAR13);
    }
    if (VAR7->VAR19)
    {
        FUN14(VAR7->VAR28, VAR7->VAR36, VAR7->VAR19, VAR5, VAR7->VAR25);
    }
    if (FUN15(VAR2->VAR39))
    {
        switch (VAR7->VAR20)
        {
        case 16:
        {
            for (VAR17 = 0; VAR17 < VAR5; VAR17++)
            {
                VAR40 *VAR41 = (VAR40 *)VAR7->VAR26.VAR30[VAR4 + VAR17];
                for (VAR16 = 0; VAR16 < VAR7->VAR25; VAR16++)
                    *VAR41++ = VAR7->VAR28[VAR17][VAR16];
            }
        }
        break;
        case 24:
        {
            for (VAR17 = 0; VAR17 < VAR5; VAR17++)
            {
                for (VAR16 = 0; VAR16 < VAR7->VAR25; VAR16++)
                    VAR7->VAR28[VAR17][VAR16] <<= 8;
            }
        }
        break;
        }
    }
    else
    {
        switch (VAR7->VAR20)
        {
        case 16:
        {
            VAR40 *VAR41 = ((VAR40 *)VAR7->VAR26.VAR30[0]) + VAR4;
            for (VAR16 = 0; VAR16 < VAR7->VAR25; VAR16++)
            {
                for (VAR17 = 0; VAR17 < VAR5; VAR17++)
                    *VAR41++ = VAR7->VAR28[VAR17][VAR16];
                VAR41 += VAR7->VAR5 - VAR5;
            }
        }
        break;
        case 24:
        {
            VAR29 *VAR41 = ((VAR29 *)VAR7->VAR26.VAR30[0]) + VAR4;
            for (VAR16 = 0; VAR16 < VAR7->VAR25; VAR16++)
            {
                for (VAR17 = 0; VAR17 < VAR5; VAR17++)
                    *VAR41++ = VAR7->VAR28[VAR17][VAR16] << 8;
                VAR41 += VAR7->VAR5 - VAR5;
            }
        }
        break;
        case 32:
        {
            VAR29 *VAR41 = ((VAR29 *)VAR7->VAR26.VAR30[0]) + VAR4;
            for (VAR16 = 0; VAR16 < VAR7->VAR25; VAR16++)
            {
                for (VAR17 = 0; VAR17 < VAR5; VAR17++)
                    *VAR41++ = VAR7->VAR28[VAR17][VAR16];
                VAR41 += VAR7->VAR5 - VAR5;
            }
        }
        break;
        }
    }
    return 0;
}