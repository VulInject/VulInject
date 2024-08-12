static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    VAR16 *VAR17 = VAR3;
    int VAR18;
    VAR15->VAR19 = VAR2->VAR19;
    VAR15->VAR20 = VAR2->VAR20;
    if (VAR9 == 0)
    {
        VAR21 *VAR22;
        int VAR23, VAR24;
        VAR22 = VAR12->VAR25[0];
        VAR24 = 0;
        for (VAR23 = 1; VAR12->VAR25[VAR23] && (VAR12->VAR25[VAR23]->VAR26 && !VAR12->VAR25[VAR23]->VAR27); VAR23++)
            if (VAR12->VAR25[VAR23]->VAR26 < VAR22->VAR26)
            {
                VAR22 = VAR12->VAR25[VAR23];
                VAR24 = VAR23;
            }
        for (VAR23 = VAR24; VAR12->VAR25[VAR23]; VAR23++)
            VAR12->VAR25[VAR23] = VAR12->VAR25[VAR23 + 1];
        if (VAR22)
        {
            *VAR4 = sizeof(VAR16);
            *VAR17 = *(VAR16 *)VAR22;
        }
        return 0;
    }
    if (VAR12->VAR28 && !VAR12->VAR29)
    {
        int VAR23, VAR30, VAR31;
        unsigned char *VAR32 = VAR2->VAR33;
        if (VAR2->VAR34 < 7)
        {
            FUN2(VAR2, VAR35, "");
            return -1;
        }
        if (*VAR32 != 1)
        {
            FUN2(VAR2, VAR35, "", *VAR32);
            return -1;
        }
        VAR12->VAR36 = 2;
        VAR30 = *(VAR32 + 5) & 0x1f;
        VAR32 += 6;
        for (VAR23 = 0; VAR23 < VAR30; VAR23++)
        {
            VAR31 = FUN3(VAR32) + 2;
            if (FUN4(VAR12, VAR32, VAR31) < 0)
            {
                FUN2(VAR2, VAR35, "", VAR23);
                return -1;
            }
            VAR32 += VAR31;
        }
        VAR30 = *(VAR32++);
        for (VAR23 = 0; VAR23 < VAR30; VAR23++)
        {
            VAR31 = FUN3(VAR32) + 2;
            if (FUN4(VAR12, VAR32, VAR31) != VAR31)
            {
                FUN2(VAR2, VAR35, "", VAR23);
                return -1;
            }
            VAR32 += VAR31;
        }
        VAR12->VAR36 = ((*(((char *)(VAR2->VAR33)) + 4)) & 0x03) + 1;
        VAR12->VAR29 = 1;
    }
    if (!VAR12->VAR29 && !VAR12->VAR28 && VAR15->VAR2->VAR34)
    {
        if (FUN4(VAR12, VAR15->VAR2->VAR33, VAR15->VAR2->VAR34) < 0)
            return -1;
        VAR12->VAR29 = 1;
    }
    VAR18 = FUN4(VAR12, VAR8, VAR9);
    if (VAR18 < 0)
        return -1;
    if (!(VAR15->VAR20 & VAR37) && !VAR15->VAR38)
    {
        if (VAR2->VAR39 >= VAR40 || VAR15->VAR41)
            return 0;
        FUN2(VAR2, VAR35, "");
        return -1;
    }
    if (!(VAR15->VAR20 & VAR37) || (VAR15->VAR42 >= VAR15->VAR43 && VAR15->VAR43))
    {
        VAR21 *VAR22 = VAR15->VAR38;
        VAR21 *VAR44 = VAR15->VAR38;
        int VAR23, VAR45, VAR46, VAR47, VAR24;
        FUN5(VAR12);
        if (VAR44->VAR48[0] == VAR49 || VAR44->VAR48[1] == VAR49)
        {
            *VAR4 = 0;
        }
        else
        {
            VAR44->VAR50 = 0;
            if (VAR12->VAR51)
                VAR44->VAR52 = (VAR12->VAR51 & (1 << 1)) != 0;
            else
                VAR44->VAR52 = VAR53;
            if (VAR12->VAR54.VAR55)
            {
                switch (VAR12->VAR56)
                {
                case VAR57:
                case VAR58:
                    VAR44->VAR50 = 1;
                    break;
                case VAR59:
                    VAR44->VAR52 = 0;
                    VAR44->VAR50 = 2;
                    break;
                case VAR60:
                    VAR44->VAR52 = 0;
                    VAR44->VAR50 = 4;
                    break;
                }
            }
            else
            {
                VAR44->VAR52 = VAR53;
            }
            if (VAR44->VAR48[0] != VAR44->VAR48[1])
            {
                VAR44->VAR61 = VAR44->VAR48[0] < VAR44->VAR48[1];
            }
            else
            {
                if (VAR44->VAR52 || VAR12->VAR54.VAR55)
                {
                    if (VAR12->VAR56 == VAR62 || VAR12->VAR56 == VAR57)
                        VAR44->VAR61 = 1;
                    else
                        VAR44->VAR61 = 0;
                }
                else
                {
                    VAR44->VAR61 = 0;
                }
            }
            if (VAR12->VAR54.VAR63 && VAR15->VAR2->VAR64 < VAR12->VAR54.VAR65)
            {
                VAR15->VAR2->VAR64 = VAR12->VAR54.VAR65;
                VAR15->VAR66 = 0;
            }
            if (VAR15->VAR2->VAR67 >= VAR68 && !VAR12->VAR54.VAR63)
            {
                VAR15->VAR2->VAR64 = VAR69;
                VAR15->VAR66 = 0;
            }
            VAR45 = 0;
            while (VAR12->VAR25[VAR45])
                VAR45++;
            assert(VAR45 <= VAR69);
            VAR12->VAR25[VAR45++] = VAR44;
            if (VAR44->VAR70 == 0)
                VAR44->VAR70 = VAR71;
            VAR22 = VAR12->VAR25[0];
            VAR24 = 0;
            for (VAR23 = 1; VAR12->VAR25[VAR23] && (VAR12->VAR25[VAR23]->VAR26 && !VAR12->VAR25[VAR23]->VAR27); VAR23++)
                if (VAR12->VAR25[VAR23]->VAR26 < VAR22->VAR26)
                {
                    VAR22 = VAR12->VAR25[VAR23];
                    VAR24 = VAR23;
                }
            VAR46 = !VAR12->VAR25[0]->VAR26 || !!VAR12->VAR25[VAR23] || VAR12->VAR25[0]->VAR27;
            VAR47 = !VAR46 && VAR22->VAR26 < VAR12->VAR72;
            if (VAR12->VAR54.VAR63 && VAR15->VAR2->VAR64 >= VAR12->VAR54.VAR65)
            {
            }
            else if ((VAR47 && VAR45 - 1 == VAR15->VAR2->VAR64 && VAR15->VAR2->VAR64 < VAR69) || (VAR15->VAR66 && ((!VAR46 && VAR22->VAR26 > VAR12->VAR72 + 2) || VAR44->VAR73 == VAR74)))
            {
                VAR15->VAR66 = 0;
                VAR15->VAR2->VAR64++;
            }
            if (VAR47 || VAR45 > VAR15->VAR2->VAR64)
            {
                VAR22->VAR70 &= ~VAR71;
                for (VAR23 = VAR24; VAR12->VAR25[VAR23]; VAR23++)
                    VAR12->VAR25[VAR23] = VAR12->VAR25[VAR23 + 1];
            }
            if (!VAR47 && VAR45 > VAR15->VAR2->VAR64)
            {
                *VAR4 = sizeof(VAR16);
                VAR12->VAR72 = VAR22->VAR26;
                *VAR17 = *(VAR16 *)VAR22;
            }
            else
            {
                FUN2(VAR2, VAR75, "");
            }
        }
    }
    assert(VAR17->VAR3[0] || !*VAR4);
    FUN6(VAR15, VAR17);
    return FUN7(VAR15, VAR18, VAR9);
}