static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    uint64_t VAR7;
    VAR8 *VAR9 = (VAR8 *)VAR4;
    VAR10 *VAR11 = FUN2();
    ram_addr_t VAR12;
    VAR5 *VAR13 = FUN3();
    if (!VAR11)
    {
        VAR4->VAR14.VAR15 = FUN4(VAR16);
        return;
    }
    VAR12 = (VAR9->VAR17 - 1) * VAR11->VAR18;
    if ((VAR12 % VAR19 == 0) && (VAR12 >= VAR11->VAR20))
    {
        VAR6 = FUN5(VAR13, VAR12, 1).VAR6;
        FUN6(VAR6);
        if (!VAR6)
        {
            VAR5 *VAR21 = FUN7(VAR5, 1);
            ram_addr_t VAR22 = VAR12 - (VAR12 - VAR11->VAR20) % VAR11->VAR23;
            char VAR24[16];
            snprintf(VAR24, 16, "", (int)((VAR22 - VAR11->VAR20) / VAR11->VAR23) + 1);
            if (VAR22 + VAR11->VAR23 > VAR11->VAR20 + VAR11->VAR25)
            {
                VAR7 = VAR11->VAR20 + VAR11->VAR25 - VAR22;
            }
            else
            {
                VAR7 = VAR11->VAR23;
            }
            FUN8(VAR21, NULL, VAR24, VAR7, &VAR26);
            FUN9(FUN10(VAR21));
            FUN11(FUN10(VAR21));
            FUN12(VAR21);
            FUN13(VAR13, VAR22, VAR21);
        }
        VAR11->VAR27[(VAR12 - VAR11->VAR20) / VAR19] = 1;
    }
    VAR4->VAR14.VAR15 = FUN4(VAR28);
}