static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    uint64_t VAR5 = VAR6;
    int VAR7;
    int VAR8;
    char *VAR9;
    if (!VAR4->VAR10 || VAR4->VAR11)
    {
        uint64_t VAR12 = (FUN3(VAR13, 0x80000000U) - 0x200000) & ~0xffffUL;
        if (VAR14 == NULL)
        {
            VAR14 = VAR4->VAR15;
        }
        VAR9 = FUN4(VAR16, VAR14);
        if (VAR9 == NULL)
        {
            FUN5("");
        }
        VAR8 = FUN6(VAR9, VAR17, &VAR12, &VAR4->VAR18, NULL, NULL, 1, VAR19, 0);
        if (VAR8 > 0)
        {
            VAR4->VAR18 += VAR12;
        }
        else
        {
            VAR8 = FUN7(VAR9, VAR20, 4096);
            VAR4->VAR18 = VAR20;
        }
        FUN8(VAR9);
        if (VAR8 == -1)
        {
            FUN5("", VAR14);
        }
        VAR4->VAR21 = VAR4->VAR18;
    }
    if (VAR4->VAR10)
    {
        VAR7 = FUN6(VAR4->VAR10, NULL, NULL, &VAR5, NULL, NULL, 1, VAR19, 0);
        if (VAR7 < 0)
        {
            VAR7 = FUN7(VAR4->VAR10, 0, VAR13);
        }
        if (VAR7 < 0)
        {
            fprintf(VAR22, "", VAR4->VAR10);
            return -1;
        }
        if (VAR5 == VAR6 || VAR5 == 0x800)
        {
            VAR4->VAR21 = VAR6;
            strcpy(FUN9(VAR23), VAR4->VAR24);
        }
        else
        {
            VAR4->VAR21 = VAR5;
        }
        if (VAR4->VAR25)
        {
            ram_addr_t VAR26;
            int VAR27;
            VAR26 = VAR28;
            while (VAR7 + 0x100000 > VAR26)
            {
                VAR26 += 0x100000;
            }
            VAR27 = FUN7(VAR4->VAR25, VAR26, VAR13 - VAR26);
            if (VAR27 == -1)
            {
                fprintf(VAR22, "", VAR4->VAR25);
                FUN10(1);
            }
            FUN11(FUN9(VAR29), VAR26);
            FUN11(FUN9(VAR30), VAR27);
        }
    }
    return 0;
}