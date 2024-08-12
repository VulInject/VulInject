int FUN1(void *VAR1, walk_memory_regions_fn VAR2)
{
    struct walk_memory_regions_data VAR3;
    uintptr_t VAR4;
    VAR3.VAR2 = VAR2;
    VAR3.VAR1 = VAR1;
    VAR3.VAR5 = -1ul;
    VAR3.VAR6 = 0;
    for (VAR4 = 0; VAR4 < VAR7; VAR4++)
    {
        int VAR8 = FUN2(&VAR3, (VAR9)VAR4 << VAR10, VAR10 / VAR11 - 1, VAR12 + VAR4);
        if (VAR8 != 0)
        {
            return VAR8;
        }
    }
    return FUN3(&VAR3, 0, 0);
}