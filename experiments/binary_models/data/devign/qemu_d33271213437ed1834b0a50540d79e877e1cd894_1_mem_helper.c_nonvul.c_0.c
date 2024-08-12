VAR1 FUN1(VAR2)(VAR3 *VAR4, uint32_t VAR5, uint64_t VAR6, uint32_t VAR7)
{
    uintptr_t VAR8 = FUN2();
    uint64_t VAR9 = FUN3(VAR4, VAR5 + 1);
    uint64_t VAR10 = FUN4(VAR4, VAR5);
    uint64_t VAR11 = FUN3(VAR4, VAR7 + 1);
    uint64_t VAR12 = FUN4(VAR4, VAR7);
    uint8_t VAR13 = VAR6;
    uint32_t VAR14;
    VAR14 = FUN5(VAR4, &VAR10, &VAR9, &VAR12, &VAR11, VAR13, VAR8);
    FUN6(VAR4, VAR5 + 1, VAR9);
    FUN6(VAR4, VAR7 + 1, VAR11);
    FUN7(VAR4, VAR5, VAR10);
    FUN7(VAR4, VAR7, VAR12);
    return VAR14;
}