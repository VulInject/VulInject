int main()
{
    int VAR1, VAR2;
    int VAR3, VAR4;
    int VAR5;
    int VAR6, VAR7;
    int VAR8, VAR9;
    int VAR10;
    VAR3 = 0x00000005;
    VAR4 = 0x0000B4CB;
    VAR2 = 0x0000FF06;
    VAR1 = 0x0000CB00;
    VAR8 = 0x00000005;
    VAR9 = 0x006838CB;
    __asm(""
          ""
          ""
          ""
          ""
          : ""(VAR6), ""(VAR7)
          : ""(VAR3), ""(VAR4), ""(VAR2), ""(VAR1));
    assert(VAR8 == VAR6);
    assert(VAR9 == VAR7);
    VAR3 = 0x00000006;
    VAR4 = 0x0000B4CB;
    VAR2 = 0x00008000;
    VAR1 = 0x00008000;
    VAR8 = 0x00000006;
    VAR9 = 0x8000B4CA;
    VAR10 = 1;
    __asm(""
          ""
          ""
          ""
          ""
          ""
          : ""(VAR6), ""(VAR7), ""(VAR5)
          : ""(VAR3), ""(VAR4), ""(VAR2), ""(VAR1));
    assert(VAR8 == VAR6);
    assert(VAR9 == VAR7);
    assert(((VAR5 >> 17) & 0x01) == VAR10);
    return 0;
}