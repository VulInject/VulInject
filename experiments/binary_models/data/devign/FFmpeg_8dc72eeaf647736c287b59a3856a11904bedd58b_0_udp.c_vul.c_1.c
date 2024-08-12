static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, VAR5 *VAR6, const char *VAR7)
{
    int VAR8 = -1;
    struct VAR9 *VAR10 = NULL, *VAR11 = NULL;
    int VAR12 = VAR13;
    if (((struct VAR14 *)&VAR2->VAR15)->VAR16)
        VAR12 = ((struct VAR14 *)&VAR2->VAR15)->VAR16;
    VAR10 = FUN2(VAR7[0] ? VAR7 : NULL, VAR2->VAR17, VAR18, VAR12, VAR19);
    if (VAR10 == 0)
        goto VAR20;
    for (VAR11 = VAR10; VAR11; VAR11 = VAR11->VAR21)
    {
        VAR8 = FUN3(VAR11->VAR22, VAR18, 0);
        if (VAR8 != -1)
            break;
        FUN4(NULL, VAR23, "");
    }
    if (VAR8 < 0)
        goto VAR20;
    memcpy(VAR4, VAR11->VAR24, VAR11->VAR25);
    *VAR6 = VAR11->VAR25;
    FUN5(VAR10);
    return VAR8;
VAR20:
    if (VAR8 >= 0)
        FUN6(VAR8);
    if (VAR10)
        FUN5(VAR10);
    return -1;
}