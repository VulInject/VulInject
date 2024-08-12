static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    fprintf(VAR4, "");
    for (VAR3 = 0; VAR3 < VAR2->VAR5.VAR6; VAR3++)
    {
        VAR7 *VAR8 = FUN2(&(VAR2->VAR5), VAR3);
        fprintf(VAR4, "", VAR3, VAR8->VAR9 ? VAR8->VAR9 : "", VAR8->VAR10.VAR11.VAR12, VAR8->VAR13);
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR5.VAR6;)
    {
        VAR7 *VAR8 = FUN2(&(VAR2->VAR5), VAR3);
        if (VAR8->VAR13 == VAR14)
        {
            VAR15 *VAR16 = FUN3(VAR2, VAR8->VAR10.VAR11.VAR12);
            char *VAR17 = VAR16->VAR9;
            assert(VAR8->VAR9);
            VAR16->VAR9 = VAR8->VAR9;
            if (FUN4(VAR17, VAR16->VAR9))
                return -2;
            if (VAR16->VAR18 & VAR19)
            {
                int VAR20 = strlen(VAR16->VAR9);
                int VAR21 = strlen(VAR17);
                int VAR22 = VAR20 - VAR21;
                VAR23 *VAR24 = FUN2(&(VAR2->VAR25), VAR16->VAR26.VAR27.VAR28);
                uint32_t VAR29 = VAR16->VAR30;
                int VAR3 = 0;
                while (!FUN5(VAR2, VAR29))
                {
                    do
                    {
                        VAR23 *VAR31 = VAR24 + VAR3;
                        if (FUN6(VAR31) || (FUN7(VAR31) && !FUN8(VAR31)))
                        {
                            VAR15 *VAR32 = FUN3(VAR2, FUN9(VAR31));
                            int VAR33 = strlen(VAR32->VAR9);
                            char *VAR34 = FUN10(VAR33 + VAR22 + 1);
                            assert(!FUN11(VAR32->VAR9, VAR16->VAR9, VAR21));
                            FUN12(VAR34, VAR33 + VAR22 + 1, VAR16->VAR9);
                            FUN12(VAR34 + VAR20, VAR33 + VAR22 + 1 - VAR20, VAR32->VAR9 + VAR21);
                            FUN13(VAR2, VAR32->VAR30, VAR34);
                        }
                        VAR3++;
                    } while ((VAR3 % (0x10 * VAR2->VAR35)) != 0);
                    VAR29 = FUN14(VAR2, VAR29);
                }
            }
            free(VAR17);
            FUN15(&(VAR2->VAR5), VAR3);
            continue;
        }
        else if (VAR8->VAR13 == VAR36)
        {
            VAR15 *VAR16;
            int VAR37, VAR38;
            if (mkdir(VAR8->VAR9))
                return -5;
            if (mkdir(VAR8->VAR9, 0755))
                return -5;
            VAR16 = FUN16(VAR2, VAR8->VAR10.mkdir.VAR12, VAR8->VAR10.mkdir.VAR12 + 1);
            if (VAR16 == NULL)
                return -6;
            VAR16->VAR18 = VAR19;
            VAR16->VAR39 = 0;
            VAR16->VAR9 = VAR8->VAR9;
            VAR37 = VAR2->VAR25.VAR6;
            assert(VAR37);
            FUN17(VAR2, VAR2->VAR25.VAR6, 0x10 * VAR2->VAR35);
            VAR16->VAR26.VAR27.VAR28 = VAR37;
            VAR38 = strlen(VAR8->VAR9) - strlen(FUN18(VAR8->VAR9)) - 1;
            for (VAR37 = 0; VAR37 < VAR2->VAR16.VAR6; VAR37++)
            {
                VAR15 *VAR32 = FUN2(&(VAR2->VAR16), VAR37);
                if (VAR32->VAR40 < 0 && VAR32 != VAR16 && !FUN11(VAR32->VAR9, VAR16->VAR9, VAR38) && strlen(VAR32->VAR9) == VAR38)
                    break;
            }
            assert(VAR37 < VAR2->VAR16.VAR6);
            VAR16->VAR26.VAR27.VAR41 = VAR37;
            FUN15(&(VAR2->VAR5), VAR3);
            continue;
        }
        VAR3++;
    }
    return 0;
}