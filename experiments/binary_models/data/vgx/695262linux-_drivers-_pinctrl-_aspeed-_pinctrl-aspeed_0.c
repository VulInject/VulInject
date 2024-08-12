static const struct VAR1 *FUN1(
const struct VAR2 *VAR3,
enum pin_config_param VAR4,
enum aspeed_pin_config_map_type VAR5,
s64 VAR6)
{
int VAR7;

for (VAR7 = 0; VAR7 < VAR3->VAR8; VAR7++) {
const struct VAR1 *VAR9;
bool VAR10;

VAR9 = &VAR3->VAR11[VAR7];

switch (VAR5) {
case VAR12:
VAR10 = (VAR9->VAR13 == -1 || VAR9->VAR13 == VAR6);
break;
case VAR14:
VAR10 = (VAR9->VAR15 == VAR6);
break;
}

if (VAR4 == VAR9->VAR4 && VAR10)
return VAR9;
}

return NULL;
}