static int FUN1(VAR1 *VAR2)
{
    static const uint8_t VAR3[] = {0, 0, 0, 0, 1, 0xbc};
    static const uint8_t VAR4[] = {0, 0, 0, 0, 0xe1, 0xe2};
    if (!memcmp(VAR2->VAR5, VAR3, sizeof(VAR3)) && !memcmp(&VAR2->VAR5[16 - sizeof(VAR4)], VAR4, sizeof(VAR4)))
        return VAR6;
    return 0;
}