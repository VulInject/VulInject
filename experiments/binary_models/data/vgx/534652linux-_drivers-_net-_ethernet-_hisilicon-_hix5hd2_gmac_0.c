static int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2,
struct VAR4, VAR2);
struct VAR6 *VAR7 = VAR5->VAR8;
int VAR9 = 0, VAR10 = VAR3;
int VAR11, VAR12;

do {
FUN3(VAR7);
VAR12 = FUN4(VAR7, VAR10);
VAR9 += VAR12;
VAR10 -= VAR12;
if ((VAR9 >= VAR3) || (VAR12 == 0))
break;

VAR11 = FUN5(VAR5->VAR13 + VAR14);
FUN6(VAR11, VAR5->VAR13 + VAR14);
} while (VAR11 & VAR15);

if (VAR9 < VAR3) {
FUN7(VAR2, VAR9);
FUN8(VAR5);
}

return VAR9;
}