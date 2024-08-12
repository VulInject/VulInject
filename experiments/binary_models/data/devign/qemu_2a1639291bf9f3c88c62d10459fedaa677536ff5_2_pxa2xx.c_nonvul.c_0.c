static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    struct VAR4 *VAR5 = (struct VAR4 *)VAR1;
    VAR2 -= VAR5->VAR6;
    switch (VAR2)
    {
    case VAR7:
        VAR5->VAR8[VAR2 >> 2] &= 0x15 & ~(VAR3 & 0x2a);
        VAR5->VAR8[VAR2 >> 2] |= VAR3 & 0x15;
        break;
    case VAR9:
    case VAR10:
    case VAR11:
        VAR5->VAR8[VAR2 >> 2] &= ~VAR3;
        break;
    default:
        if (VAR2 >= VAR7 && VAR2 <= VAR12 && !(VAR2 & 3))
        {
            VAR5->VAR8[VAR2 >> 2] = VAR3;
            break;
        }
        FUN2("" VAR13 "", VAR14, VAR2);
        break;
    }
}