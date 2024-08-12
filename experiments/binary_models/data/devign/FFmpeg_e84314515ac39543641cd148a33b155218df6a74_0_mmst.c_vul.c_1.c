static VAR1 FUN1(VAR2 *VAR3)
{
    int VAR4;
    MMSSCPacketType VAR5 = -1;
    VAR6 *VAR7 = &VAR3->VAR7;
    for (;;)
    {
        VAR4 = FUN2(VAR7->VAR8, VAR7->VAR9, 8);
        if (VAR4 != 8)
        {
            if (VAR4 < 0)
            {
                FUN3(NULL, VAR10, "", VAR4, strerror(VAR4));
                VAR5 = VAR11;
            }
            else
            {
                FUN3(NULL, VAR10, "");
                VAR5 = VAR12;
            }
            return VAR5;
        }
        if (FUN4(VAR7->VAR9 + 4) == 0xb00bface)
        {
            int VAR13, VAR14;
            VAR3->VAR15 = VAR7->VAR9[3];
            VAR4 = FUN2(VAR7->VAR8, VAR7->VAR9 + 8, 4);
            if (VAR4 != 4)
            {
                FUN3(NULL, VAR10, "", VAR4, VAR4 < 0 ? strerror(VAR4) : "");
                return VAR4 < 0 ? VAR4 : VAR16;
            }
            VAR13 = FUN4(VAR7->VAR9 + 8) + 4;
            FUN5(NULL, "", VAR13);
            if (VAR13 < 0 || VAR13 > sizeof(VAR7->VAR9) - 12)
            {
                FUN3(NULL, VAR10, "", VAR13, sizeof(VAR7->VAR9) - 12);
                return VAR17;
            }
            VAR4 = FUN2(VAR7->VAR8, VAR7->VAR9 + 12, VAR13);
            if (VAR4 != VAR13)
            {
                FUN3(NULL, VAR10, "", VAR13, VAR4, VAR4 < 0 ? strerror(VAR4) : "");
                return VAR4 < 0 ? VAR4 : VAR16;
            }
            VAR5 = FUN6(VAR7->VAR9 + 36);
            VAR14 = FUN4(VAR7->VAR9 + 40);
            if (VAR14)
            {
                FUN3(NULL, VAR10, "", VAR5, VAR14);
                return VAR18;
            }
        }
        else
        {
            int VAR13;
            int VAR19;
            int VAR20;
            VAR20 = FUN6(VAR7->VAR9 + 6);
            VAR13 = (VAR20 - 8) & 0xffff;
            VAR3->VAR21 = FUN4(VAR7->VAR9);
            VAR19 = VAR7->VAR9[4];
            VAR3->VAR15 = VAR7->VAR9[5];
            if (VAR13 < 0 || VAR13 > sizeof(VAR7->VAR9) - 8)
            {
                FUN3(NULL, VAR10, "", VAR13, sizeof(VAR7->VAR9));
                return VAR17;
            }
            VAR7->VAR22 = VAR13;
            VAR7->VAR23 = VAR7->VAR9;
            VAR4 = FUN2(VAR7->VAR8, VAR7->VAR9, VAR13);
            if (VAR4 != VAR13)
            {
                FUN3(NULL, VAR10, "", VAR13, VAR4, VAR4 < 0 ? strerror(VAR4) : "");
                return VAR4 < 0 ? VAR4 : VAR16;
            }
            if (VAR19 == VAR3->VAR24)
            {
                VAR5 = VAR25;
                if (!VAR7->VAR26)
                {
                    void *VAR27 = FUN7(VAR7->VAR28, VAR7->VAR29 + VAR7->VAR22);
                    if (!VAR27)
                    {
                        FUN8(&VAR7->VAR28);
                        return FUN9(VAR30);
                    }
                    VAR7->VAR28 = VAR27;
                    memcpy(VAR7->VAR28 + VAR7->VAR29, VAR7->VAR23, VAR7->VAR22);
                    VAR7->VAR29 += VAR7->VAR22;
                }
                if (VAR3->VAR15 == 0x04)
                    continue;
            }
            else if (VAR19 == VAR3->VAR31)
            {
                VAR5 = VAR32;
            }
            else
            {
                FUN5(NULL, "", VAR19);
                continue;
            }
        }
        if (VAR5 == VAR33)
        {
            FUN10(VAR3);
            continue;
        }
        else if (VAR5 == VAR34)
        {
            FUN11(VAR3);
        }
        else if (VAR5 == VAR32)
        {
            FUN12(VAR7);
        }
        return VAR5;
    }
}