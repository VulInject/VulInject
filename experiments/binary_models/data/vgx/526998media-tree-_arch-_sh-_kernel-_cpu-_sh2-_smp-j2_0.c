static void FUN1(unsigned int VAR1, unsigned long VAR2)
{
struct VAR3 *VAR4;
u32 VAR5[2];
void VAR6 *VAR7, *VAR8;

if (!VAR1) return;

VAR4 = FUN2(VAR1, NULL);
if (!VAR4) return;

if (FUN3(VAR4, "", VAR5, 2)) return;
VAR7 = FUN4(VAR5[0], sizeof(VAR9));
VAR8 = FUN4(VAR5[1], sizeof(VAR9));

FUN5(VAR2, VAR8);
FUN5(1, VAR7);

FUN6(VAR8);
FUN6(VAR7);

FUN7("", VAR1);
}