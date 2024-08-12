FUN1 (VAR1 *VAR2, unsigned VAR3)
{
unsigned VAR4;
unsigned VAR5;
index_list_type new = FUN2 ();

for (VAR4 = FUN3 (*VAR2) - 1; VAR4 > 0; VAR4--)
{
unsigned VAR6;
unsigned VAR7;

unsigned VAR8 = VAR4;

for (VAR6 = 0; VAR6 < VAR4; VAR6++)
if (FUN4 (*VAR2, VAR6) > FUN4 (*VAR2, VAR8))
VAR8 = VAR6;

if (VAR8 != VAR4)
{
VAR7 = FUN4 (*VAR2, VAR4);
FUN4 (*VAR2, VAR4) = FUN4 (*VAR2, VAR8);
FUN4 (*VAR2, VAR8) = VAR7;
FUN5 (""); 
}
}


for (VAR4 = 0; VAR4 < FUN3 (*VAR2) - 1; VAR4++)
{
unsigned VAR9 = FUN4 (*VAR2, VAR4);
unsigned VAR10 = FUN4 (*VAR2, VAR4 + 1);


assert (VAR9 != VAR10);

FUN6 (&new, VAR9);
if (VAR10 == VAR9 + 1)
VAR4++;
}


VAR5 = FUN7 (*VAR2);
if (FUN3 (new) == 0
|| !(VAR5 == FUN7 (new) + 1
|| (VAR5 == VAR3 && FUN4 (*VAR2, 0) == 0)))
FUN6 (&new, VAR5);

FUN8 (VAR2);
*VAR2 = new;
}