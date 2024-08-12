static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3;
    struct VAR4 *VAR5;
    VAR6 **VAR7;
    struct libusb_device_descriptor VAR8;
    int VAR9 = 0;
    int VAR10, VAR11;
    if (FUN2() != 0)
    {
        return;
    }
    if (FUN3())
    {
        VAR11 = FUN4(VAR12, &VAR7);
        for (VAR10 = 0; VAR10 < VAR11; VAR10++)
        {
            if (FUN5(VAR7[VAR10], &VAR8) != 0)
            {
                continue;
            }
            if (VAR8.VAR13 == VAR14)
            {
                continue;
            }
            FUN6(VAR3, &VAR15, VAR16)
            {
                VAR5 = &VAR3->VAR17;
                if (VAR5->VAR18 > 0 && VAR5->VAR18 != FUN7(VAR7[VAR10]))
                {
                    continue;
                }
                if (VAR5->VAR19 > 0 && VAR5->VAR19 != FUN8(VAR7[VAR10]))
                {
                    continue;
                }
                if (VAR5->VAR20 != NULL)
                {
                    char VAR20[16] = "";
                    FUN9(VAR7[VAR10], VAR20, sizeof(VAR20));
                    if (strcmp(VAR5->VAR20, VAR20) != 0)
                    {
                        continue;
                    }
                }
                if (VAR5->VAR21 > 0 && VAR5->VAR21 != VAR8.VAR22)
                {
                    continue;
                }
                if (VAR5->VAR23 > 0 && VAR5->VAR23 != VAR8.VAR24)
                {
                    continue;
                }
                VAR3->VAR25++;
                if (VAR3->VAR26 >= 3)
                {
                    continue;
                }
                if (VAR3->VAR27 != NULL)
                {
                    continue;
                }
                if (FUN10(VAR3, VAR7[VAR10]) < 0)
                {
                    VAR3->VAR26++;
                    continue;
                }
                break;
            }
        }
        FUN11(VAR7, 1);
        FUN6(VAR3, &VAR15, VAR16)
        {
            if (VAR3->VAR27 == NULL)
            {
                VAR9++;
            }
            if (VAR3->VAR25 == 0)
            {
                if (VAR3->VAR27)
                {
                    FUN12(VAR3);
                }
                VAR3->VAR26 = 0;
            }
            VAR3->VAR25 = 0;
        }
        if (VAR9 == 0)
        {
            if (VAR28)
            {
                FUN13(VAR28);
                FUN14();
            }
            return;
        }
    }
    if (!VAR29)
    {
        VAR29 = FUN15(VAR30, NULL);
    }
    if (!VAR28)
    {
        VAR28 = FUN16(VAR31, VAR32, NULL);
        if (!VAR28)
        {
            return;
        }
        FUN17();
    }
    FUN18(VAR28, FUN19(VAR31) + 2000);
}