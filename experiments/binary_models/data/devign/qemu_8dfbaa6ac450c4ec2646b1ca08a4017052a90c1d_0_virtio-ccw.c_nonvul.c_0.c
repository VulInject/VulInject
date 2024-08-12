static void FUN1(VAR1 *VAR2, uint16_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = VAR5->VAR7;
    uint64_t VAR8;
    if (VAR3 >= 128)
    {
        return;
    }
    if (VAR3 < VAR9)
    {
        if (!VAR5->VAR8)
        {
            return;
        }
        if (VAR7->VAR10)
        {
            uint64_t VAR11 = VAR5->VAR12.VAR13.VAR14;
            FUN3(VAR7, VAR5->VAR8->VAR15 + (VAR11 + VAR3) / 8, 0x80 >> ((VAR11 + VAR3) % 8));
            if (!FUN3(VAR7, VAR5->VAR16->VAR15, 0x01))
            {
                FUN4(VAR5->VAR17);
            }
        }
        else
        {
            VAR8 = FUN5(&VAR18, VAR5->VAR8->VAR15, VAR19, NULL);
            VAR8 |= 1ULL << VAR3;
            FUN6(&VAR18, VAR5->VAR8->VAR15, VAR8, VAR19, NULL);
            FUN7(VAR7);
        }
    }
    else
    {
        if (!VAR5->VAR20)
        {
            return;
        }
        VAR3 = 0;
        VAR8 = FUN5(&VAR18, VAR5->VAR20->VAR15, VAR19, NULL);
        VAR8 |= 1ULL << VAR3;
        FUN6(&VAR18, VAR5->VAR20->VAR15, VAR8, VAR19, NULL);
        FUN7(VAR7);
    }
}