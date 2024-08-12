static inline VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, uint64_t VAR6, unsigned int VAR7, uint64_t VAR8, uint8_t VAR9, uint64_t VAR10, unsigned int VAR11)
{
    VAR1 *VAR12;
    VAR12 = FUN2(sizeof(*VAR12));
    VAR12->VAR13 = VAR5;
    VAR12->VAR11 = VAR11;
    VAR12->VAR6 = VAR6;
    VAR12->VAR10 = VAR10;
    VAR12->VAR8 = VAR8;
    VAR12->VAR7 = VAR7;
    VAR12->VAR9 = VAR9;
    VAR12->VAR14 = VAR3->VAR15++;
    VAR5->VAR16++;
    return VAR12;
}