int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct mpi3_pel_req_action_get_sequence_numbers VAR5;
u8 VAR6 = VAR7;
int VAR8 = 0;

memset(&VAR5, 0, sizeof(VAR5));
VAR2->VAR9.VAR10 = VAR11;
VAR2->VAR9.VAR12 = 0;
VAR2->VAR9.VAR13 = 0;
VAR2->VAR9.VAR14 = 0;
VAR2->VAR9.VAR15 = VAR16;
VAR5.VAR17 = FUN2(VAR18);
VAR5.VAR19 = VAR20;
VAR5.VAR21 = VAR22;
FUN3(&VAR5.VAR23, VAR6,
VAR2->VAR24, VAR2->VAR25);

VAR8 = FUN4(VAR2, &VAR5,
sizeof(VAR5), 0);
if (VAR8) {
if (VAR4) {
VAR4->VAR10 = VAR26;
VAR4->VAR15 = NULL;
VAR4->VAR27 = 0;
}
VAR2->VAR28 = false;
}

return VAR8;
}