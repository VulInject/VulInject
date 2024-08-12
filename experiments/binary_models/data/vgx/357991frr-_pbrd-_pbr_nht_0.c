void FUN1(const char *VAR1)
{
struct VAR2 *VAR3;
struct VAR4 *VAR5;
struct VAR6 *VAR7;
struct pbr_nexthop_group_cache VAR8;
struct VAR9 *VAR10;

FUN2 (VAR7, VAR11, &VAR12) {
for (FUN3(VAR7->VAR13, VAR5, VAR3)) {
if (VAR3->VAR14
&& FUN4(VAR3->VAR14, VAR1)) {
VAR3->VAR15 |= VAR16;
VAR3->VAR17 = NULL;
VAR3->VAR18 = NULL;
VAR7->VAR19 = false;
}
}
}

FUN5(VAR8.VAR1, VAR1, sizeof(VAR8.VAR1));
VAR10 = FUN6(VAR20, &VAR8);


if (!VAR10)
return;


FUN6(VAR21, VAR10);
FUN7();

FUN8(VAR10);
}