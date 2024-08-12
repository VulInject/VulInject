int FUN1(const char *VAR1, const char *VAR2, const char *VAR3)
{
    int VAR4 = VAR5;
    SC_HANDLE VAR6;
    SC_HANDLE VAR7;
    TCHAR VAR8[VAR9];
    VAR10 *VAR11;
    SERVICE_DESCRIPTION VAR12 = {(char *)VAR13};
    if (FUN2(NULL, VAR8, VAR9) == 0)
    {
        FUN3("");
        return VAR5;
    }
    VAR11 = FUN4(VAR8);
    FUN5(VAR11, "");
    if (VAR1)
    {
        FUN6(VAR11, "", VAR1);
    }
    if (VAR2)
    {
        FUN6(VAR11, "", VAR2);
    }
    if (VAR3)
    {
        FUN6(VAR11, "", VAR3);
    }
    FUN7("", VAR11->VAR14);
    VAR6 = FUN8(NULL, NULL, VAR15);
    if (VAR6 == NULL)
    {
        FUN3("");
        goto VAR16;
    }
    VAR7 = FUN9(VAR6, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR11->VAR14, NULL, NULL, NULL, NULL, NULL);
    if (VAR7 == NULL)
    {
        FUN3("");
        goto VAR23;
    }
    FUN10(VAR7, VAR24, &VAR12);
    fprintf(VAR25, "");
    VAR4 = VAR26;
    FUN11(VAR7);
VAR23:
    FUN11(VAR6);
VAR16:
    FUN12(VAR11, VAR27);
    return VAR4;
}