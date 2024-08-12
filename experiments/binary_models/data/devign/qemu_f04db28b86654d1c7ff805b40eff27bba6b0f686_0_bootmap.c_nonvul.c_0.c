static VAR1 FUN1(VAR2 *VAR3)
{
    const uint64_t VAR4 = FUN2();
    const uint64_t VAR5 = FUN3();
    const uint64_t VAR6 = VAR3->VAR7.VAR6 + ((VAR3->VAR7.VAR8 & 0xfff0) << 12);
    const uint64_t VAR8 = VAR3->VAR7.VAR8 & 0x000f;
    const block_number_t VAR9 = VAR4 * VAR5 * VAR6 + VAR4 * VAR8 + VAR3->VAR7.VAR10 - 1;
    return VAR9;
}