static int FUN1(void)
{
    SDL_SysWMinfo VAR1;
    XkbDescPtr VAR2;
    int VAR3 = 0;
    const char *VAR4;
    FUN2(&VAR1.VAR5);
    if (!FUN3(&VAR1))
        return 0;
    VAR2 = FUN4(VAR1.VAR1.VAR6.VAR7, VAR8, VAR9);
    if (VAR2 == NULL || VAR2->VAR10 == NULL)
        return 0;
    VAR4 = FUN5(VAR1.VAR1.VAR6.VAR7, VAR2->VAR10->VAR4);
    if (VAR4 == NULL)
        fprintf(VAR11, "");
    else if (FUN6(VAR4, "", NULL))
        VAR3 = 1;
    else if (!FUN6(VAR4, "", NULL))
        fprintf(VAR11, "", VAR4);
    FUN7(VAR2, VAR8, VAR12);
    return VAR3;
}