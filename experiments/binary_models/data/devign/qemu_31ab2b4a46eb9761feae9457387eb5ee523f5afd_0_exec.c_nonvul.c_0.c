static VAR1 FUN1(target_phys_addr_t VAR2)
{
    PhysPageEntry VAR3 = VAR4;
    VAR5 *VAR6;
    int VAR7;
    MemoryRegionSection VAR8;
    target_phys_addr_t VAR9;
    uint16_t VAR10 = VAR11;
    for (VAR7 = VAR12 - 1; VAR7 >= 0; VAR7--)
    {
        if (VAR3.VAR13.VAR14 == VAR15)
        {
            goto VAR16;
        }
        VAR6 = VAR17[VAR3.VAR13.VAR14];
        VAR3 = VAR6[(VAR2 >> (VAR7 * VAR18)) & (VAR19 - 1)];
    }
    VAR10 = VAR3.VAR13.VAR20;
VAR16:
    VAR8 = VAR21[VAR10];
    VAR2 <<= VAR22;
    assert(VAR8.VAR23 <= VAR2 && VAR2 <= VAR8.VAR23 + VAR8.VAR24 - 1);
    VAR9 = VAR2 - VAR8.VAR23;
    VAR8.VAR23 += VAR9;
    VAR8.VAR25 += VAR9;
    VAR8.VAR24 -= VAR9;
    return VAR8;
}