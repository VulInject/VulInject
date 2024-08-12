struct VAR1 *
FUN1(u_int VAR2, u_int32_t VAR3, union VAR4 *VAR5,
u_int8_t VAR6, int VAR7)
{
u_int32_t VAR8;
struct VAR1 *VAR9;

FUN2();

FUN3(&VAR10);
VAR8 = FUN4(VAR3, VAR5, VAR6);

for (VAR9 = VAR11[VAR8]; VAR9 != NULL; VAR9 = VAR9->VAR12)
if ((VAR9->VAR13 == VAR3) && (VAR9->VAR14 == VAR6) &&
((!VAR7 && VAR9->VAR15 == VAR2) ||
(VAR7 && VAR9->VAR16 == VAR2)) &&
!memcmp(&VAR9->VAR17, VAR5, VAR5->VAR18.VAR19))
break;

FUN5(VAR9);
FUN6(&VAR10);
return VAR9;
}