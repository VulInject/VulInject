void FUN1(VAR1 *VAR2, int VAR3, target_ulong VAR4)
{
    FUN2("" VAR5 "" VAR5 "", VAR6, VAR3, VAR4, VAR2->VAR7[VAR3]);
    if (VAR2->VAR8 & VAR9)
    {
        uint64_t VAR10 = 0, VAR11 = 0;
        VAR10 |= ((VAR12)VAR3 & 0xf) << 28;
        VAR10 |= 1 << 27;
        VAR10 |= (VAR12)VAR3;
        VAR11 |= (VAR4 & 0xfffffff) << 12;
        VAR11 |= ((VAR4 >> 27) & 0xf) << 9;
        FUN3(VAR2, VAR10, VAR11);
    }
    else if (VAR2->VAR7[VAR3] != VAR4)
    {
        VAR2->VAR7[VAR3] = VAR4;
        {
            target_ulong VAR13, VAR14;
            VAR13 = (16 << 20) * VAR3;
            VAR14 = VAR13 + (16 << 20);
            for (; VAR13 != VAR14; VAR13 += VAR15)
                FUN4(VAR2, VAR13);
        }
        FUN5(VAR2, 1);
    }
}