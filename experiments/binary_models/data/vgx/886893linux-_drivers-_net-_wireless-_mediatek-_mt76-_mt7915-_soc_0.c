static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
u32 VAR4;

if (FUN2(VAR2, 0, VAR3) && FUN2(VAR2, 1, VAR3))
VAR4 = 0xf;
else if (FUN3(VAR2, 0, VAR3) && FUN3(VAR2, 1, VAR3))
VAR4 = 0xd;
else if (FUN2(VAR2, 0, VAR3))
VAR4 = 0x7;
else if (FUN3(VAR2, 1, VAR3))
VAR4 = 0x8;
else if (FUN2(VAR2, 1, VAR3))
VAR4 = 0xa;
else
return -VAR5;

FUN4(VAR2->VAR6, VAR7, VAR8,
FUN5(VAR8, VAR4));

FUN6(VAR2, VAR9, VAR4);

return 0;
}