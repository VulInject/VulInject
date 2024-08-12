void FUN1(void)
{
    int VAR1, VAR2;
    for (VAR1 = 0; VAR1 < FUN2(VAR3); VAR1++)
    {
        const VAR4 *VAR5 = &VAR3[VAR1];
        uint8_t VAR6[4][8 + 6 + 3] = {{0}};
        VAR7 *VAR8[4] = {VAR6[0], VAR6[1], VAR6[2], VAR6[3]};
        int VAR9[4] = {0, 0, 0, 0};
        uint16_t VAR10[2];
        if (!VAR5->VAR11 && !VAR5->VAR12 && !VAR5->VAR13 && !VAR5->VAR14 && !VAR5->VAR15)
            continue;
        FUN3(VAR5->VAR13 <= 3);
        FUN3(VAR5->VAR14 <= 3);
        FUN3(VAR5->VAR12 <= 4);
        FUN3(VAR5->VAR11 && VAR5->VAR11[0]);
        FUN3((VAR5->VAR12 == 4 || VAR5->VAR12 == 2) == !!(VAR5->VAR15 & VAR16));
        FUN4(FUN5(VAR5->VAR11) == VAR1);
        for (VAR2 = 0; VAR2 < FUN2(VAR5->VAR17); VAR2++)
        {
            const VAR18 *VAR19 = &VAR5->VAR17[VAR2];
            if (VAR2 >= VAR5->VAR12)
            {
                FUN3(!VAR19->VAR20 && !VAR19->VAR21 && !VAR19->VAR22 && !VAR19->VAR23 && !VAR19->VAR24);
                continue;
            }
            if (VAR5->VAR15 & VAR25)
            {
                FUN3(VAR19->VAR21 >= VAR19->VAR24);
            }
            else
            {
                FUN3(8 * (VAR19->VAR21 + 1) >= VAR19->VAR24 + 1);
            }
            FUN6(VAR10, (void *)VAR8, VAR9, VAR5, 0, 0, VAR2, 2, 0);
            if (!FUN7(VAR5->VAR11, "", 6))
                continue;
            FUN3(VAR10[0] == 0 && VAR10[1] == 0);
            VAR10[0] = VAR10[1] = (1 << (VAR19->VAR24 + 1)) - 1;
            FUN8(VAR10, VAR8, VAR9, VAR5, 0, 0, VAR2, 2);
        }
    }
}