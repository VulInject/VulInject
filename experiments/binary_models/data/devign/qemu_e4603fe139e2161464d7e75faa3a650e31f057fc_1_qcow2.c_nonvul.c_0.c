static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10 = VAR8->VAR11, VAR12 = VAR10;
    uint64_t VAR13 = 0;
    const char *VAR14 = NULL, *VAR15 = NULL;
    bool VAR16 = VAR8->VAR17;
    const char *VAR18 = NULL;
    uint64_t VAR19 = VAR8->VAR19;
    bool VAR20;
    int VAR21;
    VAR22 *VAR23 = VAR4->VAR24->VAR23;
    while (VAR23 && VAR23->VAR25)
    {
        if (!FUN2(VAR4, VAR23->VAR25))
        {
            VAR23++;
            continue;
        }
        if (!strcmp(VAR23->VAR25, VAR26))
        {
            VAR18 = FUN3(VAR4, VAR26);
            if (!VAR18)
            {
            }
            else if (!strcmp(VAR18, ""))
            {
                VAR12 = 2;
            }
            else if (!strcmp(VAR18, ""))
            {
                VAR12 = 3;
            }
            else
            {
                fprintf(VAR27, "", VAR18);
                return -VAR28;
            }
        }
        else if (!strcmp(VAR23->VAR25, VAR29))
        {
            fprintf(VAR27, "");
            return -VAR30;
        }
        else if (!strcmp(VAR23->VAR25, VAR31))
        {
            VAR13 = FUN4(VAR4, VAR31, 0);
        }
        else if (!strcmp(VAR23->VAR25, VAR32))
        {
            VAR14 = FUN3(VAR4, VAR32);
        }
        else if (!strcmp(VAR23->VAR25, VAR33))
        {
            VAR15 = FUN3(VAR4, VAR33);
        }
        else if (!strcmp(VAR23->VAR25, VAR34))
        {
            VAR20 = FUN5(VAR4, VAR34, VAR8->VAR35);
            if (VAR20 != !!VAR8->VAR35)
            {
                fprintf(VAR27, ""
                                "");
                return -VAR30;
            }
        }
        else if (!strcmp(VAR23->VAR25, VAR36))
        {
            VAR19 = FUN4(VAR4, VAR36, VAR19);
            if (VAR19 != VAR8->VAR19)
            {
                fprintf(VAR27, ""
                                "");
                return -VAR30;
            }
        }
        else if (!strcmp(VAR23->VAR25, VAR37))
        {
            VAR16 = FUN5(VAR4, VAR37, VAR16);
        }
        else if (!strcmp(VAR23->VAR25, VAR38))
        {
            FUN6("");
            return -VAR30;
        }
        else
        {
            assert(false);
        }
        VAR23++;
    }
    if (VAR12 != VAR10)
    {
        if (VAR12 > VAR10)
        {
            VAR8->VAR11 = VAR12;
            VAR21 = FUN7(VAR2);
            if (VAR21 < 0)
            {
                VAR8->VAR11 = VAR10;
                return VAR21;
            }
        }
        else
        {
            VAR21 = FUN8(VAR2, VAR12, VAR6);
            if (VAR21 < 0)
            {
                return VAR21;
            }
        }
    }
    if (VAR14 || VAR15)
    {
        VAR21 = FUN9(VAR2, VAR14 ?: VAR8->VAR39, VAR15 ?: VAR8->VAR40);
        if (VAR21 < 0)
        {
            return VAR21;
        }
    }
    if (VAR8->VAR17 != VAR16)
    {
        if (VAR16)
        {
            if (VAR8->VAR11 < 3)
            {
                fprintf(VAR27, ""
                                "");
                return -VAR28;
            }
            VAR8->VAR41 |= VAR42;
            VAR21 = FUN7(VAR2);
            if (VAR21 < 0)
            {
                VAR8->VAR41 &= ~VAR42;
                return VAR21;
            }
            VAR8->VAR17 = true;
        }
        else
        {
            VAR21 = FUN10(VAR2);
            if (VAR21 < 0)
            {
                return VAR21;
            }
            VAR8->VAR41 &= ~VAR42;
            VAR21 = FUN7(VAR2);
            if (VAR21 < 0)
            {
                VAR8->VAR41 |= VAR42;
                return VAR21;
            }
            VAR8->VAR17 = false;
        }
    }
    if (VAR13)
    {
        VAR21 = FUN11(VAR2, VAR13);
        if (VAR21 < 0)
        {
            return VAR21;
        }
    }
    return 0;
}