VAR1 FUN1(ram_addr_t VAR2, int VAR3, MemoryRegion VAR4[], target_phys_addr_t VAR5[], target_phys_addr_t VAR6[], const unsigned int VAR7[])
{
    ram_addr_t VAR8 = VAR2;
    ram_addr_t VAR9 = 0;
    int VAR10;
    int VAR11;
    for (VAR10 = 0; VAR10 < VAR3; VAR10++)
    {
        for (VAR11 = 0; VAR7[VAR11] != 0; VAR11++)
        {
            unsigned int VAR12 = VAR7[VAR11];
            if (VAR12 <= VAR8)
            {
                char VAR13[32];
                snprintf(VAR13, sizeof(VAR13), "", VAR10);
                FUN2(&VAR4[VAR10], NULL, VAR13, VAR12);
                VAR5[VAR10] = VAR9;
                VAR6[VAR10] = VAR12;
                VAR9 += VAR2;
                VAR8 -= VAR12;
                break;
            }
        }
        if (!VAR8)
        {
            break;
        }
    }
    VAR2 -= VAR8;
    if (VAR8)
        FUN3("", (int)(VAR2 >> 20));
    return VAR2;
}