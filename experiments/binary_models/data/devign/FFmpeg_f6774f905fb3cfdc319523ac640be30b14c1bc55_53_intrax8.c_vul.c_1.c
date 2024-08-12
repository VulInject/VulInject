static void FUN1(VAR1 *VAR2)
{
    const int VAR3 = VAR2->VAR4.VAR5.VAR3[0];
    const int VAR6 = VAR2->VAR4.VAR5.VAR3[1];
    VAR2->VAR7[0] = VAR2->VAR4.VAR5.VAR8[0];
    VAR2->VAR7[1] = VAR2->VAR4.VAR5.VAR8[1];
    VAR2->VAR7[2] = VAR2->VAR4.VAR5.VAR8[2];
    VAR2->VAR7[0] += VAR2->VAR9 * VAR3 << 3;
    VAR2->VAR7[1] += (VAR2->VAR9 & (~1)) * VAR6 << 2;
    VAR2->VAR7[2] += (VAR2->VAR9 & (~1)) * VAR6 << 2;
}