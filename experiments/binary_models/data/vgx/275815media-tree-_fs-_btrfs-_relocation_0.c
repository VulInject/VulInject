int FUN1(struct VAR1 *VAR2, int VAR3,
unsigned long *VAR4, unsigned long *VAR5)
{
struct btrfs_key VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
u32 VAR11;

FUN2(VAR2, &VAR6, VAR3);

VAR11 = FUN3(VAR2, VAR3);
if (VAR11 < sizeof(*VAR8)) {
FUN4(VAR11 != sizeof(struct VAR12));
return 1;
}
VAR8 = FUN5(VAR2, VAR3, struct VAR7);
FUN4(!(FUN6(VAR2, VAR8) &
VAR13));

if (VAR6.VAR14 == VAR15 &&
VAR11 <= sizeof(*VAR8) + sizeof(*VAR10)) {
FUN4(VAR11 < sizeof(*VAR8) + sizeof(*VAR10));
return 1;
}
if (VAR6.VAR14 == VAR16 &&
VAR11 <= sizeof(*VAR8)) {
FUN4(VAR11 < sizeof(*VAR8));
return 1;
}

if (VAR6.VAR14 == VAR15) {
VAR10 = (struct VAR9 *)(VAR8 + 1);
*VAR4 = (unsigned long)(VAR10 + 1);
} else {
*VAR4 = (unsigned long)(VAR8 + 1);
}
*VAR5 = (unsigned long)VAR8 + VAR11;
return 0;
}