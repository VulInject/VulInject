void FUN1(tb_page_addr_t VAR1, tb_page_addr_t VAR2, int VAR3)
{
    VAR4 *VAR5, *VAR6;
    tb_page_addr_t VAR7, VAR8;
    VAR9 *VAR10;
    int VAR11;
    VAR12 *VAR13 = VAR14;
    VAR15 *VAR16 = NULL;
    int VAR17 = VAR3;
    VAR4 *VAR18 = NULL;
    int VAR19 = 0;
    target_ulong VAR20 = 0;
    target_ulong VAR21 = 0;
    uint32_t VAR22 = 0;
    FUN2();
    FUN3();
    VAR10 = FUN4(VAR1 >> VAR23);
    if (!VAR10)
    {
        return;
    }
    if (VAR13 != NULL)
    {
        VAR16 = VAR13->VAR24;
    }
    VAR5 = VAR10->VAR25;
    while (VAR5 != NULL)
    {
        VAR11 = (VAR26)VAR5 & 3;
        VAR5 = (VAR4 *)((VAR26)VAR5 & ~3);
        VAR6 = VAR5->VAR27[VAR11];
        if (VAR11 == 0)
        {
            VAR7 = VAR5->VAR28[0] + (VAR5->VAR29 & ~VAR30);
            VAR8 = VAR7 + VAR5->VAR31;
        }
        else
        {
            VAR7 = VAR5->VAR28[1];
            VAR8 = VAR7 + ((VAR5->VAR29 + VAR5->VAR31) & ~VAR30);
        }
        if (!(VAR8 <= VAR1 || VAR7 >= VAR2))
        {
            if (VAR17)
            {
                VAR17 = 0;
                VAR18 = NULL;
                if (VAR13->VAR32)
                {
                    VAR18 = FUN5(VAR13->VAR32);
                }
            }
            if (VAR18 == VAR5 && (VAR18->VAR33 & VAR34) != 1)
            {
                VAR19 = 1;
                FUN6(VAR13, VAR18, VAR13->VAR32);
                FUN7(VAR16, &VAR20, &VAR21, &VAR22);
            }
            FUN8(VAR5, -1);
        }
        VAR5 = VAR6;
    }
    if (!VAR10->VAR25)
    {
        FUN9(VAR10);
        FUN10(VAR1);
    }
    if (VAR19)
    {
        VAR13->VAR35 = 1 | FUN11();
        FUN12(VAR13);
    }
}