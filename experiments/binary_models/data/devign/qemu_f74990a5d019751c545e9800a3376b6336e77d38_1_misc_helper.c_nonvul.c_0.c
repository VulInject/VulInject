VAR1 FUN1(VAR2)(VAR3 *VAR4, uint64_t VAR5)
{
    const uintptr_t VAR6 = FUN2();
    const int VAR7 = ((VAR4->VAR8[0] & 0xff) + 1) * 8;
    const int VAR9 = FUN3(VAR10, 8);
    int VAR11;
    if (VAR5 & 0x7)
    {
        FUN4(FUN5(VAR4), VAR6);
        FUN6(VAR4, VAR12, 4);
    }
    FUN7();
    for (VAR11 = 0; VAR11 < VAR7; ++VAR11)
    {
        FUN8(VAR4, VAR5 + VAR11, VAR13[VAR11], VAR6);
    }
    VAR4->VAR8[0] = FUN9(VAR4->VAR8[0], 0, 8, (VAR9 / 8) - 1);
    return VAR7 >= VAR9 ? 0 : 3;
}