void FUN1(VAR1 *VAR2)
{
    target_phys_addr_t VAR3;
    uint64_t VAR4;
    int VAR5, VAR6;
    VAR6 = 0;
    VAR3 = VAR2->VAR7[VAR8];
    for (VAR5 = 0; VAR5 < VAR2->VAR9; VAR5++)
    {
        VAR4 = FUN2(VAR3);
        if (FUN3(VAR4))
        {
            FUN4(&VAR4);
            FUN5(VAR3, VAR4);
            VAR6 = 1;
        }
        VAR3 += 12;
    }
    if (VAR6)
        FUN6(VAR2, 1);
}