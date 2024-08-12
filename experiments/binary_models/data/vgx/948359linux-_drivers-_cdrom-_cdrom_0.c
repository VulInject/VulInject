static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned long VAR4)
{
struct packet_command VAR5;
void VAR6 *VAR7 = (void VAR6 *)VAR4;

memset(&VAR5, 0, sizeof(VAR5));


switch (VAR3) {
case VAR8:
case VAR9:
case VAR10:
return FUN2(VAR2, VAR7, &VAR5, VAR3);
case VAR11:
return FUN3(VAR2, VAR7);
case VAR12:
return FUN4(VAR2, VAR7);
case VAR13:
return FUN5(VAR2, VAR7, &VAR5);
case VAR14:
return FUN6(VAR2, VAR7, &VAR5);
case VAR15:
case VAR16:
return FUN7(VAR2, VAR7, &VAR5, VAR3);
case VAR17:
case VAR18:
return FUN8(VAR2, &VAR5, VAR3);
case VAR19:
case VAR20:
return FUN9(VAR2, &VAR5, VAR3);
case VAR21:
return FUN10(VAR2, VAR7, &VAR5);
case VAR22:
return FUN11(VAR2, VAR7);
case VAR23:
return FUN12(VAR2, VAR7);
case VAR24:
return FUN13(VAR2, VAR7);
}

return -VAR25;
}