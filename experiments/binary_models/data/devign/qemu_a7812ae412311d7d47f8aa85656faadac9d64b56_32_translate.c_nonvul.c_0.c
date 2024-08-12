static inline void FUN1(TCGv VAR1, TCGv VAR2)
{
    struct
    {
        int VAR3;
        uint32_t VAR4;
    } VAR5[] = {{7, 0x80808080}, {5, 0x40404040}, {3, 0x20202020}, {1, 0x10101010}, {-1, 0x08080808}, {-3, 0x04040404}, {-5, 0x02020202}, {-7, 0x01010101}};
    int VAR6;
    TCGv VAR7, VAR8;
    VAR7 = FUN2();
    VAR8 = FUN2();
    FUN3(VAR8, VAR2);
    FUN4(VAR7, VAR8, VAR5[0].VAR3);
    FUN5(VAR1, VAR7, VAR5[0].VAR4);
    for (VAR6 = 1; VAR6 < sizeof VAR5 / sizeof VAR5[0]; VAR6++)
    {
        if (VAR5[VAR6].VAR3 >= 0)
        {
            FUN4(VAR7, VAR8, VAR5[VAR6].VAR3);
        }
        else
        {
            FUN6(VAR7, VAR8, -VAR5[VAR6].VAR3);
        }
        FUN5(VAR7, VAR7, VAR5[VAR6].VAR4);
        FUN7(VAR1, VAR1, VAR7);
    }
    FUN8(VAR7);
    FUN8(VAR8);
}