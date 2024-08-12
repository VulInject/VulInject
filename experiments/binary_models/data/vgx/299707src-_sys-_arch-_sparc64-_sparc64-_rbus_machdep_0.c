void
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3,
struct VAR4 *VAR5)
{
pci_chipset_tag_t VAR6 = VAR5->VAR7;
int VAR8 = FUN2(VAR5->VAR9);
int VAR10, VAR11[2];
pcireg_t VAR12;

VAR12 = FUN3(VAR6, VAR5->VAR9, VAR13);
if (((VAR12 >> 8) & 0xff) != 0)
return;

if (FUN4(FUN5(VAR8), "", &VAR11,
sizeof(VAR11)) != sizeof(VAR11))
return;

VAR10 = VAR11[0] + 1;
while (VAR10 < 256 && VAR6->VAR14[VAR10])
VAR10++;
if (VAR10 == 256)
return;
VAR6->VAR14[VAR10] = VAR8;

VAR12 &= ~0x0000ff00;
VAR12 |= (VAR10 << 8);
FUN6(VAR6, VAR5->VAR9, VAR13, VAR12);
}