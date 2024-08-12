int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = (VAR2->VAR6 == VAR7);
    target_phys_addr_t VAR8;
    void *VAR9;
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR4->VAR11; VAR10++)
    {
        VAR8 = VAR4->VAR12[VAR10].VAR8;
        VAR9 = FUN2(VAR4->VAR12[VAR10].VAR13, &VAR8, VAR5);
        if (!VAR9)
        {
            goto VAR14;
        }
        FUN3(&VAR2->VAR15, VAR9, VAR8);
        if (VAR8 != VAR4->VAR12[VAR10].VAR8)
        {
            goto VAR14;
        }
    }
    return 0;
VAR14:
    FUN4(VAR2);
    return -1;
}