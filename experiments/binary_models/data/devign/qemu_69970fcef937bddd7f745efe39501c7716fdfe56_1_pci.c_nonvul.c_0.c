static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    VAR7 *VAR8 = VAR6->VAR8;
    switch (VAR3)
    {
    case 4:
        if (VAR6->VAR9.VAR10)
        {
            FUN2(FUN3(&VAR6->VAR11), VAR8->VAR12.VAR13);
            return VAR6->VAR9.VAR14 ^ 0x80000000U;
        }
        break;
    case 0:
        if (VAR6->VAR9.VAR10)
        {
            uint64_t VAR15;
            FUN4(FUN3(&VAR6->VAR11), VAR8->VAR12.VAR13);
            if (!(VAR8->VAR16.VAR17 & VAR18))
            {
                return 0;
            }
            FUN5(&VAR8->VAR16.VAR19, (VAR20)(VAR6->VAR9.VAR14 & 0xfff), &VAR15, VAR4, VAR21);
            return VAR15;
        }
    }
    FUN6(FUN3(&VAR6->VAR11), VAR8->VAR12.VAR13);
    return FUN7(&VAR8->VAR22[VAR6->VAR9.VAR23].VAR24, VAR3 + 0x70, VAR4);
}