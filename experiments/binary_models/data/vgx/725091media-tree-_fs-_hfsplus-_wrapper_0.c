static int FUN1(struct VAR1 *VAR2,
VAR3 *VAR4, VAR3 *VAR5)
{
struct cdrom_multisession VAR6;
struct cdrom_tocentry VAR7;
int VAR8;


*VAR4 = 0;
*VAR5 = FUN2(VAR2->VAR9->VAR10) >> 9;

if (FUN3(VAR2)->VAR11 >= 0) {
VAR7.VAR12 = FUN3(VAR2)->VAR11;
VAR7.VAR13 = VAR14;
VAR8 = FUN4(VAR2->VAR9,
VAR15, (unsigned long)&VAR7);
if (!VAR8 && (VAR7.VAR16 & VAR17) == 4) {
*VAR4 = (VAR3)VAR7.VAR18.VAR19 << 2;
return 0;
}
FUN5("");
return -VAR20;
}
VAR6.VAR21 = VAR14;
VAR8 = FUN4(VAR2->VAR9, VAR22,
(unsigned long)&VAR6);
if (!VAR8 && VAR6.VAR23)
*VAR4 = (VAR3)VAR6.VAR24.VAR19 << 2;
return 0;
}