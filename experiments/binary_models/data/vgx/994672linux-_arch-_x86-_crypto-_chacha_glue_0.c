asmlinkage void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5,
unsigned int VAR6, int VAR7);
asmlinkage void FUN2(const VAR1 *VAR2, VAR1 *VAR8, int VAR7);

asmlinkage void FUN3(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5,
unsigned int VAR6, int VAR7);
asmlinkage void FUN4(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5,
unsigned int VAR6, int VAR7);
asmlinkage void FUN5(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5,
unsigned int VAR6, int VAR7);

asmlinkage void FUN6(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5,
unsigned int VAR6, int VAR7);
asmlinkage void FUN7(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5,
unsigned int VAR6, int VAR7);
asmlinkage void FUN8(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5,
unsigned int VAR6, int VAR7);

static VAR9 FUN9(VAR10);
static VAR9 FUN9(VAR11);
static VAR9 FUN9(VAR12);

static unsigned int FUN10(unsigned int VAR6, unsigned int VAR13)
{
VAR6 = FUN11(VAR6, VAR13 * VAR14);
return FUN12(VAR6, VAR14) / VAR14;
}