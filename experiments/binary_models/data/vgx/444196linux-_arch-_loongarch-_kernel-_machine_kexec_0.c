atomic_t VAR1 = FUN1(0);

static unsigned long VAR2;
static unsigned long VAR3;
static unsigned long VAR4;
static unsigned long VAR5;
static unsigned long VAR6;

static void FUN2(const struct VAR7 *VAR7)
{
unsigned long VAR8;

FUN3("");
FUN3("", VAR7->VAR9);
FUN3("", VAR7->VAR10);
FUN3("", VAR7->VAR11);
FUN3("", VAR7->VAR12);

for (VAR8 = 0; VAR8 < VAR7->VAR12; VAR8++) {
FUN3("", VAR8,
VAR7->VAR13[VAR8].VAR14,
VAR7->VAR13[VAR8].VAR14 + VAR7->VAR13[VAR8].VAR15);
FUN3("",
(unsigned long)VAR7->VAR13[VAR8].VAR15,
(unsigned long)VAR7->VAR13[VAR8].VAR15 /  VAR16);
}
}