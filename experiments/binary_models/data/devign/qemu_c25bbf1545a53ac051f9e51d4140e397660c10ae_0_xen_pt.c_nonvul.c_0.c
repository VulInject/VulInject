static void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR8, VAR2);
    int VAR9 = 0;
    VAR10 *VAR11 = NULL;
    int VAR12 = 0;
    uint32_t VAR13 = 0, VAR14;
    int VAR15 = 0;
    VAR16 *VAR17 = NULL;
    uint32_t VAR18 = VAR3;
    VAR19 *VAR20 = NULL;
    bool VAR21 = false;
    if (FUN3(VAR2, VAR3, VAR5))
    {
        return;
    }
    FUN4(VAR2, VAR3, VAR4, VAR5);
    VAR9 = FUN5(VAR3);
    if ((VAR9 >= 0) && (VAR4 > 0 && VAR4 < VAR22) && (VAR7->VAR23[VAR9].VAR24 == VAR25))
    {
        FUN6(VAR2, ""
                       "",
                    VAR3, VAR5);
    }
    VAR11 = FUN7(VAR7, VAR3);
    if (VAR11)
    {
        if (VAR11->VAR26->VAR27 == VAR28)
        {
            FUN6(VAR2, ""
                           "",
                        VAR3, VAR5);
            return;
        }
    }
    VAR12 = FUN8(&VAR7->VAR29, VAR3, (VAR30 *)&VAR13, VAR5);
    if (VAR12 < 0)
    {
        FUN9(VAR2, "", VAR12);
        memset(&VAR13, 0xff, VAR5);
        VAR14 = 0;
    }
    else
    {
        VAR14 = 0xFFFFFFFF >> ((4 - VAR5) << 3);
    }
    if (VAR11 == NULL)
    {
        if (!VAR7->VAR31)
        {
            VAR14 = 0;
            VAR21 = true;
        }
        goto VAR32;
    }
    FUN10();
    FUN11(VAR2, VAR3, VAR4, VAR5);
    VAR13 <<= (VAR3 & 3) << 3;
    VAR4 <<= (VAR3 & 3) << 3;
    VAR15 = VAR5;
    while (VAR15 > 0)
    {
        VAR17 = FUN12(VAR11, VAR18);
        if (VAR17)
        {
            VAR20 = VAR17->VAR20;
            uint32_t VAR33 = VAR11->VAR34 + VAR20->VAR35;
            uint32_t VAR36 = 0xFFFFFFFF >> ((4 - VAR15) << 3);
            VAR30 *VAR37 = NULL;
            uint32_t VAR38 = VAR20->VAR39 | VAR20->VAR40;
            VAR36 <<= (VAR18 - VAR33) << 3;
            VAR37 = (VAR30 *)&VAR4 + (VAR33 & 3);
            if (!VAR7->VAR31)
            {
                VAR38 |= VAR20->VAR41;
            }
            if (VAR38 == (0xFFFFFFFF >> ((4 - VAR20->VAR42) << 3)))
            {
                VAR14 &= ~((VAR38 >> ((VAR18 - VAR33) << 3)) << ((VAR5 - VAR15) << 3));
            }
            switch (VAR20->VAR42)
            {
            case 1:
                if (VAR20->VAR43.VAR44.write)
                {
                    VAR12 = VAR20->VAR43.VAR44.write(VAR7, VAR17, VAR37, VAR13 >> ((VAR33 & 3) << 3), VAR36);
                }
                break;
            case 2:
                if (VAR20->VAR43.VAR45.write)
                {
                    VAR12 = VAR20->VAR43.VAR45.write(VAR7, VAR17, (VAR46 *)VAR37, (VAR13 >> ((VAR33 & 3) << 3)), VAR36);
                }
                break;
            case 4:
                if (VAR20->VAR43.VAR47.write)
                {
                    VAR12 = VAR20->VAR43.VAR47.write(VAR7, VAR17, (VAR48 *)VAR37, (VAR13 >> ((VAR33 & 3) << 3)), VAR36);
                }
                break;
            }
            if (VAR12 < 0)
            {
                FUN13(""
                                         "",
                                         VAR49, VAR12);
                return;
            }
            VAR15 -= VAR20->VAR42;
            if (VAR15 > 0)
            {
                VAR18 = VAR33 + VAR20->VAR42;
            }
        }
        else
        {
            if (!VAR7->VAR31)
            {
                VAR14 &= ~(0xff << ((VAR5 - VAR15) << 3));
                if (VAR9 < 0)
                {
                    VAR21 = true;
                }
            }
            VAR15--;
            VAR18++;
        }
    }
    VAR4 >>= (VAR3 & 3) << 3;
    FUN14();
VAR32:
    if (VAR21 && !VAR7->VAR50)
    {
        VAR7->VAR50 = true;
        FUN15(VAR2, "", VAR3, VAR5 * 2, VAR14);
        FUN15(VAR2, "");
        FUN15(VAR2, "");
    }
    for (VAR9 = 0; VAR14; VAR9 += VAR5)
    {
        while (!(VAR14 & 0xff))
        {
            VAR9++;
            VAR14 >>= 8;
        }
        VAR5 = 0;
        do
        {
            VAR5++;
            VAR14 >>= 8;
        } while (VAR14 & 0xff);
        VAR12 = FUN16(&VAR7->VAR29, VAR3 + VAR9, (VAR30 *)&VAR4 + VAR9, VAR5);
        if (VAR12 < 0)
        {
            FUN9(VAR2, "", VAR12);
        }
    }
}