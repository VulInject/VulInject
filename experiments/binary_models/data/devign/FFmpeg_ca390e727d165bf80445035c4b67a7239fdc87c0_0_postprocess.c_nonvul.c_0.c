VAR1 *FUN1(int VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = memalign(32, sizeof(VAR5));
    int VAR7 = (VAR2 + 15) & (~15);
    memset(VAR6, 0, sizeof(VAR5));
    VAR6->VAR4 = VAR4;
    if (VAR4 & VAR8)
    {
        VAR6->VAR9 = VAR4 & 0x3;
        VAR6->VAR10 = (VAR4 >> 4) & 0x3;
    }
    else
    {
        VAR6->VAR9 = 1;
        VAR6->VAR10 = 1;
    }
    FUN2(VAR6, VAR2, VAR3, VAR7);
    VAR6->VAR11 = -1;
    return VAR6;
}