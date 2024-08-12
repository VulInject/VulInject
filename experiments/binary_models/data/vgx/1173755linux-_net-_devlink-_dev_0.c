static int FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3,
const char **VAR4,
struct VAR5 *VAR6)
{
struct devlink_flash_component_lookup_ctx VAR7 = {};
struct devlink_info_req VAR8 = {};
const char *VAR9;
int VAR10;

if (!VAR3)
return 0;

VAR9 = FUN2(VAR3);

if (!VAR1->VAR11->VAR12) {
FUN3(VAR6, VAR3,
"");
return -VAR13;
}

VAR7.VAR14 = VAR9;
VAR8.VAR15 = VAR16;
VAR8.VAR17 = &VAR7;

VAR10 = VAR1->VAR11->FUN4(VAR1, &VAR8, NULL);
if (VAR10)
return VAR10;

if (!VAR7.VAR18) {
FUN3(VAR6, VAR3,
"");
return -VAR19;
}
*VAR4 = VAR9;
return 0;
}