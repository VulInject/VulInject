static inline void FUN1(VAR1 *VAR2, unsigned int VAR3, tb_page_addr_t VAR4)
{
    VAR5 *VAR6;
    bool VAR7;
    FUN2();
    VAR2->VAR4[VAR3] = VAR4;
    VAR6 = FUN3(VAR4 >> VAR8, 1);
    VAR2->VAR9[VAR3] = VAR6->VAR10;
    VAR7 = VAR6->VAR10 != NULL;
    VAR6->VAR10 = (VAR1 *)((VAR11)VAR2 | VAR3);
    FUN4(VAR6);
    if (VAR6->VAR12 & VAR13)
    {
        target_ulong VAR14;
        VAR5 *VAR15;
        int VAR16;
        VAR4 &= VAR17;
        VAR16 = 0;
        for (VAR14 = VAR4; VAR14 < VAR4 + VAR18; VAR14 += VAR19)
        {
            VAR15 = FUN5(VAR14 >> VAR8);
            if (!VAR15)
            {
                continue;
            }
            VAR16 |= VAR15->VAR12;
            VAR15->VAR12 &= ~VAR13;
        }
        FUN6(FUN7(VAR4), VAR18, (VAR16 & VAR20) & ~VAR13);
        FUN8("" VAR21 "", VAR4);
    }
    if (!VAR7)
    {
        FUN9(VAR4);
    }
}