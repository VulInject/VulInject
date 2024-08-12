static VAR1 FUN1(struct VAR2 *VAR3)
{
u16 VAR4 = FUN2(VAR3, VAR5);

if (FUN3(VAR3, false)) {
FUN4(VAR3->VAR6);
return VAR7;
}


FUN5(VAR3);
if (!VAR3->VAR8) {
FUN6(VAR3, 0xff);
FUN4(VAR3->VAR6);
} else if (VAR3->VAR8 <= FUN2(VAR3, VAR9)) {
FUN7(VAR3, VAR9, VAR3->VAR8 - 1);
}


if (VAR4 & VAR10) {
FUN8(VAR3);
if (!VAR3->VAR11)
FUN6(VAR3, VAR10);
}

return VAR7;
}