static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR4 = 16 - VAR2->VAR12 * 2;
    if (VAR4 > 0)
        VAR7 = VAR2->VAR13 << VAR4;
    else
        VAR7 = VAR2->VAR13 >> -VAR4;
    VAR10 = FUN2(VAR7 * (VAR14)VAR15[0] >> 16);
    if (VAR10 >= VAR16[2])
        return 0x3F;
    if (VAR10 >= VAR16[1])
    {
        VAR4 = 4;
        VAR5 = 3;
    }
    else
    {
        VAR4 = 3;
        VAR5 = (VAR10 >= VAR16[0]);
    }
    VAR6 = FUN3(VAR5, 3);
    VAR8 = 1 << VAR4;
    VAR9 = VAR8 >> 1;
    for (VAR3 = 0; VAR3 < VAR4; VAR3++)
    {
        VAR7 = VAR5 * 32 + (VAR8 << VAR6);
        VAR7 *= VAR7;
        if (VAR10 >= VAR7)
            VAR8 += VAR9;
        else
            VAR8 -= VAR9;
        VAR9 >>= 1;
    }
    VAR7 = VAR5 * 32 + (VAR8 << VAR6);
    VAR11 = VAR7 * VAR7 - VAR10;
    if (VAR11 <= 0)
    {
        VAR7 = VAR5 * 32 + (VAR8 + 1 << VAR6);
        VAR7 = VAR7 * VAR7 - VAR10;
        VAR8 = (VAR6 - 1 << 4) + VAR8;
        if (VAR7 >= VAR11)
            VAR8++;
    }
    else
    {
        VAR7 = VAR5 * 32 + (VAR8 - 1 << VAR6);
        VAR7 = VAR7 * VAR7 - VAR10;
        VAR8 = (VAR6 - 1 << 4) + VAR8;
        if (VAR7 >= VAR11)
            VAR8--;
    }
    return VAR8;
}