int FUN1(struct VAR1 *VAR2)
{
static unsigned int VAR3     = 0;
struct VAR1**     VAR4 = FUN2(&VAR5)->VAR4;
unsigned int        VAR6        = FUN2(&VAR5)->VAR7;
unsigned int        VAR8       = 0;

assert(FUN3(VAR2)->VAR9 == &VAR5);

while (VAR4[VAR3 & VAR6]) {
if (++VAR8 == VAR10) {
assert(VAR8 < VAR10);
return 0;
}
if (++VAR3 == VAR10)
VAR3 = 0;
}
VAR4[VAR3 & VAR6] = VAR2;  

FUN4(FUN5(VAR2), VAR3, 3);
if (++VAR3 == VAR10)
VAR3 = 0;
return 1;
}