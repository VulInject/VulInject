static void FUN1(VAR1 *VAR2, gint VAR3, char *VAR4, gint VAR5, guint VAR6)
{
ETHERCAT_SOE_HEADER VAR7;
char VAR8[50];
char VAR9[50];
memset(VAR8, 0, sizeof(VAR8));

FUN2(&VAR7, VAR2, VAR3);
VAR3+=VAR10;

if ( !VAR7.VAR11.VAR12.VAR13 )
{
if ( !VAR7.VAR11.VAR12.VAR14 )
{
FUN3(VAR8, VAR7.VAR15.VAR16, sizeof(VAR8)-1);
VAR9[0] = '';
if ( VAR7.VAR11.VAR12.VAR17 )
(void) FUN4(VAR9, "", 50);
if ( VAR7.VAR11.VAR12.VAR18 )
(void) FUN4(VAR9, "", 50);
if ( VAR7.VAR11.VAR12.VAR19 )
(void) FUN4(VAR9, "", 50);
if ( VAR7.VAR11.VAR12.VAR20 )
(void) FUN4(VAR9, "", 50);
if ( VAR7.VAR11.VAR12.VAR21 )
(void) FUN4(VAR9, "", 50);
if ( VAR7.VAR11.VAR12.VAR22 )
(void) FUN4(VAR9, "", 50);
if ( VAR7.VAR11.VAR12.VAR23 )
(void) FUN4(VAR9, "", 50);
switch ( VAR7.VAR11.VAR12.VAR24 )
{
case VAR25:
snprintf ( VAR4, VAR5, "", VAR8, VAR9);
break;
case VAR26:
snprintf ( VAR4, VAR5, "", VAR8, VAR9, (VAR27)(VAR6-VAR10));
break;
case VAR28:
snprintf ( VAR4, VAR5, "", VAR8, VAR9);
break;
case VAR29:
snprintf ( VAR4, VAR5, "", VAR8, VAR9, (VAR27)(VAR6-VAR10));
break;
case VAR30:
snprintf ( VAR4, VAR5, "", VAR8, VAR9, (VAR27)(VAR6-VAR10));
break;
case 6:
snprintf ( VAR4, VAR5, "");
break;
default:
snprintf ( VAR4, VAR5, "");
}
}
else
snprintf ( VAR4, VAR5, "", VAR7.VAR15.VAR31);
}
else
snprintf ( VAR4, VAR5, "", FUN5(VAR2, VAR3));
}