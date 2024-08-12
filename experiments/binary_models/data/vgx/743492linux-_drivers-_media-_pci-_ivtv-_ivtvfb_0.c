static int FUN1(struct VAR1 *VAR2, int VAR3, void VAR4 *VAR5,
unsigned long VAR6, int VAR7)
{
FUN2(VAR8);
struct VAR9 *VAR10 = VAR2->VAR9;


if (VAR7 == 0) {
FUN3("");
return -VAR11;
}


if ((VAR6 + VAR7) > VAR10->VAR12) {
FUN4("",
VAR6 + VAR7, VAR10->VAR12);
return -VAR13;
}


if ((unsigned long)VAR5 & 3)
FUN4("",
VAR5);

if (VAR6 & 3)
FUN4("", VAR6);

if (VAR7 & 3)
FUN4("", VAR7);


if (!FUN5(VAR5 + VAR6, VAR7)) {
FUN4("", VAR5);

FUN3("",
VAR6, VAR5, VAR7);
return -VAR11;
}


VAR6 += VAR14 + VAR10->VAR15;


return FUN6(VAR2, VAR6, VAR5, VAR7);
}