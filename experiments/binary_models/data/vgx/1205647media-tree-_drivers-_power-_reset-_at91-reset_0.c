static int FUN1(struct VAR1 *this, unsigned long VAR2,
void *VAR3)
{
asm volatile(

""
""


""
""


""


"" FUN2(VAR4) ""

"" FUN2(VAR5) ""

"" FUN2(VAR4) ""

"" FUN2(VAR5) ""

"" FUN2(VAR6) ""

""
:
: "" (VAR7[0]),
"" (VAR7[1]),
"" (VAR8),
"" (1),
"" FUN3(VAR9),
"" FUN3(VAR10 | VAR11 | VAR12)
: "");

return VAR13;
}