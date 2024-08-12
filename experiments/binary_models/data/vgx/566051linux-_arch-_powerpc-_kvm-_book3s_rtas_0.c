static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
u32 VAR5;
int VAR6;

if (FUN2(VAR4->VAR7) != 1 || FUN2(VAR4->VAR8) != 1) {
VAR6 = -3;
goto VAR9;
}

VAR5 = FUN2(VAR4->VAR4[0]);

if (FUN3())
VAR6 = FUN4(VAR2->VAR10, VAR5);
else
VAR6 = FUN5(VAR2->VAR10, VAR5);
if (VAR6)
VAR6 = -3;
VAR9:
VAR4->VAR11[0] = FUN6(VAR6);
}