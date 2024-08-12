static int FUN1(struct VAR1 *VAR2,
enum ufs_notify_change_status VAR3)
{
int VAR4 = 0;
struct VAR5 *VAR6 = FUN2(VAR2);

if (VAR3 == VAR7) {

FUN3(VAR6, VAR8, 0xc, 0x2, 0x2);

FUN3(VAR6, VAR8, 0xc, 0x4, 0x4);

FUN4(VAR2);

if (VAR2->VAR9 & VAR10)
FUN5(VAR2);
}

if (VAR3 == VAR11) {
VAR4 = FUN6(VAR2);
if (VAR4) {
FUN7(VAR2->VAR12, "", VAR4);
goto VAR13;
}

FUN8(VAR2);
}
VAR13:
return VAR4;
}