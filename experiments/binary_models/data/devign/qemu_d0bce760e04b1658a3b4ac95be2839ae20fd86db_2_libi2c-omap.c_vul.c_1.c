VAR1 *FUN1(uint64_t VAR2)
{
    VAR3 *VAR4 = FUN2(sizeof(*VAR4));
    VAR1 *VAR5 = (VAR1 *)VAR4;
    uint16_t VAR6;
    VAR4->VAR2 = VAR2;
    VAR5->send = VAR7;
    VAR5->recv = VAR8;
    FUN3(VAR2 + VAR9, &VAR6, 2);
    FUN4(VAR6, ==, 0x34);
    return VAR5;
}