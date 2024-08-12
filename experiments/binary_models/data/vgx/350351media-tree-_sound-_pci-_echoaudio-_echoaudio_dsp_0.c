static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{

if (FUN2(VAR2))
return -VAR4;

VAR2->VAR5->VAR6 |= FUN3(VAR3);
VAR2->VAR5->VAR7 = 0;
if (VAR2->VAR5->VAR6) {
FUN4(VAR2);
FUN5(VAR2, VAR8);
if (FUN2(VAR2))
return -VAR4;

VAR2->VAR9 &= ~VAR3;
VAR2->VAR5->VAR6 = 0;
VAR2->VAR5->VAR7 = 0;
return 0;
}

FUN6(VAR2->VAR10->VAR11, "");
return 0;
}