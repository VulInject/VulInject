int
main(int argc, char *argv[])
{
const char *VAR1 = "";

int VAR2;
bool VAR3 = true;
while ((VAR2 = getopt(argc, argv, "")) != VAR4) {
switch (VAR2) {
case '':
VAR1 = VAR5;
break;
case '':
VAR3 = false;
break;
default:
FUN1();
}
}

argc -= VAR6;
argv += VAR6;


int VAR7 = open(VAR1, VAR8);
if (VAR7 == -1)
FUN2(1, "");

struct stat VAR9;
if (FUN3(VAR7, &VAR9) == -1)
FUN2(1, "");
if (VAR9.VAR10 < (VAR11)sizeof(VAR12))
FUN4(1, "");
if ((VAR13)VAR9.VAR10 > VAR14)
FUN4(1, "");
size_t VAR15 = VAR9.VAR10;

const char *VAR16 = FUN5(NULL, VAR15, VAR17, VAR18, VAR7, 0);
if (VAR16 == VAR19)
FUN2(1, "");

close(VAR7);


Elf_Ehdr VAR20;
memcpy(&VAR20, VAR16, sizeof(VAR20));
if (!FUN6(VAR20))
FUN4(1, "");
if (VAR20.VAR21[VAR22] != VAR23)
FUN4(1, "");
if (VAR20.VAR21[VAR24] != VAR25)
FUN4(1, "");
if (VAR20.VAR26 > VAR15)
FUN4(1, "");
if (VAR20.VAR27 < sizeof(VAR28))
FUN4(1, "");
if (VAR20.VAR29 > (VAR15 - VAR20.VAR26) / VAR20.VAR27)
FUN4(1, "");
if (VAR20.VAR30 >= VAR20.VAR29)
FUN4(1, "");


Elf_Shdr VAR31;
memcpy(&VAR31, VAR16 + VAR20.VAR26 + VAR20.VAR30 * VAR20.VAR27,
sizeof(VAR31));
if (VAR31.VAR32 != VAR33)
FUN4(1, "");
if (VAR31.VAR34 > VAR15)
FUN4(1, "");
if (VAR31.VAR35 > VAR15 - VAR31.VAR34)
FUN4(1, "");
const char *VAR36 = VAR16 + VAR31.VAR34;
size_t VAR37 = VAR31.VAR35;


size_t VAR38;
for (VAR38 = 0; VAR38 < VAR20.VAR29; VAR38++) {
memcpy(&VAR31, VAR16 + VAR20.VAR26 + VAR38 * VAR20.VAR27,
sizeof(VAR31));
if (0 == FUN7("", VAR36 + VAR31.VAR39,
VAR37 - VAR31.VAR39))
break;
}
if (VAR38 == VAR20.VAR29)
FUN4(1, "");
if (VAR31.VAR34 > VAR15)
FUN4(1, "");
if (VAR31.VAR35 > VAR15 - VAR31.VAR34)
FUN4(1, "");
const char *VAR40 = VAR16 + VAR31.VAR34;
size_t VAR41 = VAR31.VAR35;

const char *VAR42;
while ((VAR42 = *argv++) != NULL) {
unsigned long VAR43 = FUN8(VAR42, NULL, 16);

const char *VAR44, *VAR45;
int VAR46;
if (!FUN9(VAR40, VAR41, VAR43,
&VAR44, &VAR45, &VAR46)) {
VAR44 = NULL;
VAR45 = "";
VAR46 = 0;
}
if (VAR3 && VAR44 != NULL)
FUN10("", VAR44);
FUN10("", VAR45, VAR46);
}

return (0);
}