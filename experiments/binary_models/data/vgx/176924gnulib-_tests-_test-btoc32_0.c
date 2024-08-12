main (int argc, char *argv[])
{
int VAR1;


if (FUN1 (VAR2, "") == NULL)
return 1;

FUN2 (FUN3 (VAR3) == VAR4);

if (argc > 1)
switch (argv[1][0])
{
case '':

for (VAR1 = 0; VAR1 < 0x80; VAR1++)
FUN2 (FUN3 (VAR1) == VAR1);
for (VAR1 = 0xA0; VAR1 < 0x100; VAR1++)
FUN2 (FUN3 (VAR1) != VAR4);
return 0;

case '':

for (VAR1 = 0; VAR1 < 0x80; VAR1++)
FUN2 (FUN3 (VAR1) == VAR1);
for (VAR1 = 0x80; VAR1 < 0x100; VAR1++)
FUN2 (FUN3 (VAR1) == VAR4);
return 0;
}

return 1;
}