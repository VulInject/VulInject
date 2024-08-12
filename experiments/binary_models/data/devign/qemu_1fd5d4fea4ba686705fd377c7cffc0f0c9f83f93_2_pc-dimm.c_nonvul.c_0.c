VAR1 FUN1(void)
{
    VAR2 *VAR3 = NULL;
    VAR2 **VAR4 = &VAR3;
    VAR2 *VAR5;
    ram_addr_t VAR6 = VAR7;
    FUN2(FUN3(), &VAR4);
    for (VAR5 = VAR3; VAR5; VAR5 = VAR5->VAR8)
    {
        VAR9 *VAR10 = VAR5->VAR10;
        if (VAR10)
        {
            switch (VAR10->VAR11)
            {
            case VAR12:
                VAR6 += VAR10->VAR13.VAR14->VAR6;
                break;
            default:
                break;
            }
        }
    }
    FUN4(VAR3);
    return VAR6;
}