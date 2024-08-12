static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    AVBPrint VAR6;
    const struct VAR7 *VAR7 = VAR2->VAR7[VAR2->VAR8];
    const struct VAR7 *VAR9 = VAR2->VAR8 ? VAR2->VAR7[VAR2->VAR8 - 1] : NULL;
    if (VAR2->VAR8 && VAR2->VAR10[VAR2->VAR8 - 1])
        FUN2("");
    if (VAR7->VAR11 & VAR12)
    {
        FUN2("");
        VAR4->VAR13++;
    }
    else
    {
        FUN3(&VAR6, 1, VAR14);
        FUN4(&VAR6, VAR7->VAR15, VAR2);
        FUN5();
        VAR4->VAR13++;
        if (VAR7->VAR11 & VAR16)
        {
            FUN2(""%VAR17\"", VAR6.VAR18);
        }
        else if (!(VAR9->VAR11 & VAR16))
        {
            FUN2(""%VAR17\"", VAR6.VAR18, VAR4->VAR19);
        }
        else
        {
            FUN2("", VAR4->VAR19);
            if (VAR9->VAR20 == VAR21)
            {
                if (!VAR4->VAR22)
                    FUN5();
                FUN2(""VAR23\""%VAR17\"", VAR7->VAR15, VAR4->VAR24);
            }
        }
        FUN6(&VAR6, NULL);
    }
}