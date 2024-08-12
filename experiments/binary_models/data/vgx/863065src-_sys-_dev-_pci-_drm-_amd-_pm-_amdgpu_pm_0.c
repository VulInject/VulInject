static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
char *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR3);
struct VAR9 *VAR10 = FUN3(VAR8);
struct pp_states_info VAR11;
uint32_t VAR12;
int VAR13, VAR14;

if (FUN4(VAR10))
return -VAR15;
if (VAR10->VAR16 && !VAR10->VAR17)
return -VAR15;

VAR14 = FUN5(VAR8->VAR3);
if (VAR14 < 0) {
FUN6(VAR8->VAR3);
return VAR14;
}

if (FUN7(VAR10, &VAR11))
memset(&VAR11, 0, sizeof(VAR11));

FUN8(VAR8->VAR3);
FUN6(VAR8->VAR3);

VAR13 = FUN9(VAR6, "", VAR11.VAR18);
for (VAR12 = 0; VAR12 < VAR11.VAR18; VAR12++)
VAR13 += FUN10(VAR6, VAR13, "", VAR12,
(VAR11.VAR19[VAR12] == VAR20) ? "" :
(VAR11.VAR19[VAR12] == VAR21) ? "" :
(VAR11.VAR19[VAR12] == VAR22) ? "" :
(VAR11.VAR19[VAR12] == VAR23) ? "" : "");

return VAR13;
}