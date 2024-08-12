static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    VAR7 = FUN2(VAR2, NULL);
    if (!VAR7)
        return FUN3(VAR10);
    VAR7->VAR11->VAR12 = VAR13;
    VAR7->VAR11->VAR14 = VAR2->VAR15->VAR16;
    VAR7->VAR11->VAR17 = VAR4->VAR17;
    VAR7->VAR11->VAR18 = VAR4->VAR18;
    FUN4(VAR2->VAR19, "", VAR20, &VAR9);
    if (VAR9 && VAR2->VAR15->VAR9)
    {
        int VAR21 = 0, VAR18 = 0;
        size_t VAR22 = strlen(VAR2->VAR15->VAR9);
        if (!FUN5(VAR2->VAR15->VAR9, VAR9, VAR22))
        {
            VAR8 *VAR23 = VAR9 + VAR22;
            VAR22 = strlen(VAR9);
            while (VAR23 < VAR9 + VAR22)
            {
                VAR23 = strstr(VAR23, "");
                if (!VAR23++)
                    break;
                if (!VAR21)
                    sscanf(VAR23, "", &VAR21);
                if (!VAR18)
                    sscanf(VAR23, "", &VAR18);
            }
            if (VAR21 <= 0)
            {
                FUN6(VAR2, VAR24, ""%VAR2\"", VAR9);
                return VAR25;
            }
            VAR7->VAR11->VAR17 = VAR21;
            if (VAR18 > 0)
                VAR7->VAR11->VAR18 = VAR18;
        }
    }
    VAR7->VAR11->VAR26 = FUN7(VAR7->VAR11->VAR14);
    FUN8(VAR7->VAR11->VAR26 > 0);
    VAR7->VAR11->VAR27 = VAR7->VAR11->VAR26 * VAR7->VAR11->VAR18 / 8;
    FUN9(VAR7, 64, 1, VAR7->VAR11->VAR17);
    return 0;