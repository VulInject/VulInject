static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
const size_t VAR5 = sizeof(VAR6);
sync_serial_settings VAR7;
struct VAR8 *VAR8 = FUN2(VAR2);

switch (VAR4->VAR9) {
case VAR10:
VAR4->VAR9 = VAR11;
if (VAR4->VAR5 < VAR5) {
VAR4->VAR5 = VAR5; 
return -VAR12;
}
memset(&VAR7, 0, sizeof(VAR7));
VAR7.VAR13 = FUN3(VAR8)->VAR14;
VAR7.VAR15 = 0;
VAR7.VAR16 = 0;

if (FUN4(VAR4->VAR17.VAR18, &VAR7, VAR5))
return -VAR19;
return 0;

case VAR11:
if (!FUN5(VAR20))
return -VAR21;
if (VAR2->VAR22 & VAR23)
return -VAR24;

if (FUN6(&VAR7, VAR4->VAR17.VAR18,
VAR5))
return -VAR19;

if (VAR7.VAR13 != VAR25 &&
VAR7.VAR13 != VAR26)
return -VAR27; 

if (VAR7.VAR16 != 0)
return -VAR27;

FUN3(VAR8)->VAR14 = VAR7.VAR13;
return 0;

default:
return FUN7(VAR2, VAR4);
}
}