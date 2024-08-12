static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

VAR4->VAR5 = FUN3(VAR2);
if (FUN4(FUN5(VAR2), ""))
VAR4->VAR6 = false;
else
VAR4->VAR6 = true;

int VAR7;

VAR7 = FUN6(VAR2, 0, &VAR4->VAR8);
if (VAR7 < 0) {
FUN7("", VAR2->VAR9, VAR7);
return VAR7;
}

VAR7 = FUN6(VAR2, 1, &VAR4->VAR10);
if (VAR7 < 0) {
FUN7("", VAR2->VAR9, VAR7);
return VAR7;
}

return 0;
}