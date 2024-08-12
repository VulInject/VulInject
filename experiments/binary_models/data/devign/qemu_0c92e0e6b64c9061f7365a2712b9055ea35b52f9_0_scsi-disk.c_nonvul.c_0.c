static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8.VAR9);
    uint32_t VAR10;
    if (VAR4->VAR8.VAR11 != NULL)
    {
        VAR4->VAR8.VAR11 = NULL;
        FUN3(VAR6->VAR7.VAR12.VAR13, &VAR4->VAR14);
    }
    if (VAR4->VAR8.VAR15)
    {
        goto VAR16;
    }
    if (VAR2 < 0)
    {
        if (FUN4(VAR4, -VAR2))
        {
            goto VAR16;
        }
    }
    FUN5(&VAR4->VAR8);
    if (VAR4->VAR8.VAR17)
    {
        FUN6(VAR6->VAR7.VAR12.VAR13, &VAR4->VAR14, VAR4->VAR8.VAR17, VAR18);
        VAR4->VAR8.VAR19 -= VAR4->VAR8.VAR17->VAR20;
        VAR4->VAR8.VAR11 = FUN7(VAR6->VAR7.VAR12.VAR13, VAR4->VAR8.VAR17, VAR4->VAR21, VAR22, VAR4);
    }
    else
    {
        VAR10 = FUN8(VAR4, VAR23);
        FUN9(VAR6->VAR7.VAR12.VAR13, &VAR4->VAR14, VAR10 * VAR24, VAR18);
        VAR4->VAR8.VAR11 = FUN10(VAR6->VAR7.VAR12.VAR13, VAR4->VAR21, &VAR4->VAR25, VAR10, VAR26, VAR4);
    }
VAR16:
    if (!VAR4->VAR8.VAR15)
    {
        FUN11(&VAR4->VAR8);
    }
}