FUN1(void *VAR1, hwaddr VAR2, unsigned VAR3)
{
    VAR4 *VAR5 = VAR1;
    uint32_t VAR6;
    uint64_t VAR7;
    switch (VAR2)
    {
    case VAR8:
        FUN2(VAR5->VAR9);
        return VAR5->VAR9;
    case VAR10:
        if (FUN3(VAR5, &VAR6))
        {
            VAR7 = FUN4(&VAR5->VAR11, VAR6, sizeof(VAR7));
            FUN5(VAR6, VAR7);
            return VAR7;
        }
        return 0;
    default:
        FUN6(VAR2);
        return 0;
    }
}