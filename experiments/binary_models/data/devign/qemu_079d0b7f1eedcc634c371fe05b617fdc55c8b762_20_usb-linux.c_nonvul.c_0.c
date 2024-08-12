static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    static const int VAR5[] = {
        [VAR6] = VAR7,
        [VAR8] = VAR9,
        [VAR10] = VAR11,
        [VAR12] = VAR13,
    };
    uint8_t VAR14 = VAR4->VAR15->VAR14;
    assert(VAR14 < FUN2(VAR5));
    return VAR5[VAR14];
}