int FUN1(void)
{
if (FUN2(VAR1)) {
u32 VAR2 = 0;
int VAR3;
bool VAR4 = true; 


FUN3(VAR5 + 0x8C, FUN4(13));

FUN3(VAR5 + 0x70, FUN4(4));

if (FUN5(VAR5 + 0x90) & FUN4(13)) {

FUN3(VAR5 + 0x90, FUN4(13));

FUN6(3, VAR6, true);
FUN6(3, VAR6, false);
}


FUN7();


VAR3 = FUN8(8, 1, &VAR2);
if (!VAR3)
VAR4 = !!(VAR2 & 0x4000);

if (FUN9() == VAR7) {
if (VAR4)
FUN10(VAR8);

FUN11();
FUN12(false);
} else {
FUN12(true);
}


if (VAR4)
FUN10(VAR9);

FUN13(2, VAR10, 0xE00);

FUN14();
} else {

FUN15(0x1000);
}

return 0;
}