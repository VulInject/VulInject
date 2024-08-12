void FUN1(void)
{
int VAR1;
u32 VAR2;

FUN2("");
for (VAR1 = 0; VAR1 < VAR3; VAR1++) {
VAR2 = FUN3(FUN4(VAR1));
FUN2("",
VAR1, FUN3(FUN5(VAR1)),
VAR1, FUN3(FUN6(VAR1)));
FUN2("", VAR1, FUN3(FUN7(VAR1)));
FUN2("", VAR1, VAR2);
FUN2("",
(VAR2 & VAR4) ? 1 : 0, (VAR2 >> 20) & 0xff);
FUN8(FUN9(VAR2), "");
}

return;
}