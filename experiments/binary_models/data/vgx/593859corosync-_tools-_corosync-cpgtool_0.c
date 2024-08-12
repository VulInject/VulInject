static void FUN1(VAR1 *VAR2, unsigned int VAR3)
{
int VAR4;
int VAR5;
corosync_cfg_node_address_t VAR6[VAR7];

if (FUN2(VAR8, VAR3, VAR7, &VAR4, VAR6) == VAR9) {
for (VAR5=0; VAR5<VAR4; VAR5++) {
char VAR10[VAR11];
struct VAR12 *VAR13 = (struct VAR12 *)VAR6[VAR5].VAR14;
struct VAR15 *VAR16 = (struct VAR15 *)VAR6[VAR5].VAR14;
struct VAR17 *VAR18 = (struct VAR17 *)VAR6[VAR5].VAR14;
void *VAR19;

if (!VAR13->VAR20) {
continue;
}

if (VAR13->VAR20 == VAR21) {
VAR19 = &VAR18->VAR22;
} else {
VAR19 = &VAR16->VAR23;
}

FUN3(VAR13->VAR20, VAR19, VAR10, sizeof(VAR10));
if (VAR5 != 0) {
fprintf(VAR2, "");
}
fprintf(VAR2, "", VAR10);
}
}
}