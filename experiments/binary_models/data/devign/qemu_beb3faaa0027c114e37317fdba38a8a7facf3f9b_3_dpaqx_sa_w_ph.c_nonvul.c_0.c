int main()
{
    int VAR1, VAR2, VAR3;
    int VAR4, VAR5;
    int VAR6, VAR7, VAR8;
    VAR4 = 0x00000005;
    VAR5 = 0x00000005;
    VAR1 = 0x00FF00FF;
    VAR2 = 0x00010002;
    VAR6 = 0x00;
    VAR7 = 0x7FFFFFFF;
    VAR8 = 0x01;
    VAR3 = 0;
    __asm(""
          ""
          ""
          ""
          ""
          ""
          ""
          : ""(VAR4), ""(VAR5), ""(VAR3)
          : ""(VAR1), ""(VAR2));
    assert(VAR3 >> (16 + 1) == VAR8);
    assert(VAR4 == VAR6);
    assert(VAR5 == VAR7);
    VAR4 = 0x00000009;
    VAR5 = 0x0000000B;
    VAR1 = 0x800000FF;
    VAR2 = 0x00018000;
    VAR6 = 0x00;
    VAR7 = 0x7FFFFFFF;
    VAR8 = 0x01;
    VAR3 = 0;
    __asm(""
          ""
          ""
          ""
          ""
          ""
          ""
          : ""(VAR4), ""(VAR5), ""(VAR3)
          : ""(VAR1), ""(VAR2));
    assert(VAR3 >> (16 + 1) == VAR8);
    assert(VAR4 == VAR6);
    assert(VAR5 == VAR7);
    return 0;
}