static inline void FUN1(int VAR1, int VAR2)
{
    VAR2 &= 0xffff;
    FUN2(VAR3, VAR1, VAR2, (VAR4 *)(VAR2 << 4), 0xffff, 0);
}