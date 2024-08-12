static void
FUN1(void)
{
static smb_cfg_id_t	VAR1[VAR2] = {
VAR3,
VAR4
};
char		VAR5[16];
uint32_t	VAR6;
int		VAR7;

VAR8 = VAR9;
VAR10 = 0;
FUN2(VAR11, sizeof (VAR12) * VAR2);

for (VAR7 = 0; VAR7 < VAR2; ++VAR7) {
VAR5[0] = '';
(void) FUN3(VAR1[VAR7], VAR5, sizeof (VAR5));

if ((VAR6 = FUN4(VAR5)) == VAR13)
continue;

VAR8 = VAR14;
VAR11[VAR10].VAR15 = VAR16;
VAR11[VAR10].VAR17 = sizeof (struct VAR18);
VAR11[VAR10].VAR19.VAR20 = VAR21;
VAR11[VAR10].VAR19.VAR22.VAR23 = VAR6;
VAR11[VAR10].VAR19.VAR24 = FUN5(VAR25);
VAR10++;
}
}