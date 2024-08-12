void FUN1(VAR1)(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR5;
    switch (VAR5[2])
    {
    case VAR6:
        FUN2("", VAR5[3]);
        FUN3(VAR5[3]);
        break;
    case VAR7:
    case VAR8:
    {
        bool VAR9 = VAR5[2] == VAR8;
        uint32_t VAR10 = VAR5[3];
        uint32_t VAR11 = VAR5[4];
        uint32_t VAR12 = VAR5[5];
        while (VAR12 > 0)
        {
            target_phys_addr_t VAR13 = FUN4(VAR3, VAR11);
            uint32_t VAR14 = VAR15 - (VAR11 & (VAR15 - 1));
            uint32_t VAR16 = VAR14 < VAR12 ? VAR14 : VAR12;
            target_phys_addr_t VAR17 = VAR16;
            void *VAR18 = FUN5(VAR13, &VAR17, VAR9);
            if (VAR18)
            {
                VAR11 += VAR16;
                VAR12 -= VAR16;
                VAR5[2] = VAR9 ? write(VAR10, VAR18, VAR16) : read(VAR10, VAR18, VAR16);
                VAR5[3] = VAR19;
                FUN6(VAR18, VAR17, VAR9, VAR17);
                if (VAR5[2] == -1)
                {
                    break;
                }
            }
            else
            {
                VAR5[3] = VAR20;
                break;
            }
        }
    }
    break;
    case VAR21:
    {
        char VAR22[1024];
        int VAR23;
        int VAR24;
        for (VAR24 = 0; VAR24 < FUN7(VAR22); ++VAR24)
        {
            VAR23 = FUN8(VAR3, VAR5[3] + VAR24, (VAR25 *)VAR22 + VAR24, 1, 0);
            if (VAR23 != 0 || VAR22[VAR24] == 0)
            {
                break;
            }
        }
        if (VAR23 == 0 && VAR24 < FUN7(VAR22))
        {
            VAR5[2] = open(VAR22, VAR5[4], VAR5[5]);
            VAR5[3] = VAR19;
        }
        else
        {
            VAR5[3] = VAR20;
        }
    }
    break;
    case VAR26:
        if (VAR5[3] < 3)
        {
            VAR5[2] = VAR5[3] = 0;
        }
        else
        {
            VAR5[2] = close(VAR5[3]);
            VAR5[3] = VAR19;
        }
        break;
    case VAR27:
        VAR5[2] = FUN9(VAR5[3], (VAR28)(VAR29)VAR5[4], VAR5[5]);
        VAR5[3] = VAR19;
        break;
    case VAR30:
    {
        uint32_t VAR10 = VAR5[3];
        uint32_t VAR31 = VAR5[4];
        uint32_t VAR32 = VAR5[5];
        uint32_t VAR33[2];
        struct timeval VAR34 = {0};
        fd_set VAR35;
        FUN10(&VAR35);
        FUN11(VAR10, &VAR35);
        if (VAR32)
        {
            FUN8(VAR3, VAR32, (VAR25 *)VAR33, sizeof(VAR33), 0);
            VAR34.VAR36 = (VAR29)FUN12(VAR33[0]);
            VAR34.VAR37 = (VAR29)FUN12(VAR33[1]);
        }
        VAR5[2] = FUN13(VAR10 + 1, VAR31 == VAR38 ? &VAR35 : NULL, VAR31 == VAR39 ? &VAR35 : NULL, VAR31 == VAR40 ? &VAR35 : NULL, VAR32 ? &VAR34 : NULL);
        VAR5[3] = VAR19;
    }
    break;
    case VAR41:
        VAR5[2] = 1;
        VAR5[3] = 0;
        break;
    case VAR42:
        VAR5[2] = 128;
        VAR5[3] = 0;
        break;
    case VAR43:
    {
        struct VAR44
        {
            uint32_t VAR45[2];
            char VAR46[120];
        } argv = {{0, 0}, ""};
        argv.VAR45[0] = FUN12(VAR5[3] + FUN14(struct VAR44, VAR46));
        FUN8(VAR3, VAR5[3], (VAR25 *)&argv, sizeof(argv), 1);
    }
    break;
    case VAR47:
    {
        uint32_t VAR48 = VAR5[3];
        uint32_t VAR17 = VAR5[5];
        while (VAR17)
        {
            target_phys_addr_t VAR12 = VAR17;
            void *VAR18 = FUN5(VAR48, &VAR12, 1);
            if (VAR18 && VAR12)
            {
                memset(VAR18, VAR5[4], VAR12);
                FUN6(VAR18, VAR12, 1, VAR12);
            }
            else
            {
                VAR12 = 1;
            }
            VAR48 += VAR12;
            VAR17 -= VAR12;
        }
        VAR5[2] = VAR5[3];
        VAR5[3] = 0;
    }
    break;
    default:
        FUN2("", VAR49, VAR5[2]);
        break;
    }