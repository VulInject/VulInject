static void FUN1(void *VAR1)
{
    int VAR2;
    int32_t VAR3;
    size_t VAR4 = 7;
    VAR5 *VAR6;
    VAR7 *VAR8 = VAR1;
    VAR9 *VAR10 = VAR8->VAR10;
    VAR2 = FUN2(VAR8, VAR4, "", &VAR3);
    if (VAR2 < 0)
    {
        goto VAR11;
    }
    FUN3(VAR8->VAR12, VAR8->VAR13, VAR3);
    VAR6 = FUN4(VAR10, VAR3);
    if (VAR6 == NULL)
    {
        VAR2 = -VAR14;
        goto VAR11;
    }
    VAR6->VAR15++;
    VAR2 = VAR4;
    FUN5(VAR8, VAR6);
VAR11:
    FUN6(VAR10, VAR8, VAR2);
}