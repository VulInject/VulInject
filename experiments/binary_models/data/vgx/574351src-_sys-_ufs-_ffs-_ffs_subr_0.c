int	FUN1(struct VAR1 *, VAR2 *, VAR3);
void	FUN2(struct VAR1 *, VAR2 *, VAR3);
void	FUN3(struct VAR1 *, VAR2 *, VAR3);
__dead void FUN4(const char *, ...);


void
FUN5(struct VAR1 *VAR1, int VAR4, int32_t VAR5[], int VAR6)
{
int VAR7;
int VAR8, VAR9;
int VAR10, VAR11;

VAR7 = (int)(VAR12[VAR1->VAR13][VAR4]) << 1;
VAR4 <<= 1;
for (VAR10 = 1; VAR10 < VAR1->VAR13; VAR10++) {
if ((VAR7 & (1 << (VAR10 + (VAR1->VAR13 % VAR14)))) == 0)
continue;
VAR8 = VAR15[VAR10];
VAR9 = VAR16[VAR10];
for (VAR11 = VAR10; VAR11 <= VAR1->VAR13; VAR11++) {
if ((VAR4 & VAR8) == VAR9) {
VAR5[VAR10] += VAR6;
VAR11 += VAR10;
VAR8 <<= VAR10;
VAR9 <<= VAR10;
}
VAR8 <<= 1;
VAR9 <<= 1;
}
}
}