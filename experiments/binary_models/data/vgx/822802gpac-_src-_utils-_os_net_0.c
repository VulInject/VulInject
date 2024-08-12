VAR1 FUN1(const char *VAR2)
{
u32 VAR3;
char *VAR4;
struct VAR5 *VAR6;
if (!VAR2) return 0;

VAR4 = strchr(VAR2, '');
if (VAR4) VAR4 = strchr(VAR2, '');
if (VAR4 && !FUN2(VAR2, "", 2)) return 1;

VAR6 = FUN3((char*)VAR2, 7000, VAR7, VAR8, VAR9);
if (!VAR6) return 0;
VAR3 = 0;
if (VAR6->VAR10->VAR11 == VAR12) {
VAR3 = FUN4(FUN5(((struct VAR13 *)VAR6->VAR10)->VAR14.VAR15));
} else if (VAR6->VAR10->VAR11 == VAR16) {
VAR3 = FUN6(& ((struct VAR17 *)VAR6->VAR10)->VAR18);
}
FUN7(VAR6);
return VAR3;
if (!VAR2) return 0;
return ((FUN8(FUN9(VAR2)) >> 8) & 0x00f00000) == 0x00e00000;
}