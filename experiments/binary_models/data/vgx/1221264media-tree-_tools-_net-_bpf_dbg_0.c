static void FUN1(unsigned int VAR1)
{
int VAR2;
bool VAR3 = false;

for (VAR2 = 0; VAR2 < FUN2(VAR4); VAR2++) {
if (VAR4[VAR2] == (int) VAR1) {
FUN3("");
VAR3 = true;
break;
}

if (VAR4[VAR2] == -1 && VAR3 == false) {
VAR4[VAR2] = VAR1;
VAR3 = true;
}
}

if (!VAR3)
FUN3("");
}