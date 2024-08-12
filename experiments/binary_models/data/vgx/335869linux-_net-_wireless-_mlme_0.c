void FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
enum nl80211_radar_event VAR5, gfp_t VAR6)
{
struct VAR7 *VAR8 = VAR2->VAR9;
struct VAR10 *VAR10 = VAR8->VAR10;
struct VAR11 *VAR12 = FUN2(VAR10);
unsigned long VAR13;


if (VAR8->VAR14)
return;

FUN3(VAR2, VAR5);

if (FUN4(!VAR8->VAR15 && VAR5 != VAR16))
return;

switch (VAR5) {
case VAR17:
VAR13 = VAR8->VAR18 +
FUN5(VAR8->VAR19);
FUN4(!FUN6(VAR20, VAR13));
FUN7(VAR10, VAR4, VAR21);
memcpy(&VAR12->VAR22, VAR4,
sizeof(struct VAR3));
FUN8(VAR23, &VAR12->VAR24);
FUN9(VAR12);
VAR25;
case VAR26:
VAR8->VAR15 = false;
break;
case VAR16:
VAR8->VAR15 = true;
break;
default:
FUN4(1);
return;
}

FUN10(VAR12, VAR4, VAR5, VAR2, VAR6);
}