void FUN1(VAR1 *VAR2, bool VAR3, bool VAR4);
void FUN2(VAR1 *VAR2, VAR5 *VAR6, void (*VAR7)(VAR8 *, VAR1 *));
void FUN3(VAR1 *VAR2);
VAR1 *FUN4(VAR8 *VAR9, uint16_t VAR10);
VAR1 *FUN5(VAR1 *VAR2);
static inline void FUN6(VAR11 *VAR12, unsigned int VAR13)
{
    assert(VAR13 < 64);
    *VAR12 |= (1ULL << VAR13);
}