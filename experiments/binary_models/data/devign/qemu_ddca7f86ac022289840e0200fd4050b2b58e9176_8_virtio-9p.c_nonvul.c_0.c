static void FUN1(void *VAR1)
{
    int32_t VAR2;
    int VAR3 = 0;
    size_t VAR4 = 7;
    VAR5 *VAR6;
    VAR7 *VAR8 = VAR1;
    VAR3 = FUN2(VAR8, VAR4, "", &VAR2);
    if (VAR3 < 0)
    {
        goto VAR9;
    }
    FUN3(VAR8->VAR10, VAR8->VAR11, VAR2);
    VAR6 = FUN4(VAR8, VAR2);
    if (VAR6 == NULL)
    {
        VAR3 = -VAR12;
        goto VAR9;
    }
    if (!(VAR8->VAR13->VAR14.VAR15 & VAR16))
    {
        VAR3 = -VAR17;
        goto VAR18;
    }
    VAR3 = FUN5(VAR8, &VAR6->VAR19);
    if (VAR3 < 0)
    {
        goto VAR18;
    }
    VAR3 = FUN6(VAR8, &VAR6->VAR19);
    if (!VAR3)
    {
        VAR3 = VAR4;
    }
VAR18:
    FUN7(VAR8->VAR13, VAR6->VAR2);
    FUN8(VAR8, VAR6);
VAR9:
    FUN9(VAR8->VAR13, VAR8, VAR3);
}