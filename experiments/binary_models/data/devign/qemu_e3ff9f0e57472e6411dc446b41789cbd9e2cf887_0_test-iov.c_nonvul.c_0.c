static void FUN1(void)
{
    int VAR1[2];
    int VAR2;
    unsigned VAR3, VAR4, VAR5, VAR6, VAR7;
    fd_set VAR8;
    unsigned VAR9;
    struct VAR10 *VAR11, *VAR12;
    unsigned char *VAR13;
    size_t VAR14;
    FUN2(&VAR11, &VAR9);
    VAR14 = FUN3(VAR11, VAR9);
    VAR13 = FUN4(VAR14);
    for (VAR3 = 0; VAR3 < VAR14; ++VAR3)
    {
        VAR13[VAR3] = VAR3 & 255;
    }
    FUN5(VAR11, VAR9, 0, VAR13, VAR14);
    VAR12 = FUN6(VAR11, sizeof(*VAR11) * VAR9);
    if (FUN7(VAR15, VAR16, 0, VAR1) < 0)
    {
        FUN8("");
        FUN9(1);
    }
    FUN10(&VAR8);
    VAR7 = 0;
    if (FUN11() == 0)
    {
        close(VAR1[0]);
        FUN12(VAR1[1], &VAR8);
        FUN13(VAR1[1], VAR17, VAR18 | VAR19);
        VAR2 = FUN14(VAR14 / 2, VAR14);
        FUN15(VAR1[1], VAR20, VAR21, &VAR2, sizeof(VAR2));
        for (VAR3 = 0; VAR3 <= VAR14; ++VAR3)
        {
            for (VAR4 = VAR3; VAR4 <= VAR14; ++VAR4)
            {
                VAR5 = VAR3;
                do
                {
                    VAR6 = FUN14(0, VAR4 - VAR5 + 1);
                    VAR2 = FUN16(VAR1[1], VAR11, VAR9, VAR5, VAR6);
                    FUN17(memcmp(VAR11, VAR12, sizeof(*VAR11) * VAR9) == 0);
                    if (VAR2 >= 0)
                    {
                        VAR5 += VAR2;
                        VAR7 += VAR2;
                        FUN18(FUN14(0, 30));
                    }
                    else if (VAR22 == VAR23)
                    {
                        FUN19(VAR1[1] + 1, NULL, &VAR8, NULL, NULL);
                        continue;
                    }
                    else
                    {
                        FUN8("");
                        FUN9(1);
                    }
                } while (VAR5 < VAR4);
            }
        }
        FUN20(VAR11, VAR9);
        FUN21(VAR13);
        FUN21(VAR12);
        FUN9(0);
    }
    else
    {
        close(VAR1[1]);
        FUN12(VAR1[0], &VAR8);
        FUN13(VAR1[0], VAR17, VAR18 | VAR19);
        VAR2 = FUN14(VAR14 / 2, VAR14);
        FUN15(VAR1[0], VAR20, VAR24, &VAR2, sizeof(VAR2));
        FUN18(500000);
        for (VAR3 = 0; VAR3 <= VAR14; ++VAR3)
        {
            for (VAR4 = VAR3; VAR4 <= VAR14; ++VAR4)
            {
                VAR5 = VAR3;
                FUN22(VAR11, VAR9, 0, 0xff, VAR14);
                do
                {
                    VAR6 = FUN14(0, VAR4 - VAR5 + 1);
                    VAR2 = FUN23(VAR1[0], VAR11, VAR9, VAR5, VAR6);
                    FUN17(memcmp(VAR11, VAR12, sizeof(*VAR11) * VAR9) == 0);
                    if (VAR2 > 0)
                    {
                        VAR5 += VAR2;
                        VAR7 += VAR2;
                    }
                    else if (!VAR2)
                    {
                        if (VAR6)
                        {
                            break;
                        }
                    }
                    else if (VAR22 == VAR23)
                    {
                        FUN19(VAR1[0] + 1, &VAR8, NULL, NULL, NULL);
                        continue;
                    }
                    else
                    {
                        FUN8("");
                        FUN9(1);
                    }
                } while (VAR5 < VAR4);
                FUN24(VAR11, VAR9, VAR3, VAR4 - VAR3);
            }
        }
        FUN20(VAR11, VAR9);
        FUN21(VAR13);
        FUN21(VAR12);
    }
}