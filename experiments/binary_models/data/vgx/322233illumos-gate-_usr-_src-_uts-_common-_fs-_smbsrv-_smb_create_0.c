VAR1
FUN1(VAR2 *VAR3)
{
static uint16_t VAR4 = 10000;
struct VAR5 *VAR6 = &VAR3->VAR7.open;
char VAR8[VAR9];
char *VAR10;
uint16_t VAR11;

++VAR4;
VAR11 = 1; 
VAR11 += snprintf(VAR8, VAR9, "", VAR4);

VAR10 = FUN2(VAR3, VAR12);
(void) snprintf(VAR10, VAR12, "",
VAR6->VAR13.VAR14.VAR15, VAR8);
VAR6->VAR13.VAR14.VAR15 = VAR10;

if (FUN3(VAR3) != VAR16)
return (VAR17);

if (FUN4(VAR3, 1, VAR18, "", 1, VAR3->VAR19,
VAR18, VAR3, VAR8))
return (VAR17);

return (VAR20);
}