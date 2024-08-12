static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR8.VAR9);
    uint32_t VAR10;
    if (VAR4->VAR8.VAR11 != NULL)
    {
        VAR4->VAR8.VAR11 = NULL;
        FUN3(VAR6->VAR7.VAR12.VAR13, &VAR4->VAR14);
        if (VAR2 < 0)
        {
            if (FUN4(VAR4, -VAR2))
            {
                goto VAR15;
                if (VAR4->VAR8.VAR16)
                {
                    FUN5(VAR6->VAR7.VAR12.VAR13, &VAR4->VAR14, VAR4->VAR8.VAR16, VAR17);
                    VAR4->VAR8.VAR18 -= VAR4->VAR8.VAR16->VAR19;
                    VAR4->VAR8.VAR11 = FUN6(VAR6->VAR7.VAR12.VAR13, VAR4->VAR8.VAR16, VAR4->VAR20, VAR21, VAR4);
                }
                else
                {
                    VAR10 = FUN7(VAR4, VAR22);
                    FUN8(VAR6->VAR7.VAR12.VAR13, &VAR4->VAR14, VAR10 * VAR23, VAR17);
                    VAR4->VAR8.VAR11 = FUN9(VAR6->VAR7.VAR12.VAR13, VAR4->VAR20, &VAR4->VAR24, VAR10, VAR25, VAR4);
                VAR15:
                    if (!VAR4->VAR8.VAR26)
                    {
                        FUN10(&VAR4->VAR8)