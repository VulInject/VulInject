static void FUN1(void *VAR1)
{
    int VAR2;
    int32_t VAR3;
    int VAR4;
    size_t VAR5 = 7;
    VAR6 *VAR7;
    VAR8 *VAR9 = VAR1;
    VAR10 *VAR11 = VAR9->VAR11;
    FUN2(VAR9, VAR5, "", &VAR3, &VAR4);
    VAR7 = FUN3(VAR9, VAR3);
    if (VAR7 == NULL)
    {
        VAR2 = -VAR12;
        goto VAR13;
    }
    VAR2 = FUN4(VAR9, VAR7, VAR4);
    if (!VAR2)
    {
        VAR2 = VAR5;
    }
    FUN5(VAR9, VAR7);
VAR13:
    FUN6(VAR11, VAR9, VAR2);