void
FUN1(struct VAR1 *VAR2,
const struct VAR3 *update,
const struct VAR4 *VAR5,
const struct VAR6 *VAR7)
{
char VAR8[VAR9];

FUN2(VAR2, "");
switch (update->VAR10) {
case VAR11:
FUN2(VAR2, "");
break;

case VAR12:
FUN2(VAR2, "");
break;

case VAR13:
FUN3(VAR2, "",
FUN4(update->VAR14,
VAR8,
sizeof VAR8));
break;

case VAR15:
FUN2(VAR2, "");
break;

case VAR16:
FUN3(VAR2, ""VAR17, FUN5(update->VAR18));
return;

case VAR19:
FUN2(VAR2, "");
return;

case VAR20:
FUN2(VAR2, "");
return;

}

FUN3(VAR2, "");
FUN6(update->VAR21, VAR7, VAR2);
if (update->VAR22 != VAR23) {
FUN3(VAR2, ""VAR24, update->VAR22);
}
if (update->VAR25 != VAR23) {
FUN3(VAR2, ""VAR24, update->VAR25);
}
FUN3(VAR2, ""VAR26, FUN7(update->VAR27));

FUN8(VAR2, '');
FUN9(&update->VAR28, VAR5, VAR2, VAR29);

if (update->VAR30) {
if (VAR2->VAR31[VAR2->VAR32 - 1] != '') {
FUN8(VAR2, '');
}
FUN2(VAR2, "");
struct ofpact_format_params VAR33 = {
.VAR5 = VAR5,
.VAR7 = VAR7,
.VAR2 = VAR2,
};
FUN10(update->VAR34, update->VAR30, &VAR33);
}
}