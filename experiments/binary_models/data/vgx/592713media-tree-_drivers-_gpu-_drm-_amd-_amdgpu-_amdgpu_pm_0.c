static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
char *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR3);
struct VAR9 *VAR10 = VAR8->VAR11;
struct pp_states_info VAR12;
enum amd_pm_state_type VAR13 = 0;
int VAR14 = 0;

if (VAR10->VAR15) {

VAR13 = FUN3(VAR10);
FUN4(VAR10, &VAR12);

for (VAR14 = 0; VAR14 < VAR12.VAR16; VAR14++) {
if (VAR13 == VAR12.VAR17[VAR14])
break;
}

if (VAR14 == VAR12.VAR16)
VAR14 = -VAR18;
}

return snprintf(VAR6, VAR19, "", VAR14);
}