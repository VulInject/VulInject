static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = NULL;
    VAR5 *VAR12;
    VAR8->VAR13 = 1;
    FUN2(VAR2, VAR14, "");
    while (VAR4)
    {
        if (!strcmp(VAR4->VAR15, "") && (VAR11 = VAR4->VAR16) && (!strcmp(VAR11->VAR17, "") || !strcmp(VAR11->VAR17, "")))
        {
            break;
        }
        VAR4 = VAR4->VAR18;
    }
    if (!VAR4)
    {
        FUN2(VAR2, VAR19, "");
        return -1;
    }
    if (VAR11->VAR20 < 64)
    {
        FUN2(VAR2, VAR19, "", VAR11->VAR20);
        return -1;
    }
    VAR12 = VAR11->VAR16;
    if (FUN3(VAR12) != 1)
        FUN2(VAR2, VAR21, "");
    VAR8->VAR22 = FUN3(&VAR12[2]);
    VAR8->VAR23 = FUN3(&VAR12[4]);
    VAR8->VAR24 = FUN3(&VAR12[6]);
    VAR8->VAR25 = FUN3(&VAR12[8]);
    if (memcmp(&VAR12[VAR26], "", 12))
    {
        FUN2(VAR2, VAR19, "");
        return -1;
    }
    if (VAR26 + VAR8->VAR22 + VAR8->VAR23 + VAR8->VAR24 + 8 > VAR11->VAR20 || VAR26 + 48 > VAR11->VAR20)
    {
        FUN2(VAR2, VAR19, "");
        return VAR27;
    }
    VAR8->VAR28 = FUN4(&VAR12[VAR26 + 28]);
    FUN2(VAR2, VAR29, "", VAR8->VAR28);
    memcpy(VAR8->VAR30, &VAR6[0x58], 8);
    FUN5(VAR2, VAR29, "", VAR8->VAR30, 8);
    FUN5(VAR2, VAR29, "", &VAR12[VAR26 + VAR8->VAR22 + VAR8->VAR23 + VAR8->VAR24], 8);
    if (VAR2->VAR31 > 0)
    {
        FUN6(VAR2, VAR2->VAR32, VAR2->VAR32, VAR2->VAR31);
    }
    if (!memcmp(VAR8->VAR33, (const VAR5[8]){0}, 8) || FUN7(VAR2, VAR12, VAR8->VAR33) < 0 && FUN8(VAR2, VAR12, VAR11->VAR20, VAR8->VAR34) < 0)
    {
        int VAR35;
        for (VAR35 = 0; VAR35 < FUN9(VAR36); VAR35 += 2)
        {
            uint8_t VAR37[16];
            FUN10(VAR37, VAR36[VAR35]);
            FUN10(&VAR37[8], VAR36[VAR35 + 1]);
            FUN6(VAR2, VAR37, VAR37, 16);
            if (!FUN7(VAR2, VAR12, VAR8->VAR33) || !FUN8(VAR2, VAR12, VAR11->VAR20, VAR8->VAR34))
                break;
        }
        if (VAR35 >= FUN9(VAR36))
        {
            FUN2(VAR2, VAR19, "");
            return -1;
        }
    }
    FUN11(&VAR8->VAR38, VAR8->VAR39, 64, 0);
    FUN12(&VAR8->VAR38, VAR8->VAR40, &VAR12[VAR26 + 40], 1, NULL, 0);
    FUN5(VAR2, VAR29, "", VAR8->VAR40, 8);
    FUN11(&VAR8->VAR38, VAR8->VAR40, 64, 1);
    return 0;
}