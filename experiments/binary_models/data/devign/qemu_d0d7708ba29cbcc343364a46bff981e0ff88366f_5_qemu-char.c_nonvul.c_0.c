static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR1 *VAR9;
    VAR10 *VAR11;
    int VAR12, VAR13;
    char VAR14[VAR15];
    VAR16 *VAR17 = FUN2(VAR4->VAR18.VAR19);
    VAR12 = FUN3(&VAR13, VAR14);
    if (VAR12 < 0)
    {
        FUN4(VAR8, VAR20, "");
        return NULL;
    }
    close(VAR13);
    FUN5(VAR12);
    VAR9 = FUN6(VAR17, VAR8);
    if (!VAR9)
    {
        close(VAR12);
        return NULL;
    }
    VAR9->VAR21 = FUN7("", VAR14);
    VAR6->VAR19 = FUN8(VAR14);
    VAR6->VAR22 = true;
    fprintf(VAR23, "", VAR14, VAR2);
    VAR11 = FUN9(VAR10, 1);
    VAR9->VAR24 = VAR11;
    VAR9->VAR25 = VAR26;
    VAR9->VAR27 = VAR28;
    VAR9->VAR29 = VAR30;
    VAR9->VAR31 = VAR32;
    VAR9->VAR33 = true;
    VAR11->VAR34 = FUN10(VAR12);
    VAR11->VAR35 = 0;
    return VAR9;
}