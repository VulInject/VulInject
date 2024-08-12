unsigned int FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
unsigned int VAR4;

VAR3 = FUN2(VAR2, VAR3);

for (VAR4 = 0; VAR4 < VAR2->VAR5; VAR4++) {
if (VAR2->VAR6[VAR4] == VAR3)
return VAR4;
}

FUN3();
return 0;
}