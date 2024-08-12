static VAR1 FUN1(struct VAR2 *VAR3)
{
    uint32_t VAR4 = VAR3->VAR4;
    FUN2(VAR3->VAR5);
    VAR3->VAR4 = VAR3->VAR6 << 24;
    FUN3(VAR4, VAR3->VAR4);
    return VAR4;