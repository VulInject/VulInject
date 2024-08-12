int FUN1(const char *VAR1, const char *VAR2, hwaddr VAR3, int32_t VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8 = -1;
    char VAR9[100];
    VAR6 = FUN2(sizeof(*VAR6));
    VAR6->VAR10 = FUN3(VAR1);
    VAR6->VAR11 = FUN4(VAR12, VAR6->VAR10);
    if (VAR6->VAR11 == NULL)
    {
        VAR6->VAR11 = FUN3(VAR1);
    }
    VAR8 = open(VAR6->VAR11, VAR13 | VAR14);
    if (VAR8 == -1)
    {
        fprintf(VAR15, "", VAR6->VAR11, strerror(VAR16));
        goto VAR17;
    }
    if (VAR2)
    {
        VAR6->VAR2 = FUN3(VAR2);
        VAR6->VAR18 = FUN3(VAR1);
    }
    VAR6->VAR3 = VAR3;
    VAR6->VAR19 = FUN5(VAR8, 0, VAR20);
    VAR6->VAR21 = FUN2(VAR6->VAR19);
    FUN5(VAR8, 0, VAR22);
    VAR7 = read(VAR8, VAR6->VAR21, VAR6->VAR19);
    if (VAR7 != VAR6->VAR19)
    {
        fprintf(VAR15, "", VAR6->VAR10, VAR7, VAR6->VAR19);
        goto VAR17;
    }
    close(VAR8);
    FUN6(VAR6);
    if (VAR6->VAR18 && VAR23)
    {
        const char *VAR24;
        char VAR25[56];
        VAR24 = strrchr(VAR6->VAR18, '');
        if (VAR24)
        {
            VAR24++;
        }
        else
        {
            VAR24 = VAR6->VAR18;
        }
        snprintf(VAR25, sizeof(VAR25), "", VAR6->VAR2, VAR24);
        FUN7(VAR23, VAR25, VAR6->VAR21, VAR6->VAR19);
        snprintf(VAR9, sizeof(VAR9), "", VAR25);
    }
    else
    {
        snprintf(VAR9, sizeof(VAR9), "" VAR26, VAR3);
    }
    FUN8(VAR4, NULL, VAR9);
    return 0;
VAR17:
    if (VAR8 != -1)
        close(VAR8);
    FUN9(VAR6->VAR21);
    FUN9(VAR6->VAR11);
    FUN9(VAR6->VAR10);
    FUN9(VAR6);
    return -1;
}