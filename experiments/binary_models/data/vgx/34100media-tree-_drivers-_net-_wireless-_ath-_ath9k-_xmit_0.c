struct VAR1 *FUN1(struct VAR2 *VAR3, int VAR4, int VAR5)
{
struct VAR6 *VAR7 = VAR3->VAR8;
struct ath9k_tx_queue_info VAR9;
static const int VAR10[] = {
[VAR11] = VAR12,
[VAR13] = VAR14,
[VAR15] = VAR16,
[VAR17] = VAR18,
};
int VAR19, VAR20;

memset(&VAR9, 0, sizeof(VAR9));
VAR9.VAR21 = VAR10[VAR5];
VAR9.VAR22 = VAR23;
VAR9.VAR24 = VAR23;
VAR9.VAR25 = VAR23;
VAR9.VAR26 = 0;


if (VAR7->VAR27.VAR28 & VAR29) {
VAR9.VAR30 = VAR31;
} else {
if (VAR4 == VAR32)
VAR9.VAR30 = VAR33;
else
VAR9.VAR30 = VAR34 |
VAR33;
}
VAR19 = FUN2(VAR7, VAR4, &VAR9);
if (VAR19 == -1) {

return NULL;
}
if (!FUN3(VAR3, VAR19)) {
struct VAR1 *VAR35 = &VAR3->VAR36.VAR35[VAR19];

VAR35->VAR19 = VAR19;
VAR35->VAR37 = -1;
VAR35->VAR38 = NULL;
FUN4(&VAR35->VAR39);
FUN5(&VAR35->VAR40);
FUN6(&VAR35->VAR41);
VAR35->VAR42 = 0;
VAR35->VAR43 = 0;
VAR35->VAR44 = false;
VAR3->VAR36.VAR45 |= 1<<VAR19;

VAR35->VAR46 = VAR35->VAR47 = 0;
for (VAR20 = 0; VAR20 < VAR48; VAR20++)
FUN5(&VAR35->VAR49[VAR20]);
}
return &VAR3->VAR36.VAR35[VAR19];
}