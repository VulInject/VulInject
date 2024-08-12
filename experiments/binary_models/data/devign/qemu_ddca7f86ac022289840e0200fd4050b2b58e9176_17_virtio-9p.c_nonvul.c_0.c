static void FUN1(void *VAR1)
{
    int32_t VAR2;
    VAR3 *VAR4;
    ssize_t VAR5 = 0;
    size_t VAR6 = 7;
    uint64_t VAR7;
    int32_t VAR8;
    uint32_t VAR9;
    VAR10 *VAR11 = VAR1;
    VAR12 *VAR13 = VAR11->VAR13;
    VAR5 = FUN2(VAR11, VAR6, "", &VAR2, &VAR7, &VAR9);
    if (VAR5 < 0)
    {
        goto VAR14;
    }
    FUN3(VAR11->VAR15, VAR11->VAR16, VAR2, VAR7, VAR9);
    VAR4 = FUN4(VAR11, VAR2);
    if (VAR4 == NULL)
    {
        VAR5 = -VAR17;
        goto VAR14;
    }
    if (!VAR4->VAR18.VAR19)
    {
        VAR5 = -VAR17;
        goto VAR20;
    }
    if (VAR7 == 0)
    {
        FUN5(VAR11, VAR4);
    }
    else
    {
        FUN6(VAR11, VAR4, VAR7);
    }
    VAR8 = FUN7(VAR11, VAR4, VAR9);
    if (VAR8 < 0)
    {
        VAR5 = VAR8;
        goto VAR20;
    }
    VAR5 = FUN8(VAR11, VAR6, "", VAR8);
    if (VAR5 < 0)
    {
        goto VAR20;
    }
    VAR5 += VAR8 + VAR6;
    FUN9(VAR11->VAR15, VAR11->VAR16, VAR8, VAR5);
VAR20:
    FUN10(VAR11, VAR4);
VAR14:
    FUN11(VAR13, VAR11, VAR5);
}