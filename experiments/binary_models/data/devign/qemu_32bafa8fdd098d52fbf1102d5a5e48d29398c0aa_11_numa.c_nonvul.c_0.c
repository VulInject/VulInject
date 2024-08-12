static void FUN1(uint64_t VAR1[])
{
    VAR2 *VAR3 = NULL;
    VAR2 **VAR4 = &VAR3;
    VAR2 *VAR5;
    FUN2(FUN3(), &VAR4);
    for (VAR5 = VAR3; VAR5; VAR5 = VAR5->VAR6)
    {
        VAR7 *VAR8 = VAR5->VAR8;
        if (VAR8)
        {
            switch (VAR8->VAR9)
            {
            case VAR10:
                VAR1[VAR8->VAR11.VAR12.VAR13->VAR14] += VAR8->VAR11.VAR12.VAR13->VAR15;
                break;
            default:
                break;
            }
        }
    }
    FUN4(VAR3);
}