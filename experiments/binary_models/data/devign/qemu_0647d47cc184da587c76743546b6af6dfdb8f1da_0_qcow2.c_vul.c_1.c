static VAR1 FUN1(char *VAR2, uint32_t VAR3, const void *VAR4, size_t VAR5, size_t VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2;
    size_t VAR9 = sizeof(VAR7) + ((VAR5 + 7) & ~7);
    if (VAR6 < VAR9)
    {
        return -VAR10;
    }
    *VAR8 = (VAR7){
        .VAR3 = FUN2(VAR3),
        .VAR5 = FUN2(VAR5),
    };
    memcpy(VAR2 + sizeof(VAR7), VAR4, VAR5);
    return VAR9;
}