static int
FUN1(struct VAR1 *VAR2)
{
uint16_t VAR3;
uint32_t VAR4;

if (FUN2(VAR2->VAR5, VAR6, &VAR3) !=
VAR7)
return (-1);

VAR4 = FUN3(VAR2->VAR5, VAR3 + VAR8);

if (VAR4 == VAR9)
return (-1);

return (VAR4 & VAR10);
}