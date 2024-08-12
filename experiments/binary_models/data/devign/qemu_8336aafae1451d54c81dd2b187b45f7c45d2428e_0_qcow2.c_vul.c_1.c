static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = VAR6->VAR8;
    AES_KEY VAR9;
    AES_KEY VAR10;
    uint32_t VAR11 = 0;
    VAR12 *VAR13;
    VAR3 *VAR14 = NULL;
    int VAR15;
    if (VAR6->VAR11)
    {
        VAR11 = VAR6->VAR11;
        memcpy(&VAR9, &VAR6->VAR9, sizeof(VAR9));
        memcpy(&VAR10, &VAR6->VAR10, sizeof(VAR10));
    }
    FUN2(VAR2);
    FUN3(VAR2->VAR16, &VAR14);
    if (VAR14)
    {
        FUN4(VAR4, VAR14);
        return;
    }
    memset(VAR6, 0, sizeof(VAR5));
    VAR13 = FUN5(VAR2->VAR13);
    VAR15 = FUN6(VAR2, VAR13, VAR8, &VAR14);
    FUN7(VAR13);
    if (VAR14)
    {
        FUN8(VAR4, "", FUN9(VAR14));
        FUN10(VAR14);
        return;
    }
    else if (VAR15 < 0)
    {
        FUN11(VAR4, -VAR15, "");
        return;
    }
    if (VAR11)
    {
        VAR6->VAR11 = VAR11;
        memcpy(&VAR6->VAR9, &VAR9, sizeof(VAR9));
        memcpy(&VAR6->VAR10, &VAR10, sizeof(VAR10));
    }
}