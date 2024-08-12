void FUN1(VAR1 *VAR2, void (*VAR3)(void), void (*VAR4)(void))
{
    VAR5 *VAR6 = FUN2(sizeof(VAR5));
    VAR6->VAR3 = VAR3;
    VAR6->VAR4 = VAR4;
    VAR2->VAR7 = FUN3(VAR2->VAR7, VAR6);
}