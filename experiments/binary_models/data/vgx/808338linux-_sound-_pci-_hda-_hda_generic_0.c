static int FUN1(struct VAR1 *VAR2, const char *VAR3, int VAR4,
unsigned int VAR5, struct VAR6 *VAR7)
{
unsigned int VAR8;
int VAR9 = VAR10;

if (!VAR7)
return 0;
VAR8 = VAR7->VAR11[VAR12];
if (!VAR8)
return 0;
VAR8 = FUN2(VAR8, VAR5);
if (FUN3(VAR8) == VAR13) {
hda_nid_t VAR14 = FUN4(VAR8);
int VAR15 = FUN5(VAR2, VAR14);
if (VAR15 > 1) {
VAR9 = VAR16;
VAR8 |= VAR15 << 19;
}
}
return FUN6(VAR2->VAR17, VAR9, VAR3, VAR4, VAR8);
}