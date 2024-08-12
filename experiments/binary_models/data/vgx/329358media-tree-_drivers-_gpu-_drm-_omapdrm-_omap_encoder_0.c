static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR3 *VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
struct VAR8 *VAR8 = FUN2(VAR2);
struct VAR9 *VAR10 = VAR8->VAR10;
struct VAR11 *VAR12;
bool VAR13;
int VAR14;

VAR13 = false;
FUN3(VAR12, &VAR7->VAR15.VAR16, VAR17) {
if (VAR12->VAR2 == VAR2) {
VAR13 = FUN4(VAR12);
break;
}
}

if (VAR10->VAR18->VAR19)
VAR10->VAR18->FUN5(VAR10, VAR13);

if (VAR13 && VAR10->VAR18->VAR20) {
struct hdmi_avi_infoframe VAR21;

VAR14 = FUN6(&VAR21, VAR5);
if (VAR14 == 0)
VAR10->VAR18->FUN7(VAR10, &VAR21);
}
}