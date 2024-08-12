static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    if (!VAR4->VAR6)
    {
        int VAR7;
        char *VAR8;
        if (VAR9 == NULL)
        {
            VAR9 = VAR4->VAR10;
        }
        VAR8 = FUN3(VAR11, VAR9);
        if (VAR8 == NULL)
        {
            FUN4("");
        }
        VAR7 = FUN5(VAR8, NULL, NULL, &VAR4->VAR12, NULL, NULL, 1, VAR13, 0);
        if (VAR7 == -1)
        {
            VAR7 = FUN6(VAR8, VAR14, 4096);
            VAR4->VAR12 = VAR14;
            if (VAR7 > 4096)
            {
                FUN4("");
            }
        }
        FUN7(VAR8);
        if (VAR7 == -1)
        {
            FUN4("", VAR9);
        }
        return 0;
    }
    else
    {
        uint64_t VAR15 = VAR16;
        VAR5 = FUN5(VAR4->VAR6, NULL, NULL, &VAR15, NULL, NULL, 1, VAR13, 0);
        if (VAR5 == -1)
        {
            VAR5 = FUN6(VAR4->VAR6, 0, VAR17);
        }
        if (VAR5 == -1)
        {
            fprintf(VAR18, "", VAR4->VAR6);
            return -1;
        }
        if (VAR15 == VAR16 || VAR15 == 0x800)
        {
            VAR4->VAR12 = VAR16;
            strcpy(FUN8(VAR19), VAR4->VAR20);
        }
        else
        {
            VAR4->VAR12 = VAR15;
        }
    }
    if (VAR4->VAR21)
    {
        ram_addr_t VAR22;
        int VAR23;
        VAR22 = VAR24;
        while (VAR5 + 0x100000 > VAR22)
        {
            VAR22 += 0x100000;
        }
        VAR23 = FUN6(VAR4->VAR21, VAR22, VAR17 - VAR22);
        if (VAR23 == -1)
        {
            fprintf(VAR18, "", VAR4->VAR21);
            FUN9(1);
        }
        FUN10(FUN8(VAR25), VAR22);
        FUN10(FUN8(VAR26), VAR23);
    }
    return 0;
}