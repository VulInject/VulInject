static int FUN1(VAR1 *VAR2)
{
    char VAR3[32], VAR4[32] = "", VAR5[32] = "";
    int VAR6 = 0, VAR7 = 0;
    int32_t VAR8;
    VAR9 *VAR10;
    VAR10 = FUN2(VAR2, NULL);
    if (!VAR10)
        return FUN3(VAR11);
    VAR10->VAR12->VAR13 = VAR14;
    FUN4(VAR2->VAR15, VAR3, sizeof(VAR3));
    FUN4(VAR2->VAR15, VAR3, sizeof(VAR3));
    sscanf(VAR3, "" VAR16, &VAR8);
    if (VAR8 <= 0)
        return VAR17;
    while (!FUN5(VAR2->VAR15))
    {
        FUN4(VAR2->VAR15, VAR3, sizeof(VAR3));
        if (FUN6(VAR2->VAR15) >= VAR8)
            return VAR17;
        if (!memcmp(VAR3, "", 8))
        {
            if (!VAR10->VAR12->VAR18)
                VAR10->VAR12->VAR18 = VAR6 << 3;
            if (!FUN7(VAR4, ""))
            {
                VAR10->VAR12->VAR19 = FUN8(VAR10->VAR12->VAR18, 0, VAR7, 0xFFFF);
            }
            else if (!FUN7(VAR4, ""))
            {
                VAR10->VAR12->VAR19 = VAR20;
            }
            else if (!FUN7(VAR4, "") || !FUN7(VAR4, ""))
            {
                VAR10->VAR12->VAR19 = VAR21;
            }
            else
            {
                FUN9(VAR2, "", VAR4);
            }
            FUN10(VAR10, 64, 1, VAR10->VAR12->VAR22);
            VAR10->VAR12->VAR23 = VAR10->VAR12->VAR18 * VAR10->VAR12->VAR24 / 8;
            if (FUN6(VAR2->VAR15) > VAR8)
                return VAR17;
            FUN11(VAR2->VAR15, VAR8 - FUN6(VAR2->VAR15));
            return 0;
        }
        else if (!memcmp(VAR3, "", 13))
        {
            sscanf(VAR3, "" VAR16, &VAR10->VAR12->VAR24);
        }
        else if (!memcmp(VAR3, "", 18))
        {
            sscanf(VAR3, "", VAR5);
            if (!FUN7(VAR5, ""))
            {
                VAR7 = 0;
            }
            else if (!FUN7(VAR5, ""))
            {
                VAR7 = 1;
            }
            else if (FUN7(VAR5, ""))
            {
                FUN9(VAR2, "", VAR5);
                return VAR25;
            }
        }
        else if (!memcmp(VAR3, "", 13))
        {
            sscanf(VAR3, "", VAR4);
        }
        else if (!memcmp(VAR3, "", 12))
        {
            sscanf(VAR3, "" VAR26, &VAR10->VAR27);
        }
        else if (!memcmp(VAR3, "", 14))
        {
            sscanf(VAR3, "" VAR16, &VAR6);
        }
        else if (!memcmp(VAR3, "", 11))
        {
            sscanf(VAR3, "" VAR16, &VAR10->VAR12->VAR22);
        }
        else if (!memcmp(VAR3, "", 15))
        {
            sscanf(VAR3, "" VAR16, &VAR10->VAR12->VAR18);
        }
        else
        {
            char VAR28[32], VAR29[32];
            if (sscanf(VAR3, "", VAR28, VAR29) == 3)
            {
                FUN12(&VAR2->VAR30, VAR28, VAR29, VAR31);
            }
            else
            {
                FUN13(VAR2, VAR32, "", VAR3);
            }
        }
    }
    return VAR33;
}