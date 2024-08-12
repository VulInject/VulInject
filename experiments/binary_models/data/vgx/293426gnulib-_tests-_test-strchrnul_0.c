main (void)
{
size_t VAR1 = 0x100000;
char *VAR2 = malloc (VAR1 + 1);
FUN1 (VAR2);

VAR2[0] = '';
VAR2[1] = '';
memset (VAR2 + 2, '', 1024);
memset (VAR2 + 1026, '', VAR1 - 1028);
VAR2[VAR1 - 2] = '';
VAR2[VAR1 - 1] = '';
VAR2[VAR1] = '';


FUN1 (FUN2 (VAR2, '') == VAR2);
FUN1 (FUN2 (VAR2, '') == VAR2 + 1);
FUN1 (FUN2 (VAR2, '') == VAR2 + 2);
FUN1 (FUN2 (VAR2, '') == VAR2 + 1026);

FUN1 (FUN2 (VAR2 + 1, '') == VAR2 + VAR1 - 1);
FUN1 (FUN2 (VAR2 + 1, '') == VAR2 + VAR1 - 2);

FUN1 (FUN2 (VAR2, '') == VAR2 + VAR1);
FUN1 (FUN2 (VAR2, '') == VAR2 + VAR1);


{
size_t VAR3 = 10000;
for (; VAR3 > 0; VAR3--)
{
FUN1 (FUN2 (VAR2, '') == VAR2 + 2);
}
}


{
int VAR4, VAR5;
for (VAR4 = 0; VAR4 < 32; VAR4++)
{
for (VAR5 = 0; VAR5 < 256; VAR5++)
VAR2[VAR4 + VAR5] = (VAR5 + 1) & 0xff;
for (VAR5 = 1; VAR5 < 256; VAR5++)
{
FUN1 (FUN2 (VAR2 + VAR4, VAR5) == VAR2 + VAR4 + VAR5 - 1);
VAR2[VAR4 + VAR5 - 1] = (VAR5 == 1 ? 2 : 1);
FUN1 (FUN2 (VAR2 + VAR4, VAR5) == VAR2 + VAR4 + 255);
VAR2[VAR4 + VAR5 - 1] = VAR5;
}
}
}

free (VAR2);

return 0;
}