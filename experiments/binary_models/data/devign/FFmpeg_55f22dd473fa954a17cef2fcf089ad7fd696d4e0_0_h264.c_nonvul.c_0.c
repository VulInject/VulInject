static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    VAR13 *VAR14 = VAR3;
    int VAR15;
    VAR12->VAR16 = VAR2->VAR16;
    VAR12->VAR17 = VAR2->VAR17;
    if (VAR12->VAR16 & VAR18)
    {
        const int VAR19 = FUN2(VAR9, VAR6, VAR7);
        assert((VAR7 > 0) || (VAR19 == VAR20));
        if (FUN3(&VAR12->VAR21, VAR19, &VAR6, &VAR7) < 0)
            return VAR7;
    }
    if (VAR7 == 0)
    {
        VAR22 *VAR23;
        int VAR24, VAR25;
        VAR23 = VAR9->VAR26[0];
        VAR25 = 0;
        for (VAR24 = 1; VAR9->VAR26[VAR24] && VAR9->VAR26[VAR24]->VAR27; VAR24++)
            if (VAR9->VAR26[VAR24]->VAR27 < VAR23->VAR27)
            {
                VAR23 = VAR9->VAR26[VAR24];
                VAR25 = VAR24;
            }
        for (VAR24 = VAR25; VAR9->VAR26[VAR24]; VAR24++)
            VAR9->VAR26[VAR24] = VAR9->VAR26[VAR24 + 1];
        if (VAR23)
        {
            *VAR4 = sizeof(VAR13);
            *VAR14 = *(VAR13 *)VAR23;
        }
        return 0;
    }
    if (VAR9->VAR28 && !VAR9->VAR29)
    {
        int VAR24, VAR30, VAR31;
        unsigned char *VAR32 = VAR2->VAR33;
        if (VAR2->VAR34 < 7)
        {
            FUN4(VAR2, VAR35, "");
            return -1;
        }
        if (*VAR32 != 1)
        {
            FUN4(VAR2, VAR35, "", *VAR32);
            return -1;
        }
        VAR9->VAR36 = 2;
        VAR30 = *(VAR32 + 5) & 0x1f;
        VAR32 += 6;
        for (VAR24 = 0; VAR24 < VAR30; VAR24++)
        {
            VAR31 = FUN5(VAR32) + 2;
            if (FUN6(VAR9, VAR32, VAR31) < 0)
            {
                FUN4(VAR2, VAR35, "", VAR24);
                return -1;
            }
            VAR32 += VAR31;
        }
        VAR30 = *(VAR32++);
        for (VAR24 = 0; VAR24 < VAR30; VAR24++)
        {
            VAR31 = FUN5(VAR32) + 2;
            if (FUN6(VAR9, VAR32, VAR31) != VAR31)
            {
                FUN4(VAR2, VAR35, "", VAR24);
                return -1;
            }
            VAR32 += VAR31;
        }
        VAR9->VAR36 = ((*(((char *)(VAR2->VAR33)) + 4)) & 0x03) + 1;
        VAR9->VAR29 = 1;
    }
    if (VAR2->VAR37 == 0 && !VAR9->VAR28 && VAR12->VAR2->VAR34)
    {
        if (FUN6(VAR9, VAR12->VAR2->VAR33, VAR12->VAR2->VAR34) < 0)
            return -1;
    }
    VAR15 = FUN6(VAR9, VAR6, VAR7);
    if (VAR15 < 0)
        return -1;
    if (!(VAR12->VAR17 & VAR38) && !VAR12->VAR39)
    {
        if (VAR2->VAR40 >= VAR41 || VAR12->VAR42)
            return 0;
        FUN4(VAR2, VAR35, "");
        return -1;
    }
    if (!(VAR12->VAR17 & VAR38) || (VAR12->VAR43 >= VAR12->VAR44 && VAR12->VAR44))
    {
        VAR22 *VAR23 = VAR12->VAR39;
        VAR22 *VAR45 = VAR12->VAR39;
        int VAR24, VAR46, VAR47, VAR48, VAR25;
        VAR12->VAR43 = 0;
        VAR12->VAR39->VAR49 = VAR50;
        VAR12->VAR39->VAR51 = VAR12->VAR51;
        if (!VAR12->VAR52)
        {
            FUN7(VAR9, VAR9->VAR53, VAR9->VAR54);
            VAR9->VAR55 = VAR9->VAR56;
            VAR9->VAR57 = VAR9->VAR58;
        }
        VAR9->VAR59 = VAR9->VAR60;
        VAR9->VAR61 = VAR9->VAR62;
        if (!VAR63)
            FUN8(VAR12);
        FUN9(VAR12);
        if (VAR12->VAR64)
        {
            *VAR4 = 0;
        }
        else
        {
            VAR45->VAR65 = VAR66;
            VAR45->VAR67 = VAR45->VAR68[0] < VAR45->VAR68[1];
            if (VAR9->VAR69.VAR70 && VAR12->VAR2->VAR71 < VAR9->VAR69.VAR72)
            {
                VAR12->VAR2->VAR71 = VAR9->VAR69.VAR72;
                VAR12->VAR73 = 0;
            }
            if (VAR12->VAR2->VAR74 >= VAR75 && !VAR9->VAR69.VAR70)
            {
                VAR12->VAR2->VAR71 = VAR76;
                VAR12->VAR73 = 0;
            }
            VAR46 = 0;
            while (VAR9->VAR26[VAR46])
                VAR46++;
            assert(VAR46 <= VAR76);
            VAR9->VAR26[VAR46++] = VAR45;
            if (VAR45->VAR77 == 0)
                VAR45->VAR77 = VAR78;
            VAR47 = 0;
            for (VAR24 = 0; VAR9->VAR26[VAR24]; VAR24++)
                if (VAR9->VAR26[VAR24]->VAR27 == 0)
                    VAR47 = 1;
            VAR23 = VAR9->VAR26[0];
            VAR25 = 0;
            for (VAR24 = 1; VAR9->VAR26[VAR24] && VAR9->VAR26[VAR24]->VAR27; VAR24++)
                if (VAR9->VAR26[VAR24]->VAR27 < VAR23->VAR27)
                {
                    VAR23 = VAR9->VAR26[VAR24];
                    VAR25 = VAR24;
                }
            VAR48 = !VAR47 && VAR23->VAR27 < VAR9->VAR79;
            if (VAR9->VAR69.VAR70 && VAR12->VAR2->VAR71 >= VAR9->VAR69.VAR72)
            {
            }
            else if ((VAR48 && VAR46 - 1 == VAR12->VAR2->VAR71 && VAR12->VAR2->VAR71 < VAR76) || (VAR12->VAR73 && ((!VAR47 && VAR23->VAR27 > VAR9->VAR79 + 2) || VAR45->VAR51 == VAR80)))
            {
                VAR12->VAR73 = 0;
                VAR12->VAR2->VAR71++;
            }
            if (VAR48 || VAR46 > VAR12->VAR2->VAR71)
            {
                VAR23->VAR77 &= ~VAR78;
                for (VAR24 = VAR25; VAR9->VAR26[VAR24]; VAR24++)
                    VAR9->VAR26[VAR24] = VAR9->VAR26[VAR24 + 1];
            }
            if (!VAR48 && VAR46 > VAR12->VAR2->VAR71)
            {
                *VAR4 = sizeof(VAR13);
                VAR9->VAR79 = VAR23->VAR27;
                *VAR14 = *(VAR13 *)VAR23;
            }
            else
            {
                FUN4(VAR2, VAR81, "");
            }
        }
    }
    assert(VAR14->VAR3[0] || !*VAR4);
    FUN10(VAR12, VAR14);
    VAR2->VAR37 = VAR12->VAR82 - 1;
    return FUN11(VAR12, VAR15, VAR7);
}