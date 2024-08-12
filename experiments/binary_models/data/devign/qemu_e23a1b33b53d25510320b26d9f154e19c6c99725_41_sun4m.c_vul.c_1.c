static VAR1 *FUN1(target_phys_addr_t VAR2, target_phys_addr_t VAR3, VAR4 **VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8;
    unsigned int VAR9, VAR10;
    VAR6 = FUN2(NULL, "");
    FUN3(VAR6);
    VAR8 = FUN4(VAR6);
    for (VAR9 = 0; VAR9 < VAR11; VAR9++)
    {
        for (VAR10 = 0; VAR10 < VAR12; VAR10++)
        {
            FUN5(VAR8, VAR9 * VAR12 + VAR10, VAR5[VAR9][VAR10]);
        }
    }
    FUN6(VAR8, 0, VAR3);
    for (VAR9 = 0; VAR9 < VAR11; VAR9++)
    {
        FUN6(VAR8, VAR9 + 1, VAR2 + VAR9 * VAR13);
    }
    return VAR6;
}