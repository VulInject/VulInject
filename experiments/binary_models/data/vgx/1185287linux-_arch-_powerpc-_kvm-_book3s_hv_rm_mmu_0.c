static void FUN1(struct VAR1 *VAR1, unsigned long *VAR2,
long VAR3, int VAR4, bool VAR5)
{
long VAR6;


if (VAR4) {
if (VAR5)
asm volatile("" : : : "");
for (VAR6 = 0; VAR6 < VAR3; ++VAR6) {
asm volatile(FUN2(%0,%1,0,0,0) : :
"" (VAR2[VAR6]), "" (VAR1->VAR7.VAR8));
}

FUN3(VAR2[VAR6 - 1], VAR1->VAR7.VAR8);
asm volatile("" : : : "");
} else {
if (VAR5)
asm volatile("" : : : "");
for (VAR6 = 0; VAR6 < VAR3; ++VAR6) {
asm volatile(FUN4(%0,%1,0,0,0) : :
"" (VAR2[VAR6]), "" (0));
}
asm volatile("" : : : "");
}
}