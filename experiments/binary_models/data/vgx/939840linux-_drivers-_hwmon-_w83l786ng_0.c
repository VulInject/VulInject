static int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
struct VAR5 *VAR6;
struct VAR3 *VAR7;
int VAR8;
u8 VAR9;

VAR6 = FUN2(VAR4, sizeof(struct VAR5), VAR10);
if (!VAR6)
return -VAR11;

VAR6->VAR2 = VAR2;
FUN3(&VAR6->VAR12);


FUN4(VAR2);


for (VAR8 = 0; VAR8 < 2; VAR8++) {
VAR6->VAR13[VAR8] = FUN5(VAR2,
FUN6(VAR8));
}


VAR9 = FUN5(VAR2, VAR14);
VAR6->VAR15[0] = VAR9 & 0x07;
VAR6->VAR15[1] = (VAR9 >> 4) & 0x07;

VAR7 = FUN7(VAR4, VAR2->VAR16,
VAR6,
VAR17);
return FUN8(VAR7);
}