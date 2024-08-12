void FUN1(VAR1 *VAR2, tb_page_addr_t VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    uint32_t VAR8;
    tb_page_addr_t VAR9;
    FUN2();
    FUN3(&VAR2->VAR10, VAR2->VAR10 | VAR11);
    VAR9 = VAR2->VAR3[0] + (VAR2->VAR12 & ~VAR13);
    VAR8 = FUN4(VAR9, VAR2->VAR12, VAR2->VAR14, VAR2->VAR10 & VAR15, VAR2->VAR16);
    FUN5(&VAR17.VAR18, VAR2, VAR8);
    if (VAR2->VAR3[0] != VAR3)
    {
        VAR7 = FUN6(VAR2->VAR3[0] >> VAR19);
        FUN7(&VAR7->VAR20, VAR2);
        FUN8(VAR7);
    }
    if (VAR2->VAR3[1] != -1 && VAR2->VAR3[1] != VAR3)
    {
        VAR7 = FUN6(VAR2->VAR3[1] >> VAR19);
        FUN7(&VAR7->VAR20, VAR2);
        FUN8(VAR7);
    }
    VAR8 = FUN9(VAR2->VAR12);
    FUN10(VAR5)
    {
        if (FUN11(&VAR5->VAR21[VAR8]) == VAR2)
        {
            FUN3(&VAR5->VAR21[VAR8], NULL);
        }
    }
    FUN12(VAR2, 0);
    FUN12(VAR2, 1);
    FUN13(VAR2);
    VAR17.VAR22++;
}