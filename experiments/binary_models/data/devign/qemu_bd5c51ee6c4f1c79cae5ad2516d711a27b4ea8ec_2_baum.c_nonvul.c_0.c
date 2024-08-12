VAR1 *FUN1(void)
{
    VAR2 *VAR3;
    VAR1 *VAR4;
    VAR5 *VAR6;
    SDL_SysWMinfo VAR7;
    int VAR8;
    VAR3 = FUN2(sizeof(VAR2));
    VAR3->VAR4 = VAR4 = FUN2(sizeof(VAR1));
    VAR4->VAR9 = VAR3;
    VAR4->VAR10 = VAR11;
    VAR4->VAR12 = VAR13;
    VAR4->VAR14 = VAR15;
    VAR6 = FUN2(FUN3());
    VAR3->VAR16 = VAR6;
    VAR3->VAR17 = FUN4(VAR6, NULL, NULL);
    if (VAR3->VAR17 == -1)
    {
        FUN5("");
        goto VAR18;
    }
    VAR3->VAR19 = FUN6(VAR20, VAR21, VAR3);
    if (FUN7(VAR6, &VAR3->VAR22, &VAR3->VAR23) == -1)
    {
        FUN5("");
        goto VAR24;
    }
    memset(&VAR7, 0, sizeof(VAR7));
    FUN8(&VAR7.VAR25);
    if (FUN9(&VAR7))
        VAR8 = VAR7.VAR7.VAR26.VAR27;
    else
        VAR8 = VAR28;
    if (FUN10(VAR6, VAR8, NULL) == -1)
    {
        FUN5("");
        goto VAR24;
    }
    FUN11(VAR3->VAR17, VAR29, NULL, VAR3);
    return VAR4;
VAR24:
    FUN12(VAR3->VAR19);
    FUN13(VAR6);
VAR18:
    FUN14(VAR6);
    FUN14(VAR4);
    FUN14(VAR3);
    return NULL;
}