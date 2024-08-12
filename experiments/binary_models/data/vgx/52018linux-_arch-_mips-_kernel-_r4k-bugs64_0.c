void FUN1(long *VAR1, long *VAR2, long *VAR3,
const int VAR4, const int VAR5)
{
unsigned long VAR6;
int VAR7, VAR8;
long VAR9, VAR10, VAR11, VAR12, VAR13;



FUN2(VAR6);

asm volatile(
""
: "" (VAR7), "" (VAR8), "" (VAR10)
: "" (5), "" (8), "" (5));
FUN3(VAR4, VAR5);

asm volatile(
""
""
""
""
""
""
""
""
""
""
: "" (VAR11), "" (VAR13)
: "" (VAR7), "" (VAR8), "" (VAR10), "" (0)
: "", "", "");

asm volatile(
""
: "" (VAR7), "" (VAR8), "" (VAR10)
: "" (VAR7), "" (VAR8), "" (VAR10));
FUN3(VAR4, VAR5);
VAR9 = VAR7 * VAR8;
VAR12 = VAR10 << 32;
asm volatile(
""
: "" (VAR12)
: "" (VAR12), "" (VAR9));
FUN4(VAR6);

*VAR1 = VAR11;
*VAR2 = VAR12;
*VAR3 = VAR13;
}