static bool FUN1(VAR1 *VAR2, MIPSInsn VAR3, void *VAR4)
{
    uintptr_t VAR5 = (VAR6)VAR4;
    uintptr_t VAR7 = (VAR6)VAR2->VAR8 + 4;
    int32_t VAR9;
    if ((VAR7 ^ VAR5) & -(1 << 28))
    {
        return false;
    }
    FUN2((VAR5 & 3) == 0);
    VAR9 = VAR3;
    VAR9 |= (VAR5 >> 2) & 0x3ffffff;
    FUN3(VAR2, VAR9);
    return true;
}