int main()
{
int VAR1, VAR2, VAR3;
int VAR4;
int VAR5;

VAR2 = 0x12345678;
VAR3 = 0x87654321;
VAR5 = 0x12348765;

__asm
(""
""
: ""(VAR1)
: ""(VAR2), ""(VAR3)
);
assert(VAR5 == VAR1);

VAR2 = 0x7FFFC678;
VAR3 = 0x865432A0;
VAR5 = 0x7FFF8654;

__asm
(""
""
""
: ""(VAR1), ""(VAR4)
: ""(VAR2), ""(VAR3)
);
assert(((VAR4 >> 22) & 0x01) == 1);
assert(VAR5 == VAR1);

VAR2 = 0xBEEFFEED;
VAR3 = 0x7FFF8000;
VAR5 = 0xBEF07FFF;

__asm
(""
""
""
: ""(VAR1), ""(VAR4)
: ""(VAR2), ""(VAR3)
);
assert(((VAR4 >> 22) & 0x01) == 1);
assert(VAR5 == VAR1);

return 0;
}