static VAR1
FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
struct attr VAR6 = {0};
struct VAR7 *VAR8;
struct VAR9 *VAR10;
struct bgp_path_info VAR11 = {0};
struct bgp_path_info_extra VAR12 = {0};
const struct VAR13 *VAR14;
route_map_result_t VAR15 = VAR16;

for (VAR8 = FUN2(VAR3); VAR8; VAR8 = FUN3(VAR8)) {
VAR14 = FUN4(VAR8);
assert(VAR14);

for (VAR10 = FUN5(VAR8); VAR10; VAR10 = VAR10->VAR17) {
VAR6 = *VAR10->VAR18;


FUN6(&VAR11, &VAR12, VAR8, VAR10,
VAR10->VAR19, &VAR6);

FUN7(VAR6.VAR20);

VAR15 = FUN8(VAR5, VAR14, &VAR11);
FUN9(&VAR6);

if (VAR15 == VAR21) {
FUN10(VAR8);
FUN11(
"",
VAR22);

return VAR15;
}
}
}

FUN11("",
VAR22);

return VAR15;
}