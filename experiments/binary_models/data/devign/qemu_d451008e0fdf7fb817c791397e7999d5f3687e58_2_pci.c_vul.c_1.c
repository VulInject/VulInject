static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = VAR6->VAR8;
    switch (VAR2)
    {
    case 4:
        if ((VAR3 & 0x7fff0000) == 0x10000)
        {
            if (VAR3 & 0x80000000U && VAR8->VAR9.VAR10 & VAR11)
            {
                FUN2(FUN3(&VAR6->VAR12), VAR8->VAR13.VAR14);
                FUN4(&VAR8->VAR9.VAR15, (VAR16)(VAR3 & 0xfff), (VAR17)VAR6->VAR3.VAR18, VAR4, VAR19);
            }
            VAR6->VAR3.VAR20 = 1;
            VAR6->VAR3.VAR21 = VAR3;
            return;
        }
        VAR6->VAR3.VAR20 = 0;
        break;
    case 0:
        VAR6->VAR3.VAR18 = VAR3;
        break;
    }
    FUN5(FUN3(&VAR6->VAR12), VAR8->VAR13.VAR14);
    FUN6(&VAR8->VAR22[VAR6->VAR3.VAR23].VAR24, VAR2 + 0x70, VAR3, VAR4);
}