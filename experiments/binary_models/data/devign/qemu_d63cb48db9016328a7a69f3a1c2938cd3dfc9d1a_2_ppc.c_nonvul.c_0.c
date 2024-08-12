void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR7 = VAR5->VAR8;
    FUN2("" VAR9 "", VAR10, VAR3);
    VAR2->VAR11[VAR12] &= ~(VAR3 & 0xFC000000);
    if (VAR3 & 0x80000000)
        FUN3(VAR2, VAR7->VAR13, 0);
}