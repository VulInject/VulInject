int
FUN1(VAR1 *VAR2, const void *VAR3, int VAR4)
{
int VAR5;

if (VAR2->VAR6 != NULL)
VAR5 = FUN2(FUN3(VAR2), VAR3, VAR4, 0,
(struct VAR7 *)&VAR2->VAR8,
(struct VAR7 *)&VAR2->VAR9, VAR2->VAR6);
else
VAR5 = FUN4(FUN3(VAR2), VAR3, VAR4, 0,
(struct VAR7 *)&VAR2->VAR8,
(struct VAR7 *)&VAR2->VAR9);
if (VAR2->VAR6 != NULL)
VAR5 = FUN5(FUN3(VAR2), VAR3, VAR4, 0,
(struct VAR7 *)&VAR2->VAR9, VAR2->VAR9.VAR10,
VAR2->VAR6);
else
VAR5 = sendto(FUN3(VAR2), VAR3, VAR4, 0,
(struct VAR7 *)&VAR2->VAR9, VAR2->VAR9.VAR10);
return VAR5;
}