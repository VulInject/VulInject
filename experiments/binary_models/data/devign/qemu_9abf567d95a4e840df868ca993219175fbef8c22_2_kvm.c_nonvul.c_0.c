static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, uint16_t VAR5)
{
    uint32_t VAR6;
    uint64_t VAR7;
    int VAR8 = 0;
    FUN2(VAR2);
    VAR6 = VAR2->VAR9[VAR5 & 0xf];
    VAR7 = VAR2->VAR9[(VAR5 & 0xf0) >> 4];
    VAR8 = FUN3(VAR2, VAR6, VAR7);
    if (VAR8 < 0)
    {
        FUN4(VAR2, -VAR8);
    }
    FUN5(VAR2, VAR8);
    return 0;
}