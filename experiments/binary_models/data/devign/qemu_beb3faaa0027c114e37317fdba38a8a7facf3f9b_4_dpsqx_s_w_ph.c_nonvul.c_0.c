int main()
{
    int VAR1, VAR2, VAR3;
    int VAR4 = 5, VAR5 = 5;
    int VAR6, VAR7, VAR8;
    VAR1 = 0xBC0123AD;
    VAR2 = 0x01643721;
    VAR6 = 0x00000005;
    VAR7 = 0x1CE5E09B;
    VAR8 = 0x00;
    __asm(""
          ""
          ""
          ""
          ""
          ""
          : ""(VAR4), ""(VAR5), ""(VAR3)
          : ""(VAR1), ""(VAR2));
    VAR3 = (VAR3 >> 17) & 0x01;
    assert(VAR3 == VAR8);
    assert(VAR4 == VAR6);
    assert(VAR5 == VAR7);
    VAR4 = 0x99F13005;
    VAR5 = 0x51730062;
    VAR1 = 0x80008000;
    VAR2 = 0x80008000;
    VAR6 = 0x99F13004;
    VAR7 = 0x51730064;
    VAR8 = 0x01;
    __asm(""
          ""
          ""
          ""
          ""
          ""
          : ""(VAR4), ""(VAR5), ""(VAR3)
          : ""(VAR1), ""(VAR2));
    VAR3 = (VAR3 >> 17) & 0x01;
    assert(VAR3 == VAR8);
    assert(VAR4 == VAR6);
    assert(VAR5 == VAR7);
    return 0;
}