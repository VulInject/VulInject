int FUN1(VAR1 *VAR2, uint8_t VAR3, int recv)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    if (VAR3 == 0x00)
    {
        VAR2->VAR10 = true;
    }
    FUN2(VAR5, &VAR2->VAR11.VAR12, VAR13)
    {
        VAR14 *VAR15 = VAR5->VAR16;
        VAR17 *VAR18 = FUN3(VAR15);
        if ((VAR18->VAR3 == VAR3) || (VAR2->VAR10))
        {
            VAR9 = FUN4(sizeof(struct VAR8));
            VAR9->VAR19 = VAR18;
            FUN5(&VAR2->VAR20, VAR9, VAR21);
            if (!VAR2->VAR10)
            {
                break;
            }
        }
    }
    if (FUN6(&VAR2->VAR20))
    {
        return 1;
    }
    FUN7(VAR9, &VAR2->VAR20, VAR21)
    {
        VAR7 = FUN8(VAR9->VAR19);
        if (VAR7->VAR22)
        {
            VAR7->FUN9(VAR9->VAR19, recv ? VAR23 : VAR24);
        }
    }
    return 0;
}