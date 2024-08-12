int FUN1(int VAR1, void *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7 = VAR3;
    uintptr_t VAR8 = VAR7->VAR9.VAR8;
    uint32_t VAR10 = *(VAR11 *)VAR8;
    bool VAR12;
    VAR12 = ((VAR10 & 0xbfff0000) == 0x0c000000 || (VAR10 & 0xbfe00000) == 0x0c800000 || (VAR10 & 0xbfdf0000) == 0x0d000000 || (VAR10 & 0xbfc00000) == 0x0d800000 || (VAR10 & 0x3f400000) == 0x08000000 || (VAR10 & 0x3bc00000) == 0x39000000 || (VAR10 & 0x3fc00000) == 0x3d800000 || (VAR10 & 0x3bc00000) == 0x38000000 || (VAR10 & 0x3fe00000) == 0x3c800000 || (VAR10 & 0x3a400000) == 0x28000000);
    return FUN2(VAR8, VAR5, VAR12, &VAR7->VAR13);
}