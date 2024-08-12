static int FUN1(struct VAR1 *VAR2, u32 VAR3, u32 VAR4,
u32 VAR5, const char *VAR6)
{
unsigned long VAR7 = VAR8 + VAR5 * VAR9;
u32 VAR10;
int VAR11;

while ((VAR11 = VAR2->VAR12->FUN2(VAR2, VAR13, &VAR10)) == 0) {
if (VAR10 == ~0)
return -VAR14;
if ((VAR10 & VAR3) == VAR4)
break;

FUN3(1000, 2000);
if (FUN4(VAR15))
return -VAR16;
if (FUN5(VAR8, VAR7)) {
FUN6(VAR2->VAR17,
"",
VAR6, VAR10);
return -VAR14;
}
}

return VAR11;
}