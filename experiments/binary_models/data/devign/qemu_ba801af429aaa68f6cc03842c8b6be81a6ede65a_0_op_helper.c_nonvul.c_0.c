void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    uint64_t VAR4 = VAR3 >> (VAR5 + 1);
    if (!(VAR2->VAR6 & VAR7) || (VAR3 == ~0) || (VAR4 == 0x0000 || VAR4 == 0x0003 || VAR4 == 0x000F || VAR4 == 0x003F || VAR4 == 0x00FF || VAR4 == 0x03FF || VAR4 == 0x0FFF || VAR4 == 0x3FFF || VAR4 == 0xFFFF))
    {
        VAR2->VAR8 = VAR3 & (0x1FFFFFFF & (VAR9 << 1));
    }
}