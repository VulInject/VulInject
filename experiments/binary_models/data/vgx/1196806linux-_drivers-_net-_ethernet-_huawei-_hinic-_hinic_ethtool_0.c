static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, u16 VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct hinic_intr_coal_info VAR8 = {0};
struct hinic_intr_coal_info VAR9 = {0};
bool VAR10 = false;
bool VAR11 = false;
int VAR12;

VAR12 = FUN3(VAR4);
if (VAR12)
return VAR12;

if (VAR4->VAR13 || VAR4->VAR14) {
VAR8.VAR15 =
(VAR16)(VAR4->VAR13 / VAR17);
VAR8.VAR18 = (VAR16)(VAR4->VAR14 /
VAR19);
VAR10 = true;
}

if (VAR4->VAR20 || VAR4->VAR21) {
VAR9.VAR15 =
(VAR16)(VAR4->VAR20 / VAR17);
VAR9.VAR18 = (VAR16)(VAR4->VAR21 /
VAR19);
VAR11 = true;
}


if (VAR10 && (!VAR8.VAR15 ||
!VAR8.VAR18))
FUN4(VAR7, VAR22, VAR2, "");
if (VAR11 && (!VAR9.VAR15 ||
!VAR9.VAR18))
FUN4(VAR7, VAR22, VAR2, "");

if (VAR10) {
VAR12 = FUN5(VAR7, &VAR8, VAR5, true);
if (VAR12)
return VAR12;
}
if (VAR11) {
VAR12 = FUN5(VAR7, &VAR9, VAR5, false);
if (VAR12)
return VAR12;
}
return 0;
}