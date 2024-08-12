static inline void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8;
    VAR6 = FUN2(VAR4->VAR9, VAR4->VAR10);
    VAR6->VAR11 = VAR4->VAR11;
    VAR6->VAR12 = VAR4->VAR12;
    switch (VAR4->VAR13)
    {
    case 1:
        FUN3(VAR6, 0xffffff, 0x000000, (void *)VAR4->VAR14, 1, (void *)VAR4->VAR15);
        FUN4(VAR6, "");
        break;
    case 32:
        FUN3(VAR6, 0x000000, 0x000000, (void *)VAR4->VAR15, 1, (void *)VAR4->VAR15);
        VAR8 = VAR4->VAR9 * VAR4->VAR10;
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            VAR6->VAR16[VAR7] |= VAR4->VAR14[VAR7] & 0xffffff;
        }
        FUN4(VAR6, "");
        break;
    default:
        fprintf(VAR17, "", VAR18, VAR4->VAR13);
        FUN5(VAR6);
        VAR6 = FUN6();
    }
    FUN7(VAR2->VAR19.VAR20, VAR6);
    FUN5(VAR6);
}