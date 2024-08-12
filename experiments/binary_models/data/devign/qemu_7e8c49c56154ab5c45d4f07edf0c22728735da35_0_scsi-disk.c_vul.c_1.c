static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8.VAR9);
    uint32_t VAR10;
    if (VAR4->VAR8.VAR11 != NULL)
    {
        VAR4->VAR8.VAR11 = NULL;
        FUN3(VAR6->VAR7.VAR12.VAR13, &VAR4->VAR14);
    }
    if (VAR2 < 0)
    {
        if (FUN4(VAR4, -VAR2))
        {
            goto VAR15;
        }
    }
    VAR10 = VAR4->VAR16.VAR17 / 512;
    VAR4->VAR18 += VAR10;
    VAR4->VAR19 -= VAR10;
    if (VAR4->VAR19 == 0)
    {
        FUN5(&VAR4->VAR8, VAR20);
    }
    else
    {
        FUN6(VAR4, VAR21);
        FUN7("", VAR4->VAR8.VAR22, VAR4->VAR16.VAR17);
        FUN8(&VAR4->VAR8, VAR4->VAR16.VAR17);
    }
VAR15:
    if (!VAR4->VAR8.VAR23)
    {
        FUN9(&VAR4->VAR8);
    }
}