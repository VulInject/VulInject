static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, int VAR7)
{
    VAR5 *VAR8 = VAR6 ? *VAR6 : NULL;
    int VAR9 = 0;
    uint32_t VAR10;
    int VAR11 = 0;
    if (!VAR8)
    {
        if (VAR2->VAR12 <= 0)
            return FUN2(VAR2, VAR4);
        if (VAR2->VAR13 && VAR2->VAR13->VAR14)
        {
            VAR10 = VAR15;
            VAR11 = VAR2->VAR13->FUN3(VAR2->VAR16, VAR2->VAR17, VAR2->VAR18, VAR4, &VAR10, NULL, 0, 0, VAR9);
            FUN4(VAR2, VAR4, VAR10);
            return VAR11;
        }
    }
    if (VAR7 < 12)
        return -1;
    if ((VAR8[0] & 0xc0) != (VAR19 << 6))
        return -1;
    if (FUN5(VAR8[1]))
    {
        return FUN6(VAR2, VAR8, VAR7);
    }
    if (VAR2->VAR18)
    {
        int64_t VAR20 = FUN7();
        uint32_t VAR21 = FUN8(VAR20, VAR22, VAR2->VAR18->VAR23);
        VAR10 = FUN9(VAR8 + 4);
        FUN10(&VAR2->VAR24, VAR10, VAR21);
    }
    if ((VAR2->VAR25 == 0 && !VAR2->VAR26) || VAR2->VAR27 <= 1)
    {
        return FUN11(VAR2, VAR4, VAR8, VAR7);
    }
    else
    {
        uint16_t VAR25 = FUN12(VAR8 + 2);
        int16_t VAR28 = VAR25 - VAR2->VAR25;
        if (VAR28 < 0)
        {
            FUN13(VAR2->VAR18 ? VAR2->VAR18->VAR29 : NULL, VAR30, "");
            return -1;
        }
        else if (VAR28 <= 1)
        {
            VAR11 = FUN11(VAR2, VAR4, VAR8, VAR7);
            return VAR11;
        }
        else
        {
            FUN14(VAR2, VAR8, VAR7);
            *VAR6 = NULL;
            if (VAR2->VAR31 >= VAR2->VAR27)
            {
                FUN13(VAR2->VAR18 ? VAR2->VAR18->VAR29 : NULL, VAR30, "");
                return FUN2(VAR2, VAR4);
            }
            return -1;
        }
    }
}