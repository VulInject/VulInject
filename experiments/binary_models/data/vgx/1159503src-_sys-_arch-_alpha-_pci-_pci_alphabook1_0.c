int     FUN1(struct VAR1 *,
VAR2 *);
const char *FUN2(void *, VAR2);
int	 FUN3(void *, VAR2);
void    *FUN4(void *, VAR2,
int, int (*VAR3)(void *), void *, const char *);
void    FUN5(void *, void *);


void
FUN6(struct VAR4 *VAR5)
{
bus_space_tag_t VAR6 = &VAR5->VAR7;
pci_chipset_tag_t VAR8 = &VAR5->VAR9;
pcireg_t VAR10;
int VAR11;


VAR10 = FUN7(VAR8, FUN8(VAR8, 0, VAR12, 0),
VAR13);
VAR11 = (VAR10 & 0xff) >= 3;

if (!VAR11)
FUN9("");

VAR8->VAR14 = VAR5;
VAR8->VAR15 = VAR16;
VAR8->VAR17 = VAR18;
VAR8->VAR19 = VAR20;
VAR8->VAR21 = VAR22;
VAR8->VAR23 = VAR24;


VAR8->VAR25 = NULL;

FUN10(VAR8, VAR6);
FUN11("");
}