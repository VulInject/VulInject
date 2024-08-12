static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    VAR6 = FUN2(VAR4->VAR8, VAR4->VAR9) * 8;
    if (VAR4->VAR10 < 0 || VAR4->VAR10 & VAR11)
    {
        VAR4->VAR10 = FUN3(VAR4->VAR10, 0);
        FUN4(&VAR4->VAR12, (-FUN5(&VAR4->VAR12)) & 31);
        while (VAR6 - FUN5(&VAR4->VAR12) >= 32)
        {
            uint32_t VAR13 = FUN6(&VAR4->VAR12, 32);
            int VAR14;
            switch (VAR13)
            {
            case VAR15:
            {
                int VAR16, VAR17;
                VAR4->VAR18 = VAR4->VAR19;
                VAR17 = FUN7(&VAR4->VAR12, 10);
                if ((VAR4->VAR8 != (FUN5(&VAR4->VAR12) >> 3) - 4 + VAR17) && (VAR4->VAR8 != (FUN5(&VAR4->VAR12) >> 3) - 4 + VAR17 + 1))
                    continue;
                FUN8(&VAR4->VAR12, 10);
                VAR4->VAR10 |= VAR11;
                if ((VAR16 = FUN9(&VAR4->VAR12, 4)) != 1)
                {
                    FUN10(VAR2, VAR20, "", VAR16);
                    continue;
                }
                FUN11(VAR4, VAR4->VAR18);
                for (VAR14 = 0; VAR14 < (VAR4->VAR21 / 8); VAR14++)
                    if ((VAR7 = FUN12(VAR4, VAR4->VAR18, VAR14)))
                    {
                        FUN10(VAR2, VAR20, "");
                        continue;
                    }
                VAR4->VAR22 = 1;
                break;
            }
            case VAR23:
                VAR4->VAR10 |= VAR24;
                break;
            case 0x1d95f262:
            {
                int VAR25 = FUN7(&VAR4->VAR12, 12) + 1;
                if (VAR4->VAR8 != (FUN5(&VAR4->VAR12) >> 3) - 4 + VAR25)
                    continue;
                FUN10(VAR2, VAR26, "", FUN5(&VAR4->VAR12));
                FUN8(&VAR4->VAR12, 12);
                FUN10(VAR2, VAR26, "", VAR25);
                FUN10(VAR2, VAR26, "", FUN9(&VAR4->VAR12, 4));
                VAR4->VAR10 |= VAR27;
                break;
            }
            }
            FUN4(&VAR4->VAR12, (-FUN5(&VAR4->VAR12)) & 31);
        }
    }
    else
    {
        FUN4(&VAR4->VAR12, VAR6 - FUN5(&VAR4->VAR12));
    }
    if (VAR4->VAR10 & VAR27)
        VAR4->VAR28 = VAR29;
    else if (VAR4->VAR10 & (VAR11 | VAR24))
        VAR4->VAR28 = VAR30;
    if (VAR4->VAR9 - VAR4->VAR8 > 32 && FUN6(&VAR4->VAR12, 32) == VAR31)
        FUN13(VAR4);
    return VAR7;
}