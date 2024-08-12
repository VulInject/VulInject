void FUN1(VAR1 *VAR2, void *VAR3, int VAR4, VAR5 **VAR6);
VAR7 FUN2(VAR1 *VAR2, target_ulong VAR8);
void FUN3(VAR1 *VAR2, uint64_t VAR9);
static inline VAR10 FUN4(VAR1 *VAR2, uint64_t VAR9, int VAR11)
{
    VAR12 *VAR13 = &VAR2->VAR13;
    uint64_t VAR14;
    VAR14 = VAR9 + (VAR11 * VAR15);
    if (VAR13->VAR16)
    {
        return FUN5((const void *)(VAR17)VAR14);
    }
    else
    {
        return FUN6(FUN7(VAR2)->VAR18, VAR14);
    }
}