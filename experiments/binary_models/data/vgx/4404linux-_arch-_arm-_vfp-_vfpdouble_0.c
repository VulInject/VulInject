static VAR1
FUN1(struct VAR2 *VAR3, struct VAR2 *VAR4,
struct VAR2 *VAR5, u32 VAR6)
{
FUN2("", VAR4);
FUN2("", VAR5);


if (VAR4->VAR7 < VAR5->VAR7) {
struct VAR2 *VAR8 = VAR4;
VAR4 = VAR5;
VAR5 = VAR8;
FUN3("");
}

VAR3->VAR9 = VAR4->VAR9 ^ VAR5->VAR9;


if (VAR4->VAR7 == 2047) {
if (VAR4->VAR10 || (VAR5->VAR7 == 2047 && VAR5->VAR10))
return FUN4(VAR3, VAR4, VAR5, VAR6);
if ((VAR5->VAR7 | VAR5->VAR10) == 0) {
*VAR3 = VAR11;
return VAR12;
}
VAR3->VAR7 = VAR4->VAR7;
VAR3->VAR10 = 0;
return 0;
}


if ((VAR5->VAR7 | VAR5->VAR10) == 0) {
VAR3->VAR7 = 0;
VAR3->VAR10 = 0;
return 0;
}


VAR3->VAR7 = VAR4->VAR7 + VAR5->VAR7 - 1023 + 2;
VAR3->VAR10 = FUN5(VAR4->VAR10, VAR5->VAR10);

FUN2("", VAR3);
return 0;
}