VAR1
FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR3->VAR6.VAR5;
uint16_t VAR7, VAR8;

FUN2(VAR5, VAR9, &VAR7);
VAR8 = (VAR7 >> VAR10) & VAR11;
if (VAR8 < 0xf0)
return VAR8 * (32 * 1024 * 1024);
else
return (VAR8 - 0xf0) * (4 * 1024 * 1024) + (4 * 1024 * 1024);
}