static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int32_t VAR4, VAR5;
    VAR6 *VAR7, *VAR8;
    V9fsString VAR9;
    size_t VAR10 = 7;
    int VAR11 = 0;
    FUN2(&VAR9);
    VAR11 = FUN3(VAR3, VAR10, "", &VAR4, &VAR5, &VAR9);
    if (VAR11 < 0)
    {
        FUN4(VAR3->VAR12, VAR3->VAR13, VAR4, VAR5, VAR9.VAR14);
        if (FUN5(VAR9.VAR14))
        {
            VAR11 = -VAR15;
            VAR7 = FUN6(VAR3, VAR4);
            if (VAR7 == NULL)
            {
                VAR11 = -VAR15;
                VAR8 = FUN6(VAR3, VAR5);
                if (VAR8 == NULL)
                {
                    VAR11 = -VAR15;
                    goto VAR16;
                    VAR11 = FUN7(VAR3, VAR8, VAR7, &VAR9);
                    if (!VAR11)
                    {
                        VAR11 = VAR10;
                    VAR16:
                        FUN8(VAR3, VAR7);
                    VAR17:
                        FUN9(&VAR9);
                        FUN10(VAR3, VAR11)