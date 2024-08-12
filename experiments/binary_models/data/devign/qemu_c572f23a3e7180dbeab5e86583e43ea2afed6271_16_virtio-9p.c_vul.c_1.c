static void FUN1(void *VAR1)
{
    int32_t VAR2;
    size_t VAR3 = 7;
    ssize_t VAR4 = 0;
    struct stat VAR5;
    VAR6 *VAR7;
    uint64_t VAR8;
    V9fsStatDotl VAR9;
    VAR10 *VAR11 = VAR1;
    VAR12 *VAR13 = VAR11->VAR13;
    FUN2(VAR11, VAR3, "", &VAR2, &VAR8);
    VAR7 = FUN3(VAR11, VAR2);
    if (VAR7 == NULL)
    {
        VAR4 = -VAR14;
        goto VAR15;
    }
    VAR4 = FUN4(VAR11, &VAR7->VAR16, &VAR5);
    if (VAR4 < 0)
    {
        goto VAR17;
    }
    FUN5(VAR13, &VAR5, &VAR9);
    if (VAR8 & VAR18)
    {
        VAR4 = FUN6(VAR11, &VAR7->VAR16, VAR5.VAR19, &VAR9);
        if (VAR4 < 0)
        {
            goto VAR17;
        }
        VAR9.VAR20 |= VAR18;
    }
    VAR4 = VAR3;
    VAR4 += FUN7(VAR11, VAR3, "", &VAR9);
VAR17:
    FUN8(VAR11, VAR7);
VAR15:
    FUN9(VAR11->VAR21, VAR11->VAR22, VAR9.VAR20, VAR9.VAR19, VAR9.VAR23, VAR9.VAR24);
    FUN10(VAR13, VAR11, VAR4);