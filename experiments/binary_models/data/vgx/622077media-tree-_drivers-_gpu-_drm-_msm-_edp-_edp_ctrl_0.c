bool FUN1(struct VAR1 *VAR2)
{
FUN2(&VAR2->VAR3);
FUN3("", VAR2->VAR4);
if (VAR2->VAR4) {
FUN4(&VAR2->VAR3);
return true;
}

if (!VAR2->VAR5) {
FUN5(VAR2, 1);
FUN6(VAR2, 1);
}

if (FUN7(VAR2->VAR6, VAR7, VAR2->VAR8,
VAR9) < VAR9) {
FUN8("", VAR10);
memset(VAR2->VAR8, 0, VAR9);
} else {
VAR2->VAR4 = true;
}

if (!VAR2->VAR5) {
FUN6(VAR2, 0);
FUN5(VAR2, 0);
}

FUN3("", VAR2->VAR4);

FUN4(&VAR2->VAR3);

return VAR2->VAR4;
}