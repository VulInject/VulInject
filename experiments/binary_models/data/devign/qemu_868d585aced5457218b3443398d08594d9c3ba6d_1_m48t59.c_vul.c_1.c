static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    uint64_t VAR4;
    if (VAR2->VAR5 != NULL)
    {
        FUN2(VAR2->VAR5);
        VAR2->VAR5 = NULL;
    }
    VAR2->VAR6[0x1FF0] &= ~0x80;
    if (VAR3 != 0)
    {
        VAR4 = (1 << (2 * (VAR3 & 0x03))) * ((VAR3 >> 2) & 0x1F);
        FUN3(VAR2->VAR5, ((VAR7)FUN4(NULL) * 1000) + ((VAR4 * 1000) >> 4));
    }
}