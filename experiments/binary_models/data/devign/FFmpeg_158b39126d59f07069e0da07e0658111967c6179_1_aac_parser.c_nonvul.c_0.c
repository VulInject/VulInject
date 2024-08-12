static int FUN1(uint64_t VAR1, VAR2 *VAR3, int *VAR4, int *VAR5)
{
    GetBitContext VAR6;
    AACADTSHeaderInfo VAR7;
    int VAR8;
    union
    {
        uint64_t VAR9;
        uint8_t VAR10[8];
    } VAR11;
    VAR11.VAR9 = FUN2(VAR1);
    FUN3(&VAR6, VAR11.VAR10 + 8 - VAR12, VAR12 * 8);
    if ((VAR8 = FUN4(&VAR6, &VAR7)) < 0)
        return 0;
    *VAR4 = 0;
    *VAR5 = 1;
    VAR3->VAR13 = VAR7.VAR13;
    VAR3->VAR14 = VAR15[VAR7.VAR16];
    VAR3->VAR17 = VAR7.VAR17;
    VAR3->VAR18 = VAR7.VAR18;
    return VAR8;
}