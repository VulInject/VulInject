char *
FUN1(const char *VAR1)
{
int VAR2 = 0;
int VAR3 = 0, VAR4 = 0;
char VAR5[3], VAR6[4];
int VAR7 = strlen(VAR1);
char *VAR8 = malloc(VAR9);

if (VAR8 == NULL) {
VAR10 = VAR11;
return (NULL);
}

while (VAR7--) {
VAR5[VAR3++] = *(VAR1++);
if (VAR3 == 3) {
VAR6[0] = (VAR5[0] & 0xfc) >> 2;
VAR6[1] = ((VAR5[0] & 0x03) << 4) +
((VAR5[1] & 0xf0) >> 4);
VAR6[2] = ((VAR5[1] & 0x0f) << 2) +
((VAR5[2] & 0xc0) >> 6);
VAR6[3] = VAR5[2] & 0x3f;

for (VAR3 = 0; VAR3 < 4; VAR3++)
VAR8[VAR2++] = VAR12[VAR6[VAR3]];
VAR3 = 0;
}
}

if (VAR3) {
for (VAR4 = VAR3; VAR4 < 3; VAR4++)
VAR5[VAR4] = '';

VAR6[0] = (VAR5[0] & 0xfc) >> 2;
VAR6[1] = ((VAR5[0] & 0x03) << 4) +
((VAR5[1] & 0xf0) >> 4);
VAR6[2] = ((VAR5[1] & 0x0f) << 2) +
((VAR5[2] & 0xc0) >> 6);
VAR6[3] = VAR5[2] & 0x3f;

for (VAR4 = 0; VAR4 < (VAR3 + 1); VAR4++)
VAR8[VAR2++] = VAR12[VAR6[VAR4]];

while (VAR3++ < 3)
VAR8[VAR2++] = '';
}

VAR8[VAR2++] = '';
return (VAR8);
}