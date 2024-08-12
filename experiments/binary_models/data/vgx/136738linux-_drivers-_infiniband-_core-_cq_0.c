static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
enum ib_poll_context VAR4)
{
FUN2(VAR5);
unsigned int VAR6, VAR7;
struct VAR8 *VAR9, *VAR10;
int VAR11;

if (VAR4 > VAR12) {
FUN3(VAR4 > VAR12);
return -VAR13;
}


VAR3 = FUN4(unsigned int, VAR2->VAR14.VAR15,
FUN5(VAR3, VAR16));
VAR6 = FUN4(unsigned int, VAR2->VAR17, FUN6());
for (VAR7 = 0; VAR7 < VAR6; VAR7++) {
VAR9 = FUN7(VAR2, NULL, VAR3, VAR7, VAR4);
if (FUN8(VAR9)) {
VAR11 = FUN9(VAR9);
goto VAR18;
}
VAR9->VAR19 = true;
FUN10(&VAR9->VAR20, &VAR5);
}

FUN11(&VAR2->VAR21);
FUN12(&VAR5, &VAR2->VAR22[VAR4]);
FUN13(&VAR2->VAR21);

return 0;

VAR18:
FUN14(VAR9, VAR10, &VAR5, VAR20) {
VAR9->VAR19 = false;
FUN15(VAR9);
}
return VAR11;
}