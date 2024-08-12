static void
FUN1(Page VAR1, VAR2 *VAR3)
{
OffsetNumber VAR4 = FUN2(VAR1);
int			VAR5;


for (VAR5 = VAR6; VAR5 <= VAR4; VAR5++)
{
ItemId		VAR7 = FUN3(VAR1, VAR5);

if (!FUN4(VAR7))
VAR3->VAR8++;
else
VAR3->VAR9++;
}
VAR3->VAR10 += FUN5(VAR1);
}