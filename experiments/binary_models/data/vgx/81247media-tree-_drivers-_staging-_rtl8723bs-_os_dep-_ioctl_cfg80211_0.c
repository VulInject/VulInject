static int FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR3,
enum nl80211_iftype VAR4,
struct VAR5 *VAR6)
{
enum nl80211_iftype VAR7;
enum NDIS_802_11_NETWORK_INFRASTRUCTURE VAR8;
struct VAR9 *VAR10 = (struct VAR9 *)FUN2(VAR3);
struct VAR11 *VAR12 = VAR10->VAR12;
struct VAR13 *VAR14 = &(VAR10->VAR15);
int VAR16 = 0;
u8 VAR17 = false;

FUN3(VAR18"", FUN4(VAR3), VAR4);

if (FUN5(VAR10)->VAR19 == true)
{
VAR16 = -VAR20;
goto VAR21;
}

{
FUN3(VAR18"", FUN4(VAR3));
if (FUN6(VAR3) != 0) {
FUN3(VAR18"", FUN4(VAR3));
VAR16 = -VAR20;
goto VAR21;
}
}

if (VAR22 == FUN7(VAR10)) {
FUN3(VAR18"", FUN4(VAR3));
VAR16 = -VAR20;
goto VAR21;
}

VAR7 = VAR12->VAR23;
FUN3(VAR18"",
FUN4(VAR3), VAR7, VAR4);

if (VAR7 != VAR4)
{
VAR17 = true;
VAR14->VAR24 = 0xffff;
VAR14->VAR25 = 0xff;
}

switch (VAR4) {
case VAR26:
VAR8 = VAR27;
break;
case VAR28:
VAR8 = VAR29;
break;
case VAR30:
VAR8 = VAR31;
break;
default:
VAR16 = -VAR32;
goto VAR21;
}

VAR12->VAR23 = VAR4;

if (FUN8(VAR10, VAR8) ==false)
{
VAR12->VAR23 = VAR7;
VAR16 = -VAR20;
goto VAR21;
}

FUN9(VAR10, VAR8, true);

VAR21:

FUN3(VAR18"", FUN4(VAR3), VAR16);
return VAR16;
}