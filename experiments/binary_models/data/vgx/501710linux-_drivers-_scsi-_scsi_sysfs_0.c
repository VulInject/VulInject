static VAR1
FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);
int VAR10 = -VAR11;

if (VAR9->VAR12 == VAR13 ||
VAR9->VAR12 == VAR14)
return -VAR15;

if (!VAR9->VAR16) {

VAR10 = FUN3(VAR9->VAR17, VAR6);
} else if (!FUN4(VAR6, "", 8)) {

if (VAR9->VAR16->VAR18)
VAR10 = VAR9->VAR16->FUN5(VAR9, NULL, NULL);
else
VAR10 = 0;
} else if (!FUN4(VAR6, "", 6)) {

FUN6(VAR19, VAR9,
"",
VAR9->VAR16->VAR20);
VAR10 = -VAR11;
}

return VAR10 < 0 ? VAR10 : VAR7;
}