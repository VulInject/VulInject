static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = &VAR4->VAR6;
struct VAR7 *VAR8;
u32 VAR9;

VAR9 = FUN3(0);
FUN4(VAR8, &VAR2->VAR7, VAR10)
VAR9 |= FUN3(VAR8->VAR11);

FUN5(VAR6, VAR9, VAR12);

return 0;
}

static const struct pci_epc_features VAR13 = {
.VAR14 = false,
.VAR15 = true,
.VAR16 = false,
};