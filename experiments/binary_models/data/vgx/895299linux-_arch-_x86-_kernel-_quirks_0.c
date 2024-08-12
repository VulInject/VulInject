static void FUN1(struct VAR1 *VAR2)
{
u32 VAR3;

if (VAR4 || VAR5)
return;

if (!VAR6) {
FUN2();
return;
}

FUN3(VAR2, 0x44, 0xfed00001);
FUN4(VAR2, 0x44, &VAR3);
VAR5 = VAR3 & 0xfffffffe;
VAR7 = VAR8;
FUN5(VAR9, &VAR2->VAR2, "",
VAR5);
VAR10 = VAR2;
}