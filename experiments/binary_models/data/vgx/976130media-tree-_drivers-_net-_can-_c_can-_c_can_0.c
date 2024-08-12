static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
u32 VAR5, int VAR6)
{
u32 VAR7 = 0, VAR8, VAR9;

while ((VAR9 = FUN2(VAR5)) && VAR6 > 0) {
VAR5 &= ~FUN3(VAR9 - 1);

FUN4(VAR2, VAR4, VAR9);
VAR8 = VAR4->FUN5(VAR4, FUN6(VAR10, VAR11));

if (VAR8 & VAR12) {
int VAR13 = FUN7(VAR2, VAR11, VAR9, VAR8);

VAR7 += VAR13;
VAR6 -= VAR13;
continue;
}


if (!(VAR8 & VAR14))
continue;


FUN8(VAR2, VAR11, VAR8);

FUN9(VAR2, VAR4, VAR9);

VAR7++;
VAR6--;
}

return VAR7;
}