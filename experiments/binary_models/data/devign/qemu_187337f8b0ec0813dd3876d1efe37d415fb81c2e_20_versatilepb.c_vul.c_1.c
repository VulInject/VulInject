static VAR1 *FUN1(uint32_t VAR2, VAR1 *VAR3, int VAR4)
{
    VAR5 *VAR6;
    VAR1 *VAR7;
    int VAR8;
    VAR6 = (VAR5 *)FUN2(sizeof(VAR5));
    if (!VAR6)
        return NULL;
    VAR7 = FUN3(VAR9, VAR6, 32);
    VAR6->VAR2 = VAR2;
    VAR6->VAR3 = VAR3;
    VAR6->VAR4 = VAR4;
    VAR8 = FUN4(0, VAR10, VAR11, VAR6);
    FUN5(VAR2, 0x00000fff, VAR8);
    return VAR7;
}