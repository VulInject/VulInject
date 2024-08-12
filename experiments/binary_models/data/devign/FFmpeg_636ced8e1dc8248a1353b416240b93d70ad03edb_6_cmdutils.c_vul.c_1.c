static int FUN1(void *VAR1, const VAR2 *VAR3, const char *VAR4, const char *VAR5)
{
    void *VAR6 = VAR3->VAR7 & (VAR8 | VAR9) ? (VAR10 *)VAR1 + VAR3->VAR11.VAR12 : VAR3->VAR11.VAR13;
    int *VAR14;
    if (VAR3->VAR7 & VAR9)
    {
        VAR15 **VAR16 = VAR6;
        char *VAR17 = strchr(VAR4, '');
        VAR14 = (int *)(VAR16 + 1);
        *VAR16 = FUN2(*VAR16, sizeof(**VAR16), VAR14, *VAR14 + 1);
        (*VAR16)[*VAR14 - 1].VAR18 = FUN3(VAR17 ? VAR17 + 1 : "");
        VAR6 = &(*VAR16)[*VAR14 - 1].VAR11;
    }
    if (VAR3->VAR7 & VAR19)
    {
        char *VAR20;
        VAR20 = FUN3(VAR5);
        FUN4(VAR6);
        *(char **)VAR6 = VAR20;
    }
    else if (VAR3->VAR7 & VAR21 || VAR3->VAR7 & VAR22)
    {
        *(int *)VAR6 = FUN5(VAR4, VAR5, VAR23, VAR24, VAR25);
    }
    else if (VAR3->VAR7 & VAR23)
    {
        *(VAR26 *)VAR6 = FUN5(VAR4, VAR5, VAR23, VAR27, VAR28);
    }
    else if (VAR3->VAR7 & VAR29)
    {
        *(VAR26 *)VAR6 = FUN6(VAR4, VAR5, 1);
    }
    else if (VAR3->VAR7 & VAR30)
    {
        *(float *)VAR6 = FUN5(VAR4, VAR5, VAR30, -VAR31, VAR31);
    }
    else if (VAR3->VAR7 & VAR32)
    {
        *(double *)VAR6 = FUN5(VAR4, VAR5, VAR32, -VAR31, VAR31);
    }
    else if (VAR3->VAR11.VAR33)
    {
        int VAR34 = VAR3->VAR11.FUN7(VAR1, VAR4, VAR5);
        if (VAR34 < 0)
        {
            FUN8(NULL, VAR35, "", VAR5, VAR4);
            return VAR34;
        }
    }
    if (VAR3->VAR7 & VAR36)
        FUN9(0);
    return 0;
}