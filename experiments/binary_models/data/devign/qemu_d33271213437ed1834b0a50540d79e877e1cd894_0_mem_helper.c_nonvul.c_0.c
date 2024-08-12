VAR1 FUN1(VAR2)(VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6)
{
    uintptr_t VAR7 = FUN2();
    uint64_t VAR8 = VAR4->VAR9[VAR5 + 1] & 0xffffff;
    uint64_t VAR10 = FUN3(VAR4, VAR5);
    uint64_t VAR11 = VAR4->VAR9[VAR6 + 1] & 0xffffff;
    uint64_t VAR12 = FUN3(VAR4, VAR6);
    uint8_t VAR13 = VAR4->VAR9[VAR6 + 1] >> 24;
    uint32_t VAR14;
    VAR14 = FUN4(VAR4, &VAR10, &VAR8, &VAR12, &VAR11, VAR13, VAR7);
    VAR4->VAR9[VAR5 + 1] = FUN5(VAR4->VAR9[VAR5 + 1], 0, 24, VAR8);
    VAR4->VAR9[VAR6 + 1] = FUN5(VAR4->VAR9[VAR6 + 1], 0, 24, VAR11);
    FUN6(VAR4, VAR5, VAR10);
    FUN6(VAR4, VAR6, VAR12);
    return VAR14;
}