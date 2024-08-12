void FUN1(uint32_t VAR1, uint32_t VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    VAR4 = (VAR3 *)FUN2(sizeof(VAR3));
    if (!VAR4)
        return;
    VAR4->VAR1 = VAR1;
    VAR4->VAR2 = VAR2;
    VAR5 = FUN3(0, VAR6, VAR7, VAR4);
    FUN4(VAR1, 0x00000fff, VAR5);
}