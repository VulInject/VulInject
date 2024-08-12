static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    if (VAR4->VAR7->VAR8 == VAR9)
    {
        VAR10 *VAR11 = &VAR4->VAR12;
        FUN2(VAR2, VAR13, "", VAR4->VAR14);
        --VAR4->VAR15;
        if (VAR6)
        {
            VAR11->VAR16 = FUN3(VAR11->VAR16, VAR11->VAR17 + VAR6->VAR18 + VAR19);
            memcpy(VAR11->VAR16 + VAR11->VAR17, VAR6->VAR20, VAR6->VAR18);
            VAR11->VAR17 += VAR6->VAR18;
            memset(VAR11->VAR16 + VAR11->VAR17, 0, VAR19);
        }
        else
        {
            VAR4->VAR15 = 0;
        }
        if (!VAR4->VAR15 || FUN4(VAR11->VAR17) != FUN4(VAR11->VAR17 - VAR6->VAR18))
        {
            FUN5(VAR2, VAR4, VAR11, VAR4->VAR15 > 0 ? VAR21 / 4 : 0);
            if (VAR4->VAR7->VAR8 != VAR9)
            {
                VAR11->VAR17 = 0;
                FUN6(&VAR11->VAR16);
                FUN2(VAR2, VAR13, "", VAR4->VAR14);
            }
        }
    }
}