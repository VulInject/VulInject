static VAR1 *FUN1(const char *VAR2, void (*VAR3)(struct VAR1 *, int))
{
    VAR1 *VAR4;
    VAR5 *VAR6;
    VAR4 = FUN2();
    VAR6 = FUN3(sizeof(VAR5));
    VAR6->VAR4 = VAR4;
    VAR6->VAR7 = false;
    VAR6->VAR8.VAR2 = FUN4(VAR2);
    VAR4->VAR9 = VAR6;
    VAR4->VAR10 = VAR11;
    VAR4->VAR12 = VAR13;
    VAR4->VAR14 = VAR15;
    VAR4->VAR16 = VAR3;
    VAR4->VAR17 = true;
    VAR4->VAR18 = VAR19;
    FUN5(&VAR20, VAR6, VAR21);
    return VAR4;
}