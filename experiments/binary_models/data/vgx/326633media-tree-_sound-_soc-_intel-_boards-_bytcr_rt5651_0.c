static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR4,
VAR7);
struct VAR5 *VAR8 = FUN2(VAR4,
VAR9);
int VAR10;


VAR6->VAR11 = VAR6->VAR12 = 48000;
VAR8->VAR11 = VAR8->VAR12 = 2;


FUN3(VAR4, VAR13);


VAR10 = FUN4(VAR2->VAR14,
VAR15     |
VAR16   |
VAR17
);

if (VAR10 < 0) {
FUN5(VAR2->VAR18, "", VAR10);
return VAR10;
}

VAR10 = FUN6(VAR2->VAR14, 0x3, 0x3, 2, 24);
if (VAR10 < 0) {
FUN5(VAR2->VAR18, "", VAR10);
return VAR10;
}

return 0;
}