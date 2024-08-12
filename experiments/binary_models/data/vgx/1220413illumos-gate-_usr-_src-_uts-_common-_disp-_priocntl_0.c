int
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR5 *VAR6;
int VAR7 = 0;
int VAR8;

FUN2(FUN3(&VAR9));
FUN4(&VAR2->VAR10);

if ((VAR6 = VAR2->VAR11) == NULL) {
FUN5(&VAR2->VAR10);
return (VAR12);
}


if (VAR4->VAR13 == VAR14) {
if (!FUN6(VAR2, VAR15, FUN7())) {
FUN5(&VAR2->VAR10);
return (VAR16);
}
}

do {
VAR8 = FUN8(VAR4, VAR6);
if (VAR8)
VAR7 = VAR8;
} while ((VAR6 = VAR6->VAR17) != VAR2->VAR11);

FUN5(&VAR2->VAR10);
return (VAR7);
}