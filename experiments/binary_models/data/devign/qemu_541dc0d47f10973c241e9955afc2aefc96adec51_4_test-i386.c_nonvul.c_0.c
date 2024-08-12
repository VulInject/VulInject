void FUN1(void)
{
    struct VAR1
    {
        uint16_t VAR2;
        uint16_t VAR3;
        uint16_t VAR4;
        uint16_t VAR5;
        uint16_t VAR6;
        uint16_t VAR7;
        uint32_t VAR8[4];
        long double VAR9[8];
    } VAR10;
    struct VAR1
    {
        uint16_t VAR2;
        uint16_t VAR4;
        uint16_t VAR6;
        uint16_t VAR8[4];
        long double VAR9[8];
    } VAR11;
    double VAR12[8];
    double VAR13[8];
    int VAR14;
    for (VAR14 = 0; VAR14 < 8; VAR14++)
        VAR12[VAR14] = VAR14 + 1;
    FUN2(&VAR11, "", "");
    FUN2(&VAR11, "", "");
    FUN2(&VAR10, "", "");
    FUN2(&VAR10, "", "");
    for (VAR14 = 0; VAR14 < 5; VAR14++)
        asm volatile(""
                     :
                     : ""(VAR12[VAR14]));
    asm volatile("");
    asm volatile(""
                 :
                 : ""(VAR10));
    asm volatile("");
    FUN3("", VAR10.VAR6);
}