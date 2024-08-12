static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5 = FUN2(VAR2->VAR6);
struct VAR7 *VAR8 = VAR5->VAR8;

VAR3 = FUN3(&VAR8->VAR6);
if (VAR3) {

VAR3 = FUN4(VAR8->VAR9);
if (VAR3 < 0) {
FUN5(&VAR8->VAR6);
goto VAR10;
}
}

FUN6(VAR5);
FUN7(VAR5);
FUN8(VAR5);

VAR10:
return VAR3;
}