int main(int argc, char *argv[])
{
uint32_t VAR1;
long VAR2;
VAR3 *VAR4 = NULL;
int VAR5 = 1;

if (argc < 2) {
fprintf(VAR6, "", argv[0]);
goto VAR7;
}



VAR4 = fopen(argv[1], "");
if (!VAR4) {
FUN1(argv[1]);
goto VAR7;
}


if (FUN2(VAR4, -4L, VAR8)) {
FUN1(argv[1]);
}

if (fread(&VAR1, sizeof(VAR1), 1, VAR4) != 1) {
FUN1(argv[1]);
goto VAR7;
}

VAR2 = FUN3(VAR4);
VAR1 = FUN4(&VAR1);

FUN5("".VAR9..VAR10\""VAR11\"");
FUN5("");
FUN5("", VAR2);
FUN5("");
FUN5("", (unsigned long)VAR1);

FUN5("");
FUN5("");
FUN5(""%VAR12\"", argv[1]);
FUN5("");

VAR5 = 0;
VAR7:
if (VAR4)
fclose(VAR4);
return VAR5;
}