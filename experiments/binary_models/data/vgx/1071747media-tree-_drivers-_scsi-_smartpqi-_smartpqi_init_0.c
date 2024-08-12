static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2->VAR4,
VAR5, VAR2->VAR6,
VAR7 | VAR8);
if (VAR3 < 0) {
FUN3(&VAR2->VAR4->VAR9,
"", VAR3);
return VAR3;
}

VAR2->VAR10 = VAR3;
return 0;
}