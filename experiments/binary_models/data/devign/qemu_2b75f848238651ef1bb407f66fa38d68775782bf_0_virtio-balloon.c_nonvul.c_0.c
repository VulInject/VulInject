static VAR1 FUN1(void)
{
    VAR2 *VAR3 = NULL, *VAR4;
    ram_addr_t VAR5 = VAR6;
    FUN2(FUN3(), &VAR3);
    for (VAR4 = VAR3; VAR4; VAR4 = FUN4(VAR4))
    {
        VAR7 *VAR8 = FUN5(VAR4->VAR9);
        if (!strcmp(FUN6(VAR8), VAR10))
        {
            VAR5 += FUN7(VAR8, VAR11, &VAR12);
        }
    }
    FUN8(VAR3);
    return VAR5;
}