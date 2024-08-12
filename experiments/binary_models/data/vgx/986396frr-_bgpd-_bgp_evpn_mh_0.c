static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
struct VAR7 *VAR8;

if (VAR2->VAR9)
return;

for (FUN2(VAR2->VAR10, VAR4, VAR8)) {
VAR6 = VAR8->VAR6;
if (!FUN3(VAR6->VAR11, VAR12) || !VAR6->VAR13)
continue;

if (FUN4(VAR14, VAR15))
FUN5("",
VAR2->VAR16->VAR17, VAR2->VAR18);
VAR2->VAR9 = VAR6;

if (memcmp(&VAR2->VAR19, &VAR2->VAR9->VAR13->VAR19, VAR20)) {
memcpy(&VAR2->VAR19, &VAR2->VAR9->VAR13->VAR19, VAR20);
FUN6(VAR2, true);
}
break;
}
}