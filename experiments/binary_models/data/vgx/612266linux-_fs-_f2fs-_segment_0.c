static int FUN1(struct VAR1 *VAR2,
block_t VAR3, block_t VAR4)
{
sector_t VAR5 = VAR3, VAR6 = 0;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
unsigned int VAR11;
block_t VAR12;
int VAR13 = 0;

VAR8 = FUN2(VAR2, VAR3, NULL);

for (VAR12 = VAR3; VAR12 < VAR3 + VAR4; VAR12++, VAR6++) {
if (VAR12 != VAR5) {
struct VAR7 *VAR14 =
FUN2(VAR2, VAR12, NULL);

if (VAR14 != VAR8) {
VAR13 = FUN3(VAR2, VAR8,
VAR5, VAR6);
if (VAR13)
return VAR13;
VAR8 = VAR14;
VAR5 = VAR12;
VAR6 = 0;
}
}

VAR10 = FUN4(VAR2, FUN5(VAR2, VAR12));
VAR11 = FUN6(VAR2, VAR12);

if (FUN7(VAR2) &&
!FUN8(VAR11, VAR10->VAR15))
VAR2->VAR16--;
}

if (VAR6)
VAR13 = FUN3(VAR2, VAR8, VAR5, VAR6);
return VAR13;
}