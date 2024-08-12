void FUN1(VAR1 *VAR2, hwaddr VAR3, unsigned VAR4, bool VAR5, uint64_t VAR6, VAR7 *VAR8)
{
    MemoryRegionIoeventfd VAR9 = {
        .VAR3.VAR10 = FUN2(VAR3),
        .VAR3.VAR4 = FUN2(VAR4),
        .VAR5 = VAR5,
        .VAR6 = VAR6,
        .VAR8 = VAR8,
    };
    unsigned VAR11;
    FUN3(VAR2, &VAR9.VAR6, VAR4);
    FUN4();
    for (VAR11 = 0; VAR11 < VAR2->VAR12; ++VAR11)
    {
        if (FUN5(VAR9, VAR2->VAR13[VAR11]))
        {
            break;
        }
    }
    ++VAR2->VAR12;
    VAR2->VAR13 = FUN6(VAR2->VAR13, sizeof(*VAR2->VAR13) * VAR2->VAR12);
    memmove(&VAR2->VAR13[VAR11 + 1], &VAR2->VAR13[VAR11], sizeof(*VAR2->VAR13) * (VAR2->VAR12 - 1 - VAR11));
    VAR2->VAR13[VAR11] = VAR9;
    VAR14 |= VAR2->VAR15;
    FUN7();
}