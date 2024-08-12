static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8.VAR9);
    uint32_t VAR10;
    if (VAR4->VAR8.VAR11 != NULL)
    {
        VAR4->VAR8.VAR11 = NULL;
        FUN3(FUN4(VAR6->VAR7.VAR12.VAR13), &VAR4->VAR14);
    }
    if (VAR4->VAR8.VAR15)
    {
        goto VAR16;
    }
    if (VAR2 < 0)
    {
        if (FUN5(VAR4, -VAR2))
        {
            goto VAR16;
        }
    }
    VAR10 = VAR4->VAR17.VAR18 / 512;
    VAR4->VAR19 += VAR10;
    VAR4->VAR20 -= VAR10;
    if (VAR4->VAR20 == 0)
    {
        FUN6(VAR4);
        return;
    }
    else
    {
        FUN7(VAR4, VAR21);
        FUN8("", VAR4->VAR8.VAR22, VAR4->VAR17.VAR18);
        FUN9(&VAR4->VAR8, VAR4->VAR17.VAR18);
    }
VAR16:
    FUN10(&VAR4->VAR8);
}