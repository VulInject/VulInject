static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
u32 VAR5, VAR6, VAR7;
int VAR8;

if (FUN2(VAR4->VAR9) != 1 || FUN2(VAR4->VAR10) != 3) {
VAR8 = -3;
goto VAR11;
}

VAR5 = FUN2(VAR4->VAR4[0]);

VAR6 = VAR7 = 0;
if (FUN3())
VAR8 = FUN4(VAR2->VAR12, VAR5, &VAR6, &VAR7);
else
VAR8 = FUN5(VAR2->VAR12, VAR5, &VAR6, &VAR7);
if (VAR8) {
VAR8 = -3;
goto VAR11;
}

VAR4->VAR13[1] = FUN6(VAR6);
VAR4->VAR13[2] = FUN6(VAR7);
VAR11:
VAR4->VAR13[0] = FUN6(VAR8);
}