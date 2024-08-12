void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    if (VAR8)
    {
        if (VAR8->VAR10 & VAR11)
        {
            bool VAR12 = (VAR8->VAR10 & VAR13) != 0;
            bool VAR14 = FUN3(VAR6) == FUN4(VAR6);
            VAR2->VAR9 = NULL;
            if (FUN5(VAR6))
            {
                VAR6->VAR15.VAR16 = (1 << 9) | 0x22;
            }
            else
            {
                VAR6->VAR15.VAR16 = 0x2;
            }
            VAR6->VAR15.VAR17 = VAR8->VAR18;
            FUN6(VAR6, VAR19, FUN7(VAR14, 0, VAR12), FUN3(VAR6));
        }
    }
    else
    {
        uint64_t VAR20 = FUN8(VAR6) ? VAR6->VAR20 : VAR6->VAR21[15];
        bool VAR14 = (FUN3(VAR6) == FUN4(VAR6));
        if (FUN9(VAR2, VAR20, VAR22) || !FUN9(VAR2, VAR20, VAR11))
        {
            return;
        }
        if (FUN5(VAR6))
        {
            VAR6->VAR15.VAR16 = (1 << 9) | 0x22;
        }
        else
        {
            VAR6->VAR15.VAR16 = 0x2;
        }
        FUN6(VAR6, VAR23, FUN10(VAR14), FUN3(VAR6));
    }
}