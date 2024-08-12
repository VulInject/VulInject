int FUN1(unsigned int VAR1,
unsigned int VAR2, unsigned int VAR3, VAR4 *VAR5)
{
unsigned long VAR6;
unsigned long VAR7 = (VAR1 << 8) | VAR2;
unsigned long VAR8;

FUN2(VAR8);
FUN3(
""
""
""
""
""
: "" (*VAR5),
"" (VAR6)
: "" (VAR9),
"" (VAR7),
"" ((long) VAR3),
"" (&VAR10));
FUN4(VAR8);
return (int) (VAR6 & 0xff00) >> 8;
}