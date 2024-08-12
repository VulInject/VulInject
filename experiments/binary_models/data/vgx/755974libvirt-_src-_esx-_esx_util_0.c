char *
FUN1(const char *VAR1)
{

static const char *VAR2 =
"";


static const char *VAR3 =
"";

FUN2(VAR4) VAR5 = VAR6;
const char *VAR7 = VAR1;
size_t VAR8;
unsigned char VAR9, VAR10, VAR11;


while (*VAR7 != '') {
VAR8 = strspn(VAR7, VAR2);

if (VAR8 > 0) {
FUN3(&VAR5, VAR7, VAR8);

VAR7 += VAR8;
} else {
VAR8 = strcspn(VAR7, VAR2);

FUN4(&VAR5, '');

while (VAR8 > 0) {
VAR9 = *VAR7++;
VAR10 = VAR8 > 1 ? *VAR7++ : 0;
VAR11 = VAR8 > 2 ? *VAR7++ : 0;

FUN4(&VAR5, VAR3[(VAR9 >> 2) & 0x3f]);
FUN4(&VAR5, VAR3[((VAR9 << 4) + (VAR10 >> 4)) & 0x3f]);

if (VAR8 > 1)
FUN4(&VAR5, VAR3[((VAR10 << 2) + (VAR11 >> 6)) & 0x3f]);

if (VAR8 > 2)
FUN4(&VAR5, VAR3[VAR11 & 0x3f]);

VAR8 -= VAR8 > 3 ? 3 : VAR8;
}

if (*VAR7 != '')
FUN4(&VAR5, '');
}
}

return FUN5(&VAR5);
}