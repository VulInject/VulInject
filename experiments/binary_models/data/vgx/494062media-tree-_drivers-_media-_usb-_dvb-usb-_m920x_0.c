static inline int FUN1(struct VAR1 *VAR2, u8 VAR3, u16 VAR4,
u16 VAR5, void *VAR6, int VAR7)
{
int VAR8;

VAR8 = FUN2(VAR2, FUN3(VAR2, 0),
VAR3, VAR9 | VAR10,
VAR4, VAR5, VAR6, VAR7, 2000);
if (VAR8 < 0) {
FUN4(VAR11 "", VAR8);
return VAR8;
}

if (VAR8 != VAR7) {
FUN5("");
return -VAR12;
}

return 0;
}