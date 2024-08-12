static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, qemu_irq VAR6)
{
    VAR1 *VAR7;
    static int VAR8 = 1;
    int VAR9, VAR10, VAR11, VAR12;
    uint64_t VAR13;
    for (VAR9 = 0; VAR9 < 2; VAR9++)
    {
        VAR7 = VAR2 + VAR9;
        if (VAR9 == 0)
            VAR7->VAR14 = VAR4;
        else
            VAR7->VAR14 = VAR5;
        VAR7->VAR15 = FUN2(VAR7->VAR14, VAR16 * 512 + 4);
        if (VAR7->VAR14)
        {
            FUN3(VAR7->VAR14, &VAR13);
            FUN4(VAR7->VAR14, &VAR10, &VAR11, &VAR12);
            VAR7->VAR10 = VAR10;
            VAR7->VAR11 = VAR11;
            VAR7->VAR17 = VAR12;
            VAR7->VAR13 = VAR13;
            if (FUN5(VAR7->VAR14) == VAR18)
            {
                VAR7->VAR19 = 1;
                FUN6(VAR7->VAR14, VAR20, VAR7);
            }
        }
        VAR7->VAR8 = VAR8++;
        strncpy(VAR7->VAR21, FUN7(VAR7->VAR14), sizeof(VAR7->VAR21));
        if (strlen(VAR7->VAR21) == 0)
            snprintf(VAR7->VAR21, sizeof(VAR7->VAR21), "", VAR7->VAR8);
        VAR7->VAR6 = VAR6;
        VAR7->VAR22 = FUN8(VAR23, VAR24, VAR7);
        FUN9(VAR7);
    }
}