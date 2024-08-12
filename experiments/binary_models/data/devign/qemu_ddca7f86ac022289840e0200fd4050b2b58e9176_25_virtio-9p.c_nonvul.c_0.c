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
    VAR4 = FUN2(VAR11, VAR3, "", &VAR2, &VAR8);
    if (VAR4 < 0)
    {
        goto VAR14;
    }
    FUN3(VAR11->VAR15, VAR11->VAR16, VAR2, VAR8);
    VAR7 = FUN4(VAR11, VAR2);
    if (VAR7 == NULL)
    {
        VAR4 = -VAR17;
        goto VAR14;
    }
    VAR4 = FUN5(VAR11, &VAR7->VAR18, &VAR5);
    if (VAR4 < 0)
    {
        goto VAR19;
    }
    FUN6(VAR13, &VAR5, &VAR9);
    if (VAR8 & VAR20)
    {
        VAR4 = FUN7(VAR11, &VAR7->VAR18, VAR5.VAR21, &VAR9);
        if (VAR4 < 0)
        {
            goto VAR19;
        }
        VAR9.VAR22 |= VAR20;
    }
    VAR4 = FUN8(VAR11, VAR3, "", &VAR9);
    if (VAR4 < 0)
    {
        goto VAR19;
    }
    VAR4 += VAR3;
    FUN9(VAR11->VAR15, VAR11->VAR16, VAR9.VAR22, VAR9.VAR21, VAR9.VAR23, VAR9.VAR24);
VAR19:
    FUN10(VAR11, VAR7);
VAR14:
    FUN11(VAR13, VAR11, VAR4);
}