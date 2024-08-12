static int FUN1(struct VAR1 *VAR2, unsigned VAR3)
{
void VAR4 *VAR5 = FUN2(VAR2, VAR3);
uint32_t VAR6, VAR7 = FUN3(VAR3);
unsigned long VAR8;
int VAR9;

if (FUN4()) {
VAR9 = FUN5(VAR2->VAR5 + VAR3);
if (VAR9)
return VAR9;
}

FUN6(&VAR10, VAR8);

VAR6 = FUN7(VAR5 + VAR11);
if (FUN8(VAR2->VAR5 + VAR3))
VAR6 |= VAR7;
else
VAR6 &= ~VAR7;
FUN9(VAR6, VAR5 + VAR11);

FUN10(&VAR10, VAR8);
return 0;
}