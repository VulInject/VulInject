static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, VAR3 *VAR6, unsigned int *VAR7, unsigned int VAR8)
{
    uint32_t VAR9;
    struct ipmi_time VAR10;
    FUN2(6);
    VAR9 = VAR4[2] | (VAR4[3] << 8) | (VAR4[4] << 16) | (VAR4[5] << 24);
    FUN3(&VAR10);
    VAR2->VAR11.VAR12 = VAR10.VAR13 - ((long)VAR9);
}