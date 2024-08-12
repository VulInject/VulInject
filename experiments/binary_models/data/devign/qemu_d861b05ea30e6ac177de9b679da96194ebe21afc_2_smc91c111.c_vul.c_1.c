void FUN1(VAR1 *VAR2, uint32_t VAR3, void *VAR4, int VAR5)
{
    VAR6 *VAR7;
    int VAR8;
    VAR7 = (VAR6 *)FUN2(sizeof(VAR6));
    VAR8 = FUN3(0, VAR9, VAR10, VAR7);
    FUN4(VAR3, 16, VAR8);
    VAR7->VAR3 = VAR3;
    VAR7->VAR4 = VAR4;
    VAR7->VAR5 = VAR5;
    memcpy(VAR7->VAR11, VAR2->VAR11, 6);
    FUN5(VAR7);
    VAR7->VAR12 = FUN6(VAR2->VAR13, VAR14, VAR7);
}