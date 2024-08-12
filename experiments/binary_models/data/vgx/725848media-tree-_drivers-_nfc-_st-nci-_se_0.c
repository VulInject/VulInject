static void FUN1(unsigned long VAR1)
{


u8 VAR2 = 0x01;
struct VAR3 *VAR4 = (struct VAR3 *) VAR1;

FUN2("");

VAR4->VAR5.VAR6 = false;

if (!VAR4->VAR5.VAR7) {
VAR4->VAR5.VAR7 = true;
FUN3(VAR4->VAR8->VAR9, VAR10,
VAR11, NULL, 0);
} else {
VAR4->VAR5.VAR7 = false;
FUN3(VAR4->VAR8->VAR9, VAR12,
VAR13, &VAR2, 1);
}
VAR4->VAR5.FUN4(VAR4->VAR5.VAR14, NULL, 0, -VAR15);
}