void FUN1(void)
{
paddr_t VAR1 = 0;
uint32_t VAR2 = 0;
uint32_t VAR3 = 0;

if (FUN2(&VAR1))
FUN3("");
VAR1 = VAR4;
FUN4(&VAR2, &VAR3);


FUN5(&VAR5, VAR1 + VAR2,
VAR1 + VAR3);

FUN6(&VAR5, VAR1 + VAR2, VAR1 + VAR3);
FUN7(&VAR5.VAR6);
}