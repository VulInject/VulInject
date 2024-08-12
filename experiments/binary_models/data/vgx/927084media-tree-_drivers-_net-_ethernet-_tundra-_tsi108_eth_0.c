static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
u32 VAR5 = FUN3(VAR6);
u32 VAR7 = FUN3(VAR8);


if (VAR7 == 0 && VAR5 == 0) {
VAR2->VAR9[0] = 0x00;
VAR2->VAR9[1] = 0x06;
VAR2->VAR9[2] = 0xd2;
VAR2->VAR9[3] = 0x00;
VAR2->VAR9[4] = 0x00;
if (0x8 == VAR4->VAR10)
VAR2->VAR9[5] = 0x01;
else
VAR2->VAR9[5] = 0x02;

VAR7 = (VAR2->VAR9[0] << 16) | (VAR2->VAR9[1] << 24);

VAR5 = (VAR2->VAR9[2] << 0) | (VAR2->VAR9[3] << 8) |
(VAR2->VAR9[4] << 16) | (VAR2->VAR9[5] << 24);

FUN4(VAR6, VAR5);
FUN4(VAR8, VAR7);
} else {
VAR2->VAR9[0] = (VAR7 >> 16) & 0xff;
VAR2->VAR9[1] = (VAR7 >> 24) & 0xff;
VAR2->VAR9[2] = (VAR5 >> 0) & 0xff;
VAR2->VAR9[3] = (VAR5 >> 8) & 0xff;
VAR2->VAR9[4] = (VAR5 >> 16) & 0xff;
VAR2->VAR9[5] = (VAR5 >> 24) & 0xff;
}

if (!FUN5(VAR2->VAR9)) {
FUN6(VAR11
"",
VAR2->VAR12, VAR5, VAR7);
return -VAR13;
}

return 0;
}