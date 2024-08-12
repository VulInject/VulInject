static int FUN1(struct VAR1 *VAR2, u32 VAR3,
int VAR4, int VAR5, u32 VAR6)
{
struct VAR7 *VAR8 = VAR2->VAR9;
struct VAR10 *VAR11 = VAR8->VAR12;
unsigned long VAR13;
int VAR14;

if (FUN2(VAR11, VAR2->VAR15, FUN3(VAR3)) == 0)
return VAR16;

FUN4(&VAR11->VAR17, VAR13);
VAR14 = FUN5(VAR11->VAR18, VAR2, VAR3, VAR4, VAR5, VAR6);
FUN6(&VAR11->VAR17, VAR13);

return VAR14;
}

static struct pci_ops VAR19 = {
.read = VAR20,
.write = VAR21,
};