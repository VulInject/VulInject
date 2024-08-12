static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    if (VAR5)
    {
        VAR3 = VAR5;
        VAR4 = VAR6;
    }
    else
    {
        VAR3 = VAR7;
        VAR4 = VAR8;
    }
    if (!VAR9)
    {
        int VAR10 = VAR11 | VAR12;
        if (!VAR13)
            VAR13 = VAR14;
        if (VAR15)
            VAR10 |= VAR16;
        VAR9 = FUN2(VAR13, VAR17, VAR17, VAR3, VAR4, VAR10);
        FUN3(VAR18, "");
        if (VAR9)
        {
            SDL_RendererInfo VAR19;
            VAR20 = FUN4(VAR9, -1, VAR21 | VAR22);
            if (!VAR20)
            {
                FUN5(NULL, VAR23, "", FUN6());
                VAR20 = FUN4(VAR9, -1, 0);
            }
            if (VAR20)
            {
                if (!FUN7(VAR20, &VAR19))
                    FUN5(NULL, VAR24, "", VAR19.VAR25);
            }
        }
    }
    else
    {
        FUN8(VAR9, VAR3, VAR4);
    }
    if (!VAR9 || !VAR20)
    {
        FUN5(NULL, VAR26, "");
        FUN9(VAR2);
    }
    VAR2->VAR27 = VAR3;
    VAR2->VAR28 = VAR4;
    return 0;