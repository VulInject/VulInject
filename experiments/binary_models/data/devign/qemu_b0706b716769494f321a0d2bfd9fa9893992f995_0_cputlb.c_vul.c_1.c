void FUN1(VAR1 *VAR2, ram_addr_t VAR3, ram_addr_t VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    FUN2(VAR2);
    VAR6 = VAR2->VAR8;
    for (VAR7 = 0; VAR7 < VAR9; VAR7++)
    {
        unsigned int VAR10;
        for (VAR10 = 0; VAR10 < VAR11; VAR10++)
        {
            FUN3(&VAR6->VAR12[VAR7][VAR10], VAR3, VAR4);
        }
        for (VAR10 = 0; VAR10 < VAR13; VAR10++)
        {
            FUN3(&VAR6->VAR14[VAR7][VAR10], VAR3, VAR4);
        }
    }
}