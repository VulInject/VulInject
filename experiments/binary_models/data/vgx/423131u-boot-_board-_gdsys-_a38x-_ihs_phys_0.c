VAR1 FUN1(void)
{
uint VAR2;
uint VAR3 = 0;
struct gpio_desc VAR4 = {};
char VAR5[64];
static const char * const VAR6[] = {"", "",
"", "",
""};


for (VAR2 = 0; VAR2 < 5; ++VAR2) {
snprintf(VAR5, 64, "", VAR2);

if (FUN2(&VAR4, VAR6[VAR2], 0x20, VAR5))
continue;


if (FUN3(&VAR4))
VAR3 |= (1 << (VAR2 * 2));
else

continue;

snprintf(VAR5, 64, "", VAR2);

if (FUN2(&VAR4, VAR6[VAR2], 0x27, VAR5)) {

VAR3 |= (1 << (VAR2 * 2 + 1));
continue;
}

if (FUN3(&VAR4) == 0)
VAR3 |= (1 << (VAR2 * 2 + 1));
}

return VAR3;
}