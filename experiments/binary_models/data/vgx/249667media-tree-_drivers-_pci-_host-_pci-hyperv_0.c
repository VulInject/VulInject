static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct {
struct pci_packet VAR5;
u8 VAR6[sizeof(struct VAR7)];
} VAR8;
struct pci_bus_relations VAR9;
struct hv_pci_compl VAR10;
int VAR11;


if (VAR2->VAR12->VAR13)
return;


memset(&VAR9, 0, sizeof(VAR9));
FUN3(VAR4, &VAR9);

VAR11 = FUN4(VAR2);
if (VAR11)
FUN5(&VAR2->VAR14,
"");

memset(&VAR8.VAR5, 0, sizeof(VAR8.VAR5));
FUN6(&VAR10.VAR15);
VAR8.VAR5.VAR16 = VAR17;
VAR8.VAR5.VAR18 = &VAR10;
VAR8.VAR5.VAR19[0].VAR20 = VAR21;

VAR11 = FUN7(VAR2->VAR12, &VAR8.VAR5.VAR19,
sizeof(struct VAR7),
(unsigned long)&VAR8.VAR5,
VAR22,
VAR23);
if (!VAR11)
FUN8(&VAR10.VAR15, 10 * VAR24);
}