const uint32_t VAR1 = 1024;



VAR2 *VAR3[VAR4];
uint8_t VAR5[VAR4][VAR6];

int
main (void)
{
FUN1 ();

FUN2 ();

for (uint32_t VAR7 = 0; VAR7 < VAR1; VAR7++)
{
const size_t VAR8 = ((VAR9) rand () % VAR4) + 1;

for (size_t VAR10 = 0; VAR10 < VAR8; VAR10++)
{
VAR3[VAR10] = (VAR2 *) FUN3 (VAR6);

if (VAR3[VAR10] != NULL)
{
for (size_t VAR11 = 0; VAR11 < VAR6; VAR11++)
{
VAR3[VAR10][VAR11] = (VAR2) (rand () % 256);
}

memcpy (VAR5[VAR10], VAR3[VAR10], VAR6);
}
}



for (size_t VAR10 = 0; VAR10 < VAR8; VAR10++)
{
if (rand () % 256 == 0)
{
FUN4 ();
}

if (VAR3[VAR10] != NULL)
{
FUN5 (!memcmp (VAR5[VAR10], VAR3[VAR10], VAR6));

FUN6 (VAR3[VAR10], VAR6);
}
}
}

FUN7 ();

FUN8 ();

return 0;
}