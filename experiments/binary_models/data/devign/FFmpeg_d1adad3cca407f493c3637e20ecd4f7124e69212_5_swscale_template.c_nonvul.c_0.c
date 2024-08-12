static inline void FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, long VAR6, const VAR7 *VAR8, int VAR9, int VAR10, const VAR11 *VAR12, const VAR11 *VAR13, int VAR14, VAR7 *VAR15, VAR16 *VAR17, int VAR18)
{
    void (*VAR19)(VAR7 *, const VAR7 *, long, VAR16 *) = VAR18 ? VAR3->VAR20 : VAR3->VAR21;
    void (*VAR22)(VAR11 *, int) = VAR18 ? NULL : VAR3->VAR23;
    VAR8 += VAR18 ? VAR3->VAR24 : VAR3->VAR25;
    if (VAR19)
    {
        FUN2(VAR15, VAR8, VAR9, VAR17);
        VAR8 = VAR15;
    }
    if (VAR3->VAR26)
    {
        VAR3->FUN3(VAR5, VAR6, (VAR4 *)VAR8, VAR9, VAR10, VAR12, VAR13, VAR14, VAR27[VAR3->VAR28].VAR29[0].VAR30);
    }
    else if (!VAR3->VAR31)
    {
        VAR3->FUN4(VAR5, VAR6, VAR8, VAR9, VAR10, VAR12, VAR13, VAR14);
    }
    else
    {
        VAR3->FUN5(VAR3, VAR5, VAR6, VAR8, VAR9, VAR10);
    }
    if (VAR22)
        FUN6(VAR5, VAR6);
}