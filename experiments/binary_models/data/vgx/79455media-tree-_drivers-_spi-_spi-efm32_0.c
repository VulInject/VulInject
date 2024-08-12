static void FUN1(struct VAR1 *VAR2)
{
u8 VAR3 = 0;

if (VAR2->VAR4) {
VAR3 = *VAR2->VAR4;
VAR2->VAR4++;
}

VAR2->VAR5--;
FUN2(VAR2, VAR3, VAR6);
FUN3(VAR2, "", VAR7, VAR3);
}