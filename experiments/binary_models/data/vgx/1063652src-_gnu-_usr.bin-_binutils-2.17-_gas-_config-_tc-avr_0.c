FUN1 (void)
{
unsigned int VAR1;
struct VAR2 *VAR3;

VAR4 = FUN2 ();


for (VAR3 = VAR5; VAR3->VAR6; VAR3++)
FUN3 (VAR4, VAR3->VAR6, (char *) VAR3);

VAR7 = FUN2 ();

for (VAR1 = 0; VAR1 < FUN4 (VAR8); ++VAR1)
{
mod_index VAR9;

VAR9.VAR10 = VAR1 + 10;
FUN3 (VAR7, FUN5 (VAR1), VAR9.VAR11);
}

FUN6 (VAR12, VAR13, VAR14->VAR15);
}