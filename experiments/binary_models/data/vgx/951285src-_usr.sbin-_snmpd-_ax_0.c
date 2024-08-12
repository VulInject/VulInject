VAR1
FUN1(struct VAR2 *VAR2, uint8_t VAR3, struct VAR4 *VAR5,
struct VAR6 *VAR7)
{
if (FUN2(VAR2, VAR8, 0, 0, 0, 0,
NULL) == -1)
return 0;
FUN3(VAR2, 4);
VAR2->VAR9[VAR2->VAR10++] = VAR3;
memset(&(VAR2->VAR9[VAR2->VAR10]), 0, 3);
VAR2->VAR10 += 3;
if (FUN4(VAR2, VAR5) == -1)
return 0;
if (FUN5(VAR2, VAR7) == -1)
return 0;

return FUN6(VAR2);
}