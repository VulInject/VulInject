static void FUN1(void *VAR1)
{
    int VAR2;
    int32_t VAR3;
    size_t VAR4 = 7;
    VAR5 *VAR6;
    VAR7 *VAR8 = VAR1;
    VAR9 *VAR10 = VAR8->VAR10;
    FUN2(VAR8, VAR4, "", &VAR3);
    VAR6 = FUN3(VAR10, VAR3);
    if (VAR6 == NULL)
    {
        VAR2 = -VAR11;
        goto VAR12;
    }
    VAR6->VAR13++;
    VAR2 = VAR4;
    FUN4(VAR8, VAR6);
VAR12:
    FUN5(VAR10, VAR8, VAR2);