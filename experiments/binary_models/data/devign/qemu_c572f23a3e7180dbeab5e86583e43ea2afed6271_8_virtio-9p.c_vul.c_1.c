static void FUN1(void *VAR1)
{
    int32_t VAR2;
    int VAR3 = 0;
    size_t VAR4 = 7;
    VAR5 *VAR6;
    VAR7 *VAR8 = VAR1;
    FUN2(VAR8, VAR4, "", &VAR2);
    VAR6 = FUN3(VAR8, VAR2);
    if (VAR6 == NULL)
    {
        VAR3 = -VAR9;
        goto VAR10;
    }
    if (!VAR8->VAR11->VAR12.VAR13 & VAR14)
    {
        VAR3 = -VAR15;
        goto VAR16;
    }
    VAR3 = FUN4(VAR8, &VAR6->VAR17);
    if (VAR3 < 0)
    {
        goto VAR16;
    }
    VAR3 = FUN5(VAR8, &VAR6->VAR17);
    if (!VAR3)
    {
        VAR3 = VAR4;
    }
VAR16:
    FUN6(VAR8->VAR11, VAR6->VAR2);
    FUN7(VAR8, VAR6);
VAR10:
    FUN8(VAR8->VAR11, VAR8, VAR3);