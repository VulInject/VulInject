static unsigned int *FUN1(char *VAR1, int argc, int VAR2, struct VAR3 *VAR4, unsigned long VAR5, unsigned long VAR6, unsigned long VAR7, int VAR8, struct VAR9 *VAR10)
{
    VAR11 *argv, *VAR12;
    VAR11 *VAR13, *VAR14;
    int VAR15;
    VAR13 = (unsigned int *)(~15UL & (unsigned long)VAR1);
    VAR14 = VAR13;
    VAR14 -= (VAR16 + 1) * 2;
    VAR14 -= VAR17 * 2;
    VAR14 -= VAR2 + 1;
    VAR14 -= argc + 1;
    VAR14 -= (!VAR8 ? 3 : 1);
    if ((unsigned long)VAR14 & 15UL)
        VAR13 -= ((unsigned long)VAR14 & 15UL) / sizeof(*VAR13);
    FUN2(VAR18, VAR13 + (VAR19 * 2));
    FUN2(VAR20, VAR13 + (VAR19 * 2 + 1)) VAR13 -= 2;
    FUN3(0, VAR21, 0);
    VAR13 -= VAR16 * 2;
    FUN3(0, VAR22, (VAR11)(VAR5 + VAR4->VAR23));
    FUN3(1, VAR24, (VAR11)(sizeof(struct VAR25)));
    FUN3(2, VAR26, (VAR11)(VAR4->VAR27));
    FUN3(3, VAR28, (VAR11)(VAR29));
    FUN3(4, VAR30, (VAR11)(VAR7));
    FUN3(5, VAR31, (VAR11)0);
    FUN3(6, VAR32, VAR6 + VAR4->VAR33);
    FUN3(7, VAR34, (VAR11)FUN4());
    FUN3(8, VAR35, (VAR11)FUN5());
    FUN3(9, VAR36, (VAR11)FUN6());
    FUN3(11, VAR37, (VAR11)FUN7());
    VAR38;
    VAR13 -= VAR2 + 1;
    VAR12 = VAR13;
    VAR13 -= argc + 1;
    argv = VAR13;
    if (!VAR8)
    {
        FUN2((VAR11)VAR12, --VAR13);
        FUN2((VAR11)argv, --VAR13);
    }
    FUN2(argc, --VAR13);
    VAR10->VAR39 = (unsigned int)((unsigned long)VAR1 & 0xffffffff);
    while (argc-- > 0)
    {
        FUN2((VAR11)VAR1, argv++);
        do
        {
            FUN8(VAR15, VAR1);
            VAR1++;
        } while (VAR15 != 0);
    }
    FUN2(0, argv);
    VAR10->VAR40 = VAR10->VAR41 = (unsigned int)((unsigned long)VAR1 & 0xffffffff);
    while (VAR2-- > 0)
    {
        FUN2((VAR11)VAR1, VAR12++);
        do
        {
            FUN8(VAR15, VAR1);
            VAR1++;
        } while (VAR15 != 0);
    }
    FUN2(0, VAR12);
    VAR10->VAR42 = (unsigned int)((unsigned long)VAR1 & 0xffffffff);
    return VAR13;
}