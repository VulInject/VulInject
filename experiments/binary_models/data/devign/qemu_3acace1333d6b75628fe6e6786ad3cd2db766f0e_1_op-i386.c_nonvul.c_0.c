void FUN1(int VAR1, int VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    int VAR7;
    uint32_t VAR8, VAR9;
    VAR10 *VAR11;
    VAR4 = &VAR12->VAR13[VAR1];
    if (VAR12->VAR14 & VAR15)
    {
        VAR4->VAR16 = (void *)(VAR2 << 4);
        VAR4->VAR17 = 0xffff;
        VAR4->VAR18 = 0;
    }
    else
    {
        if (VAR2 & 0x4)
            VAR6 = &VAR12->VAR19;
        else
            VAR6 = &VAR12->VAR20;
        VAR7 = VAR2 & ~7;
        if ((VAR7 + 7) > VAR6->VAR17)
            FUN2(VAR21, VAR2);
        VAR11 = VAR6->VAR16 + VAR7;
        VAR8 = FUN3(VAR11);
        VAR9 = FUN3(VAR11 + 4);
        VAR4->VAR16 = (void *)((VAR8 >> 16) | ((VAR9 & 0xff) << 16) | (VAR9 & 0xff000000));
        VAR4->VAR17 = (VAR8 & 0xffff) | (VAR9 & 0x000f0000);
        if (VAR9 & (1 << 23))
            VAR4->VAR17 = (VAR4->VAR17 << 12) | 0xfff;
        VAR4->VAR18 = (VAR9 >> 22) & 1;
        fprintf(VAR22, "", VAR2, (unsigned long)VAR4->VAR16, VAR4->VAR17, VAR4->VAR18);
    }
    VAR12->VAR23[VAR1] = VAR2;
}