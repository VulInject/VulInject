static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
static const struct ata_port_info VAR5 = {
.VAR6 = VAR7,
.VAR8 = VAR9,
.VAR10 = VAR11,
.VAR12 = &VAR13
};
const struct VAR14 *VAR15[] = { &VAR5, NULL };

FUN2(&VAR2->VAR2, VAR16);

return FUN3(VAR2, VAR15, &VAR17, NULL, 0);
}