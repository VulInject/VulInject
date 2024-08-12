FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7;
    switch (VAR2)
    {
    case VAR8:
        FUN2(VAR3);
        VAR6->VAR9 = (VAR10)VAR3;
        return;
    case VAR11:
        if (FUN3(VAR6, &VAR7))
        {
            FUN4(VAR7, VAR3);
            FUN5(&VAR6->VAR12, VAR7, VAR3, sizeof(VAR3));
        }
        return;
    default:
        FUN6(VAR2);
        return;
    }
}