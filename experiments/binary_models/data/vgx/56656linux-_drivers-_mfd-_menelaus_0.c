static void FUN1(struct VAR1 *VAR2)
{
int VAR3;
unsigned char VAR4 = 0;

VAR3 = FUN2(VAR5);
if (VAR3 < 0)
return;

if (!(VAR3 & 0x1))
VAR4 |= VAR6;

if (!(VAR3 & 0x2))
VAR4 |= VAR7;

if (VAR2->VAR8)
VAR2->FUN3(VAR2->VAR9,
VAR4);
}