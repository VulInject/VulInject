static void FUN1(void *VAR1)
{
    size_t VAR2 = 7;
    struct stat VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    int32_t VAR8, VAR9 = 0;
    VAR10 *VAR11 = VAR1;
    VAR12 *VAR13 = VAR11->VAR13;
    VAR7 = FUN2(sizeof(*VAR7));
    FUN3(VAR11, VAR2, "", &VAR8, &VAR7->VAR14, &VAR7->VAR15, &VAR7->VAR16, &VAR7->VAR17, &VAR7->VAR18);
    FUN4(VAR11->VAR19, VAR11->VAR20, VAR8, VAR7->VAR14, VAR7->VAR15, VAR7->VAR16);
    VAR5 = FUN5(VAR11, VAR8);
    if (VAR5 == NULL)
    {
        VAR9 = -VAR21;
        goto VAR22;
    }
    VAR9 = FUN6(VAR11, VAR5->VAR23.VAR24, &VAR3);
    if (VAR9 < 0)
    {
        goto VAR25;
    }
    VAR7->VAR14 = VAR26;
    VAR2 += FUN7(VAR11, VAR2, "", VAR7->VAR14, VAR7->VAR15, VAR7->VAR16, VAR7->VAR17, &VAR7->VAR18);
    VAR9 = VAR2;
VAR25:
    FUN8(VAR11, VAR5);
VAR22:
    FUN9(VAR13, VAR11, VAR9);
    FUN10(&VAR7->VAR18);
    FUN11(VAR7);