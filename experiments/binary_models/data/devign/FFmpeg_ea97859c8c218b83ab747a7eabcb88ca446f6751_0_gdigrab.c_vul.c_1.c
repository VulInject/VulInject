static void FUN1(VAR1 *VAR2, struct VAR3 *VAR3)
{
    CURSORINFO VAR4 = {0};
    if (!VAR3->VAR5)
    {
        FUN2(VAR6);
        VAR3->VAR5 = 1;
    }
    VAR4.VAR7 = sizeof(VAR4);
    if (FUN3(&VAR4))
    {
        HCURSOR VAR8 = FUN4(VAR4.VAR9);
        ICONINFO VAR10;
        POINT VAR11;
        RECT VAR12 = VAR3->VAR12;
        HWND VAR13 = VAR3->VAR13;
        VAR10.VAR14 = NULL;
        VAR10.VAR15 = NULL;
        if (VAR4.VAR16 != VAR17)
            return;
        if (!VAR8)
        {
            VAR8 = FUN4(FUN5(NULL, VAR18));
        }
        if (!FUN6(VAR8, &VAR10))
        {
            FUN7("");
            goto VAR19;
        }
        VAR11.VAR20 = VAR4.VAR21.VAR20 - VAR12.VAR22 - VAR10.VAR23;
        VAR11.VAR24 = VAR4.VAR21.VAR24 - VAR12.VAR25 - VAR10.VAR26;
        if (VAR13)
        {
            RECT VAR27;
            if (FUN8(VAR13, &VAR27))
            {
                VAR11.VAR20 -= VAR27.VAR22;
                VAR11.VAR24 -= VAR27.VAR25;
            }
            else
            {
                FUN7("");
                goto VAR19;
            }
        }
        FUN9(VAR2, VAR28, "", VAR4.VAR21.VAR20, VAR4.VAR21.VAR24, VAR11.VAR20, VAR11.VAR24);
        if (VAR11.VAR20 >= 0 && VAR11.VAR20 <= VAR12.VAR29 - VAR12.VAR22 && VAR11.VAR24 >= 0 && VAR11.VAR24 <= VAR12.VAR30 - VAR12.VAR25)
        {
            if (!FUN10(VAR3->VAR31, VAR11.VAR20, VAR11.VAR24, VAR8))
                FUN7("");
        }
    VAR19:
        if (VAR8)
            FUN11(VAR8);
    }
    else
    {
        FUN7("");
    }