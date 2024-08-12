int FUN1(VAR1 *VAR2, uint8_t VAR3, int recv)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    if (VAR3 == VAR10)
    {
        VAR2->VAR11 = true;
    }
    if (FUN2(&VAR2->VAR12))
    {
        FUN3(VAR5, &VAR2->VAR13.VAR14, VAR15)
        {
            VAR16 *VAR17 = VAR5->VAR18;
            VAR19 *VAR20 = FUN4(VAR17);
            if ((VAR20->VAR3 == VAR3) || (VAR2->VAR11))
            {
                VAR9 = FUN5(sizeof(struct VAR8));
                VAR9->VAR21 = VAR20;
                FUN6(&VAR2->VAR12, VAR9, VAR22);
                if (!VAR2->VAR11)
                {
                    break;
                }
            }
        }
    }
    if (FUN2(&VAR2->VAR12))
    {
        return 1;
    }
    FUN7(VAR9, &VAR2->VAR12, VAR22)
    {
        VAR7 = FUN8(VAR9->VAR21);
        if (VAR7->VAR23)
        {
            VAR7->FUN9(VAR9->VAR21, recv ? VAR24 : VAR25);
        }
    }
    return 0;
}