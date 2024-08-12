VAR1 FUN1(void)
{
u32 VAR2;
struct ddr3_spd_cb VAR3;

if (FUN2(&VAR3)) {
FUN3(""
"");
for (;;)
;
}

FUN3("", VAR3.VAR4);

if ((FUN4() > 1) ||
(FUN5(VAR5) & 0x1)) {
FUN3("", VAR3.VAR6);
if (VAR3.VAR6 == 1600)
FUN6(&VAR7);
else
FUN6(&VAR8);
}

if (FUN4() > 0) {
if (FUN4() > 1) {


FUN7();
VAR3.VAR9.VAR10 |= 0x10000;
VAR3.VAR9.VAR11 |= 0x10000;
VAR3.VAR9.VAR12 |= 0x10000;
}
FUN8(VAR13, &VAR3.VAR9);

FUN9(VAR14, &VAR3.VAR15);

VAR2 = VAR3.VAR16;
} else {
FUN8(VAR13, &VAR3.VAR9);
VAR3.VAR15.VAR17 |= 0x1000;
FUN9(VAR14, &VAR3.VAR15);
VAR2 = VAR3.VAR16 / 2;
}
FUN3("", VAR2);


if (FUN4() <= 1)
FUN10();

return VAR2;
}