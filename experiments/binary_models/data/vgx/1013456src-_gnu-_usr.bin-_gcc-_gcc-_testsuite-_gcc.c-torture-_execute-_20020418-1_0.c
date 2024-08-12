
struct VAR1 { int VAR2; };

void FUN1(struct VAR1 *VAR3)
{
if (FUN2(VAR3->VAR2 < 52, 0))
FUN3();
VAR4:
VAR3->VAR2++;
if (VAR3->VAR2 >= 62)
goto VAR4;
}